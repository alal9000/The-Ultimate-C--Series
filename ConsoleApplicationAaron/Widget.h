#pragma once
class Widget
{
public:
	void enable();
	void disable();
	bool isEnabled() const;

private:
	bool enabled;
};

