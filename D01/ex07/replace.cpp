/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplace.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:11:38 by majermou          #+#    #+#             */
/*   Updated: 2021/06/08 17:09:42 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    findAndRemplace(std::string &line, std::string s1, std::string s2)
{
    size_t      pos = line.find(s1);

    while (pos != std::string::npos)
    {
        line.replace(pos, s1.size(), s2);
        pos = line.find(s1, pos + s2.size());
    }
}

int main(int argc, char **argv)
{
    std::ifstream   ifs;
    std::ofstream   ofs;
    std::string     line, out, out_extention = ".replace";
    
    if (argc == 4 && argv[1] && argv[1][0] && argv[2]
        && argv[2][0] && argv[3] && argv[3][0])
    {
        ifs.open(argv[1]);
        out = argv[1];
        out = out.substr(0, out.find('.'));
        out = out + out_extention;
        ofs.open(out);
        while (getline(ifs, line))
        {
            findAndRemplace(line, argv[2], argv[3]);
            ofs << line << std::endl;
        }
        ofs.close();
        ifs.close();
    }
    else
        std::cerr << "Error: The program takes tree (NON NULL and NON empty) arguments [filename] & [s1] & [s2]"
                  << std::endl;
}