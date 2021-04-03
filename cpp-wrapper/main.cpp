#include "MariaDB.hpp"
#include "Dictionary.hpp"
#include "string.hpp"

using namespace simplex;

int main()
{
    MariaDB test("newFile.sqlite");
    //test.query("CREATE TABLE testing (Name TEXT, Age INT);");
    //test.query("INSERT INTO testing (Name, Age) VALUES ('Paul', 32);");
    Dictionary<string, string> values{ {"Name","'Bob'"}, {"Age","43"}};
}