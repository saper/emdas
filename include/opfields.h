//  Copyright (c) 2014 Jakub Filipowicz <jakubf@gmail.com>
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc.,
//  51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

#ifndef OPFIELDS_H
#define OPFIELDS_H

// macros to access opcode fields

#define _OP(x)  (((x) & 0b1111110000000000) >> 10)
#define _D(x)   (((x) & 0b0000001000000000) >> 9)
#define _A(x)   (((x) & 0b0000000111000000) >> 6)
#define _B(x)   (((x) & 0b0000000000111000) >> 3)
#define _C(x)   (((x) & 0b0000000000000111) >> 0)
#define _T(x)   (int8_t) (((x) & 0b0000000000111111) * (((x) & 0b0000001000000000) ? -1 : 1))
#define _t(x)   (uint8_t) (((x) & 0b0000000000000111) | (((x) & 0b0000001000000000) >> 6)) // only SHC uses it
#define _b(x)   ((x) & 0b0000000011111111)

#define _Tabs(x)		(((x) & 0b0000000000111111) >> 0)
#define _Tsign(x)		((x) & 0b0000001000000000 ? "-" : "")
#define _Tuns(x)		(((x) & 0b0000000000111111) | (((x) & 0b0000001000000000) >> 3))

#endif

// vim: tabstop=4 shiftwidth=4 autoindent
