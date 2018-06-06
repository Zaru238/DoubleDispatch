//
// Created by morheit on 6/6/18.
//

#ifndef DOUBLEDISPATCH_IDBCONNECTOR_H
#define DOUBLEDISPATCH_IDBCONNECTOR_H

class MySqlDBConnection;

class QueryExecutor
{
public:
	virtual int executeAdvancedQuery(const MySqlDBConnection &connection) const;
};

#endif //DOUBLEDISPATCH_IDBCONNECTOR_H