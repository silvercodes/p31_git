class Role
{
private:
	int id;
	std::string title;
	int level = 1;
public:
	Role(int id, std::string title):
		id{id},
		title{title}
	{}
}