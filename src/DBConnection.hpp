#ifndef PLAYGROUND_IDBCONNECTION_HPP
#define PLAYGROUND_IDBCONNECTION_HPP

#include "QueryExecutor.hpp"

class IDBConnection
{
public:
	virtual int query() const = 0;
};

class MySqlDBConnection : public IDBConnection
{
public:
	int query() const override;
	int advancedQuery(const QueryExecutor&) const;
};

#endif //PLAYGROUND_IDBCONNECTION_HPP