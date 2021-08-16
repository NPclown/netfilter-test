#pragma once
#include <cstdint>

#pragma pack(push, 1)
struct TcpHdr final{
    uint16_t source_port_;
   	uint16_t  dest_port_;
	uint32_t sequence_;
	uint32_t acknowledge_;
	uint8_t reserved_part_:4;
	uint8_t data_offset_:4;
	uint8_t flag_;
	uint16_t window_;
	uint16_t checksum_;
	uint16_t urgent_pointer_;
	
	uint16_t source_port() { return htons(source_port_); }
	uint16_t dest_port() { return htons(dest_port_); }
	uint32_t sequence() { return sequence_; }
	uint32_t acknowledge() { return acknowledge_; }
	uint16_t reserved_part() { return reserved_part_; }
	uint16_t data_offset() { return data_offset_; }
	uint16_t flag() { return flag_; }
	uint16_t window() { return window_; }
	uint16_t checksum() { return checksum_; }
	uint16_t urgent_pointer() { return urgent_pointer_; }
	
};

typedef TcpHdr *PTcpHdr;
#pragma pack(pop)
