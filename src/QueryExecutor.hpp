#pragma once

class MySqlDBConnection;

class QueryExecutor
{
public:
	virtual int executeAdvancedQuery(const MySqlDBConnection &connection) const;
};