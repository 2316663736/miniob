#include "sql/stmt/drop_table_stmt.h"

RC DropTableStmt::create(Db *db, const char *table_name, Stmt *&stmt)
{
    stmt = new DropTableStmt(table_name);
    return RC::SUCCESS;
}