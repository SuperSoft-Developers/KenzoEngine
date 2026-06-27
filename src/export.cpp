#include <cstdlib>
#include <iostream>
#include <string>

bool ExportWindows()
{
    std::cout << "Exportando para Windows..." << std::endl;

    return system("cmake --build .") == 0;
}

bool Export3DS()
{
    std::cout << "Exportando para Nintendo 3DS..." << std::endl;

    // Exemplo: make usando devkitPro
    return system("make") == 0;
}

bool ExportWii()
{
    std::cout << "Exportando para Wii..." << std::endl;

    return system("make") == 0;
}

bool ExportGameCube()
{
    std::cout << "Exportando para GameCube..." << std::endl;

    return system("make") == 0;
}

bool ExportAndroid()
{
    std::cout << "Exportando para Android..." << std::endl;

    // Exemplo simples. Em um projeto real seria usado Gradle/Android SDK.
    return system("gradlew assembleDebug") == 0;
}
