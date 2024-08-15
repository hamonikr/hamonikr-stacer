#include "app_manager.h"
#include <QDebug>

AppManager *AppManager::instance = nullptr;

AppManager *AppManager::ins()
{
    if (! instance) {
        instance = new AppManager;
    }

    return instance;
}

AppManager::AppManager()
{
    mSettingManager = SettingManager::ins();

    mTrayIcon = new QSystemTrayIcon(QIcon(":/static/themes/default/img/sidebar-icons/dash.png"));

    loadLanguageList();

//    loadThemeList();

    // 디버깅: 현재 언어 및 번역 파일 경로 출력
    QString language = mSettingManager->getLanguage();
    QString translationFilePath = "/usr/share/stacer/translations";
    // qDebug() << "Current Language:" << language;
    // qDebug() << "Translation File Path:" << translationFilePath;

    // 번역 파일 로드 여부 확인
    if (mTranslator.load(QString("stacer_%1").arg(language), translationFilePath)) {
        qApp->installTranslator(&mTranslator);
        // qDebug() << "Translation file loaded successfully.";

        // 언어에 따른 레이아웃 방향 설정
        if (language == "ar") {
            qApp->setLayoutDirection(Qt::RightToLeft);
            // qDebug() << "Layout direction set to RightToLeft.";
        } else {
            qApp->setLayoutDirection(Qt::LeftToRight);
            // qDebug() << "Layout direction set to LeftToRight.";
        }
    } else {
        // 번역 파일 로드 실패 시 에러 메시지 출력
        qDebug() << "Failed to load translation file for language:" << language;
    }
}

QSystemTrayIcon *AppManager::getTrayIcon()
{
    return mTrayIcon;
}

QSettings *AppManager::getStyleValues() const
{
    return mStyleValues;
}

void AppManager::loadLanguageList()
{
    QByteArray lanuagesJson = FileUtil::readStringFromFile(":/static/languages.json").toUtf8();
    QJsonArray lanuages = QJsonDocument::fromJson(lanuagesJson).array();

    for (int i = 0; i < lanuages.count(); ++i) {

        QJsonObject ob = lanuages.at(i).toObject();

        mLanguageList.insert(ob["value"].toString(), ob["text"].toString());
    }
}

QMap<QString, QString> AppManager::getLanguageList() const
{
    return mLanguageList;
}

//void AppManager::loadThemeList()
//{
//    QByteArray themesJson = FileUtil::readStringFromFile(":/static/themes.json").toUtf8();
//    QJsonArray themes = QJsonDocument::fromJson(themesJson).array();

//    for (int i = 0; i < themes.count(); ++i) {

//        QJsonObject ob = themes.at(i).toObject();

//        mThemeList.insert(ob["value"].toString(), ob["text"].toString());
//    }
//}

//QMap<QString, QString> AppManager::getThemeList() const
//{
//    return mThemeList;
//}

void AppManager::updateStylesheet()
{
    QString appThemePath = QString(":/static/themes/%1/style").arg(mSettingManager->getThemeName());
    mStyleValues = new QSettings(QString("%1/values.ini").arg(appThemePath), QSettings::IniFormat);

    mStylesheetFileContent = FileUtil::readStringFromFile(QString("%1/style.qss").arg(appThemePath));

    // set values example: @color01 => #fff
    for (const QString &key : mStyleValues->allKeys()) {
        mStylesheetFileContent.replace(key, mStyleValues->value(key).toString());
    }

    qApp->setStyleSheet(mStylesheetFileContent);

    emit SignalMapper::ins()->sigChangedAppTheme();
}

QString AppManager::getStylesheetFileContent() const
{
    return mStylesheetFileContent;
}
