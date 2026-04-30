/* TODO: write a function which takes two vectors of integers V1 and V2,
 * *which you assume will be SORTED*.  (That is, i<=j ==> V1[i]<=V1[j], and
 * similarly for V2).  The function should merge these two vectors into a
 * third vector which is also sorted.
 * NOTE: do NOT do this by just adding all elements into the 3rd vector and
 * then sorting that.  You can do this much more efficiently since the input
 * vectors are sorted already.  Your function should take a number of steps
 * proportional to the sum of the sizes of V1 and V2.  */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

void merge(const vector<int>& V1, const vector<int>& V2, vector<int>& result){
	size_t i=0, j=0;
	size_t n=V1.size(), m=V2.size();

		while(i<n && j<m) {
			if(V1[i] < V2[j]){
				result.push_back(V1[i]);
				i++;
			}else{
				result.push_back(V2[j]);
				j++;
			}
		}

		while (i<n){
			result.push_back(V1[i]);
			i++;
		}
		while (j<m){
			result.push_back(V2[j]);
			j++;
		}


}

int main()
{
	vector<int> num = {2,3,4,5,8,9};
	vector<int> num2 = {1,6,7,10,11};
	vector<int> result;
	merge(num,num2,result);

	for(size_t x = 0; x < result.size(); x++){
		cout << result[x] << " ";
	}

	/* TODO: call your function, make sure it works... */
	return 0;
}

// vim:foldlevel=2
