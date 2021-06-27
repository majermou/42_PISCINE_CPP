/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 15:56:57 by majermou          #+#    #+#             */
/*   Updated: 2021/06/27 09:44:30 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("PresidentialPardonForm", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): Form(src)
{
}

ShrubberyCreationForm&    ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rfs)
{
    if (this != &rfs)
    {
        Form::operator=(rfs);
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void    ShrubberyCreationForm::Action(void) const
{
    std::ofstream   ofs;

    ofs.open(getTarget() + "_shrubbery");

    for (size_t i = 0; i < 4; i++)
    {
        ofs << std::endl << std::endl << std::endl << std::endl;
        ofs << "                            / \\" << std::endl;
        ofs << "                           J   L" << std::endl;
        ofs << "                     ------'   `------" << std::endl;
        ofs << "                      `.           .'" << std::endl;
        ofs << "                        `.       .'" << std::endl;
        ofs << "                         /       \\" << std::endl;
        ofs << "                        J   .'.   L" << std::endl;
        ofs << "                        |.' | |`. |" << std::endl;
        ofs << "                        '   | |//`" << std::endl;
        ofs << "                       .-.-. _ _ _  |" << std::endl;
        ofs << "                      /| | |(/|||||_|" << std::endl;
        ofs << "                      _| | |/-'`'`'/|" << std::endl;
        ofs << "                     / \\/|   o  + __.- /(" << std::endl;
        ofs << "                    |  '|/| -|/(||||(_V_)" << std::endl;
        ofs << "                    `._.| |/_/_)`-'' ///_<" << std::endl;
        ofs << "                        >///\\\\\\//==<<<=" << std::endl;
        ofs << "                      _ >>>\\\\>//<__<<<-'" << std::endl;
        ofs << "                     / `-._>>>.-'   |<<" << std::endl;
        ofs << "                    J     _.))     /<<<<" << std::endl;
        ofs << "                v   |  .-'' |/__   |<<<||_" << std::endl;
        ofs << "             \\\\||| `-> _/ / \\  `-<<<<<<*** **" << std::endl;
        ofs << "           \\\\**|||| /    /><<\\    \\<<<********" << std::endl;
        ofs << "             >>**////    /<>>>>`.   |****** <<_\\_\\" << std::endl;
        ofs << "              >>***/_  .'>>><>>><\\  |*****<<<|_|_|" << std::endl;
        ofs << "           .-' >***>>|/>//>><\\**|/\\|***<<<<<|_|_|" << std::endl;
        ofs << "           \\.-' \\***<<<>>///\\\\******<<>><>>*****\\\\\\-.-.-<<<" << std::endl;
        ofs << "            \\-'_.J--.<<<<>><<****>>///(\\|\\)|(//<<<," << std::endl;
        ofs << "           (   )|(-'  (>>><<****<\\)_.><<<<-" << std::endl;
        ofs << "          .-`-'_)\\-.--.\\>>><*****//||>(\\ (\\_.\\<<<< .-" << std::endl;
        ofs << "         .' _.-'()\\`.**>>//****<<<>><<`-``-``-`<<.-' _" << std::endl;
        ofs << "     .--'_.'>>>><>>`.\\***(`._.-.<<<<<<(_____``<.'_.-' |<" << std::endl;
        ofs << "    /-'   >><<>>>>>//<>>>/|\\ |  /<<>><|     `-._/      L" << std::endl;
        ofs << "           ->>.<>><>>>>>/|| \\|.'|<<>\\|  .-----'|._    |" << std::endl;
        ofs << "   .--._ >><.' \\>>>>>>///||  |  |<<>><|.'       )-----'`." << std::endl;
        ofs << "   |   _.--'    |///////\\\\-----'<>>>>>==\\<><>>>>< ===::===>>><****| .'`.`_ (   `-.   .--'" << std::endl;
        ofs << "  /    .'>><>>)_ -->>>>===::::==>>******|/>>>/  `.  .--.`-.|" << std::endl;
        ofs << " /    />>>>>>>'`'`'`-`<===:::<<< *****(\\ .-.<(   )-(   )" << std::endl;
        ofs << "/.'| />>>>>>>.-.-.-._\\|> =//||\\******-'@--'>>`-'<<\\`-'`._" << std::endl;
        ofs << "   |/>>>>>>>-'`'`'`-.\\>>==<<<<***.'\\ |_|)_|<<<<<<< \\_ `- `." << std::endl;
        ofs << "  / >>>>>>.-..''`'`-.\\.->>>><<>(  /(\\\\/// <<<<<=    \\_ .-'" << std::endl;
        ofs << " /-' >>>----\\((::::)))// /><>>**|   (\\\\///<<<<---." << std::endl;
        ofs << "|.'  >>>| | | |\\__.'.'>>>>>****.'/ (\\\\////<<<<-`-`" << std::endl;
        ofs << " `   >>>|-|-| |>>>>>>>>>>**** .--. /_\\\\////<<<|_|_|<<<" << std::endl;
        ofs << "     >>>|_|_|/>><>><<>*****vv(    V  `.\\<<<>>>|_|_|<<<<" << std::endl;
        ofs << "     ////>>>>>`.>>>>******>>><`--'\\   /<<<<<>>>>><<<<<<<" << std::endl;
        ofs << "     '' ///>>>>><<>>*****>>>><<<<<<`-'<<<<<<>><<<><<<<<<<" << std::endl;
        ofs << "       ''    ->>>>><<>///>>>>><<<<<<\\\\\\><<<<<>>><<<<\\" << std::endl;
        ofs << "               ////<<>><<<>>>><<<<>\\\\\\\\\\>><\\\\\\\\\\" << std::endl;
        ofs << "              '' / ////////>>><<<\\\\\\\\\\<  \\\\ \\\\\\" << std::endl;
        ofs << "                   /|| .////|||\\\\\\\\\\" << std::endl;
        ofs << "                      (MMMMMMMMMMMMMMMMMMM)" << std::endl;
        ofs << "                      |`----.MMMMMMMM.---'|" << std::endl;
        ofs << "                      `---.____   ____.---\'" << std::endl;
        ofs << "                       |       \"\"\"       |" << std::endl;
        ofs << "                       |                 |" << std::endl;
        ofs << "                       |                 |" << std::endl;
        ofs << "                       |                 |" << std::endl;
        ofs << "                       |                 |" << std::endl;
        ofs << "                       (                 )" << std::endl;
        ofs << "                        `----._____.----'" << std::endl;
    
    }
    ofs << std::endl << std::endl << std::endl << std::endl;
    ofs.close();
}
