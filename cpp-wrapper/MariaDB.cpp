/*
    BSD 3-Clause License
    
    Copyright (c) 2021, SudoCpp
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.

    2. Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

    3. Neither the name of the copyright holder nor the names of its
    contributors may be used to endorse or promote products derived from
    this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
    AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
    FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
    DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
    SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
    CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
    OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
    OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "MariaDB.hpp"
#include <Exception.hpp>

#define __class__ "simplex::MariaDB"

namespace simplex
{
    MariaDB::MariaDB(string filePath) : Database{DatabaseCredentials{"","","",filePath}}
    {
        //openConnection(filePath);
    }

    MariaDB::MariaDB() : Database{DatabaseCredentials{"","","",":memory:"}}
    {
        //openConnection(":memory:");
    }

    MariaDB::MariaDB(const DatabaseCredentials& credentials) : Database{credentials}
    {
        //openConnection(credentials.databaseName);
    }

    void MariaDB::openConnection(const string& filePath)
    {
        // int rc = sqlite3_open(filePath.toCString(), &database);
        // if(rc)
        //     throw DatabaseException("Database could not be opened at '"+filePath+"'.", __ExceptionParams__);
    }

    MariaDB::~MariaDB()
    {
        // sqlite3_close(database);
    }

    DataTable MariaDB::query(const string& sqlQuery)
    {
        // char* errorMessage = 0;
        // int rc = sqlite3_exec(database, sqlQuery.toCString(), nullptr, 0, &errorMessage);
   
        // if(rc != SQLITE_OK )
        // {
        //     string errMsg{errorMessage};
        //     sqlite3_free(errorMessage);
        //     throw DatabaseException("Sqlite query failed: '" + errMsg + "'.", __ExceptionParams__);
        // }
        // return DataTable{};
    }

    MariaDBStatement* MariaDB::prepare(const string& sqlQuery)
    {
        // return new SqliteStatement{sqlQuery, database};
    }
}

#undef __class__