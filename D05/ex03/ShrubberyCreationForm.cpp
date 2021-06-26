/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 15:56:57 by majermou          #+#    #+#             */
/*   Updated: 2021/06/26 19:47:46 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):  Form("PresidentialPardonForm", 145, 137), _target(target), _name("ShrubberyCreationForm"),
                                                                    _gradTosign(145), _gradToexecute(137),
                                                                    ISsigned(false)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): Form(src), _gradTosign(src.getGradeTosign()), _gradToexecute(src.getGradeToexecute())
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

    ofs.open(_target + "_shrubbery");

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


std::ostream&    operator<<(std::ostream &out, ShrubberyCreationForm &obj)
{
    if (obj.getFormStatus() == true)
        out << "Form ~{" << obj.getName() << "}~ is Signed." << std::endl;
    else
        out << "Form ~{" << obj.getName() << "}~ is not Signed yet." << std::endl;
    return out;
}

std::string     ShrubberyCreationForm::getName(void) const
{
    return _name;
}

bool            ShrubberyCreationForm::getFormStatus(void) const
{
    return ISsigned;
}

int             ShrubberyCreationForm::getGradeTosign(void) const
{
    return _gradTosign;
}

int             ShrubberyCreationForm::getGradeToexecute(void) const
{
    return _gradToexecute;
}

void            ShrubberyCreationForm::setFormStatus(void)
{
    ISsigned = true;
}