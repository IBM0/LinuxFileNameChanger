#include <string>
#include <vector>
class RenameFiles
{
private:
    static std::string dataPath;
    static bool BothAreSpaces(char lhs, char rhs) { return (lhs == rhs) && (lhs == ' '); }
    static void NormalProcess();
    static void RecursiveProcess();
    static std::string Rename(std::string);
    static void DeleteSpaces(std::string str);

public:
    static void ManageRenaming(int argc, char **argv);
    static std::string Trim(std::string);
};
static const std::string reset = "\033[0m";
static const std::string boldred = "\033[1;91m";
static const std::string boldblue = "\033[1;93m";

