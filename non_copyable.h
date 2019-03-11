#define NON_COPYABLE(ClassName)\
	ClassName(const ClassName&) = delete;\
	ClassName(ClassName&&) = delete;\
	const ClassName& operator=(const ClassName&) = delete;\
	void operator=(ClassName&&) = delete;