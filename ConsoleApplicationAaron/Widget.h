#pragma once
class Widget
{
public:
	//Widget() = default;
	Widget(bool enabled);
	void enable();
	void disable();
	bool isEnabled() const;

private:
	bool enabled;
protected:
	int width;
};

