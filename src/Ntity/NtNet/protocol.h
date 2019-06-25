#pragma once

#include "connection.h"

namespace Ntity
{
	namespace NtNet
	{
		class Protocol : public std::enable_shared_from_this<Protocol>
		{
		public:
			Protocol() = default;

			void bindWithConnection(Connection_ptr connection);
			virtual void parsePacket(NetworkMessage& msg) = 0;

		protected:
			Connection_ptr connection;
		};
	}
}