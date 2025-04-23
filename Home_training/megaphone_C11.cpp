#include <iostream>
#include <algorithm>
#include <string>

std::string	trim_extra_white_spaces(const std::string &str, const std::string &white_spaces = " \t");
void		capitalize_letters(std::string new_argv[],const int size);
void		flush_strings(const std::string new_argv[],const int size);

int	main(int argc, char	*argv[]){
	if (argc == 1){
		std::cout << "* LOUD AND AMBEARABLE FEEDBACK NOISE *\n";
		return 1;
	}

	std::string new_argv[argc];
	for (int i = 0; i < argc; i++){
		new_argv[i] = trim_extra_white_spaces(argv[i]);
	}
	capitalize_letters(new_argv, argc);
	flush_strings(new_argv, argc);

	return 0;
}

std::string	trim_extra_white_spaces(const std::string &str, const std::string &white_spaces){
	size_t		result_begin;
	size_t		result_end;
	size_t		result_len;
	std::string	result;

	result_begin = str.find_first_not_of(white_spaces);
	if (result_begin == std::string::npos){
		return "";
	}
	result_end = str.find_last_not_of(white_spaces);
	result_len = result_end - result_begin + 1;
	result = str.substr(result_begin, result_len);
	return result;
}

void	capitalize_letters(std::string new_argv[],const int size){
	for (int i = 1; i < size; i++){
		std::transform(new_argv[i].begin(), new_argv[i].end(), new_argv[i].begin(),
			[](char c){
			return toupper((unsigned char) c);
		});
	}
}

void	flush_strings(const std::string new_argv[],const int size){
	for (int i = 1; i < size; i++){
		std::cout << new_argv[i];
		if ((i + 1) == size){
			std::cout << '\n';
		}
		else{
			std::cout << ' ';
		}
	}
}
