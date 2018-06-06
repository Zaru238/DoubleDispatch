#include "gtest/gtest.h"
#include "../src/DBConnection.hpp"
#include "../src/QueryExecutor.hpp"

namespace
{
    int getConnectionInfo(const IDBConnection& connection)
    {
        assert(dynamic_cast<const MySqlDBConnection*>(&connection));
        auto& con = static_cast<const MySqlDBConnection&>(connection);
        return con.query();
    }

    TEST(ConversionTest, StaticCast)
    {
        MySqlDBConnection connection;
        ASSERT_EQ(3, getConnectionInfo(connection));
    }

    TEST(OverloadingTest, DoubleDispatch)
    {
        MySqlDBConnection connection;
        QueryExecutor queryExecutor;

        queryExecutor.executeAdvancedQuery(connection);
        ASSERT_EQ(4, queryExecutor.executeAdvancedQuery(connection));
    }
}