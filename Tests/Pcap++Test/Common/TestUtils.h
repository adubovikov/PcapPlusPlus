#pragma once

#include <string>
#include <vector>
#include "RawPacket.h"

bool sendURLRequest(std::string url);

bool readPcapIntoPacketVec(std::string pcapFileName, std::vector<pcpp::RawPacket>& packetStream, std::string& errMsg);

int getFileLength(std::string filename);

uint8_t* readFileIntoBuffer(std::string filename, int& bufferLength);