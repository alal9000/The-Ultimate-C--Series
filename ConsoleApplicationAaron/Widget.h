#pragma once
class Widget
{
public:
	//Widget() = default;
	//Widget(bool enabled);
	virtual ~Widget() = default;
	// pure virtual method
	virtual void draw() const = 0;
	void enable();
	void disable();
	bool isEnabled() const;

private:
	bool enabled;
protected:
	int width;
};

