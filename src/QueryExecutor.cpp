#include "QueryExecutor.hpp"
#include "DBConnection.hpp"

int QueryExecutor::executeAdvancedQuery(const MySqlDBConnection &connection) const
{
	connection.advancedQuery(*this);
}
