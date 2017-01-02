#include <stdexcept>
#include <iostream>
#include <vector>
#include <utility>

class TwoSum
{
	public:
		static std::vector<std::pair<int, int> > findTwoSum(const std::vector<int>& list, int sum)
		{
			std::pair<int,int> p;
			std::vector<std::pair<int,int> > vTemp;
			size_t i = 0,j = 0;

			for(i = 0;i < list.size();++i){
				for(j = 0;j < list.size();j++){
					if(list[i] + list[j] == sum){
						p = std::make_pair(list[i],list[j]);
						vTemp.push_back(p);
					}
				}
			}
			if(vTemp.size() == 0){
				p = std::make_pair(-1,-1);
				vTemp.push_back(p);
			}
			
			return vTemp;
		}
};

#ifndef RunTests
int main()
{
	std::vector<int> list;
	std::vector<std::pair<int,int> > v;
	std::vector<std::pair<int, int> >::iterator i;

	list.push_back(1);
	list.push_back(3);
	list.push_back(5);
	list.push_back(7);
	list.push_back(9);

	v = TwoSum::findTwoSum(list, 8);

	for(i = v.begin();i != v.end(); ++i){
		std::cout<<i->first<<", "<<i->second<<std::endl;
	}
}
#endif
