#pragma once
class Message
{
public:
	void Send(int frequency);
	void Send(const char* content);
	void Send(const char* content, int frequency);
};