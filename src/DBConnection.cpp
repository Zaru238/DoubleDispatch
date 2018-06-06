#include <cassert>

#include "DBConnection.hpp"

int MySqlDBConnection::query() const
{
	return 3;
}

int MySqlDBConnection::advancedQuery(const QueryExecutor&) const
{
	return 4;
}