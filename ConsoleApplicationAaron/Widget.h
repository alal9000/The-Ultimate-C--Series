#pragma once
class Widget
{
public:
	//Widget() = default;
	//Widget(bool enabled);
	//~Widget();
	virtual void draw() const;
	void enable();
	void disable();
	bool isEnabled() const;

private:
	bool enabled;
protected:
	int width;
};

