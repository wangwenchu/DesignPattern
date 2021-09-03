class Observer
{
public:
	Observer() {}
	virtual ~Observer() {}
	virtual void Update() {}
};

class ObserverBlog : public Observer
{
private:
	string m_name;  //观察者名称
	Blog* m_blog;   //观察的博客，当然以链表形式更好，就可以观察多个博客
public:
	ObserverBlog(string name, Blog* blog) : m_name(name), m_blog(blog) {}
	~ObserverBlog() {}
	void Update()  //获得更新状态
	{
		string status = m_blog->GetStatus();
		cout << m_name << "-------" << status << endl;
	}
};