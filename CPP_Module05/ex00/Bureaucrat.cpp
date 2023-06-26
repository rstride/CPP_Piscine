/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:47:42 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:50:42 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructeur par défaut qui initialise le nom du bureaucrate à "none" et son grade à 150
Bureaucrat::Bureaucrat() : name_("none"), grade_(150)
{
}

// Constructeur avec paramètres qui initialise le nom et le grade du bureaucrate.
// S'il est hors de portée (c'est-à-dire en dehors de 1-150), il lance une exception appropriée.
Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        grade_ = grade;
}

// Destructeur par défaut
Bureaucrat::~Bureaucrat()
{
}

// Constructeur de copie qui copie le nom et le grade de la cible dans l'objet Bureaucrat en cours de construction
Bureaucrat::Bureaucrat(const Bureaucrat &target) : name_(target.name_)
{
    grade_ = target.grade_;
}

// Surcharge de l'opérateur d'affectation qui copie le grade de la cible dans l'objet Bureaucrat en cours de modification
Bureaucrat& Bureaucrat::operator= (const Bureaucrat &target)
{
    grade_ = target.grade_;
    return (*this);
}

// Retourne le nom du Bureaucrat
std::string Bureaucrat::getName() const
{
    return (name_);
}

// Retourne le grade du Bureaucrat
int Bureaucrat::getGrade() const
{
    return (grade_);
}

// Augmente le grade du Bureaucrat d'une unité. Si cela fait descendre le grade en dessous de 1, une exception est lancée.
void Bureaucrat::incrementGrade()
{
    if (grade_ - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        grade_--;
}

// Diminue le grade du Bureaucrat d'une unité. Si cela fait monter le grade au-dessus de 150, une exception est lancée.
void Bureaucrat::decrementGrade()
{
    if (grade_ + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        grade_++;
}

// Renvoie une chaîne indiquant que le grade est trop élevé
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

// Renvoie une chaîne indiquant que le grade est trop bas
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

// Surcharge de l'opérateur << pour imprimer le nom et le grade du Bureaucrat
std::ostream& operator<< (std::ostream &out, const Bureaucrat &target)
{
    out << target.getName() << ", bureaucrat grade " << target.getGrade() << std::endl;
    return (out);
}


