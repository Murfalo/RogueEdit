#ifndef STRINGS_H
#define STRINGS_H
#pragma once
#include <string>
#include <QString>

/* Namespace for strings! Some of these may be pedantic but it is necessary to avoid having
 * to go through and change everything if the Roguelands save format changes slightly. */
namespace Strings
{
    // The location of the save file is different on Windows and Mac
#if defined(Q_OS_WIN)
    static const std::string playerDataPrefix = "C:/Users/AppData/LocalLow/DefaultCompany/Roguelands/";
	// If the code to add the prefex to a suffix breaks, add a slash (/) to the front of each of the next two strings
    static const std::string playerDataSuffix = "PlayerPrefs.txt";
    static const std::string tmpDataSuffix = ".txt";
#elif defined(Q_OS_MAC)
    // Not yet implemented
#endif

    static const QString appTitle = "RogueEdit";

    // Strings for UI
    static const QString toolbarObjectName = "mainToolBar";
    static const QString characterMenuObjectName = "menuCharacter";
    static const QString loadCharacterDropdownObjectName = "dropdownLoad_Character";
    static const QString saveCharacterActionText = "Save Character";

    /* Strings for parsing PlayerPrefs.txt.
     * Current representation: "specifier : value : type; " */
    static const std::string separator = ":";   // Seperates information for a specifier
    static const std::string terminator = ";";  // Terminates a specifier
    static const std::string paddedSeperator = " : ";
    static const std::string paddedTerminator = " ; ";

    // (Soon to be) Long list of specifiers
    static const std::string intSpecifier = "System.Int32";
    static const std::string stringSpecifier = "System.String";
    static const std::string nameSpecifier = "name";
}
#endif
