# Handle_ini
 C++ класс для работы с ini-файлами
 
 Использование:
 #include "Handle_ini.h" описание в заголовке.
 
 Использование:
    Загружаем ini-файл: Handle_ini cfile("C:\\test\\test.ini");
    
        В случае успеха будет cfile.IsLoaded=true;
    Указываем имя текущей секции: cfile.SetSection("[section]")
        имя текущей секции будет в cfile.CurrentSection
        Если имя ключа не существует:
        GetBoolValue("wrongkey") = false;
        GetStringValue("wrongkey")="";
        GetIntValue("wrongkey")=0;
        GetFloatValue("wrongkey")=0;
    По-умолчанию геттеры и сеттеры действуют в секции "" (без [имени])
        она автоматически устанавливается при:
           - действии конструктора,
           - загрузке файла,
           - удалении текущей секции
           - попытке перейти в не существующую секцию
    новые ключи добавляются в начало секции,
    новые комментарии добавляются в конец секции,
    Выгрузка файла: cfile.WriteFile(string NewFullpath) файл будет перезаписан!
