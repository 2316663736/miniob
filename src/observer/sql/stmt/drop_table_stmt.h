#pragma once

#include "sql/stmt/stmt.h"

class Db;
/**
 * @brief drop table语句
 * @ingroup Statement
 */
class DropTableStmt : public Stmt
{
public:
    DropTableStmt(const char *table_name) : table_name_(table_name) {}
    virtual ~DropTableStmt() = default;

    StmtType type() const override { return StmtType::DROP_TABLE; }
    const char *table_name() const { return table_name_.c_str(); }

    static RC create(Db *db, const char *table_name, Stmt *&stmt);

private:
    std::string table_name_;
};