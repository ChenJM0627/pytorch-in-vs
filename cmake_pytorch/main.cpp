#include<torch/script.h>
#include<iostream>

using namespace std;

int main(int argc, const char* argv[])
{
	torch::jit::script::Module module;
	try {
		module = torch::jit::load("module.pt");
	}
	catch(const c10::Error& e){
		std::cout << "error loading the model"<<endl;
		return -1;
	}

	std::cout << "success loading!"<<endl;
}