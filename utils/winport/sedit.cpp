/* Copyright (C) 2013 Calpont Corp.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation;
   version 2.1 of the License.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
   MA 02110-1301, USA. */

#include <string>
using namespace std;

#include "sedit.h"

namespace winport
{

bool sedit(string& line, const string& find, const string& replace)
{
	string::size_type idx;
	idx = line.find(find);
	if (idx == string::npos) return false;
	line.replace(idx, find.length(), replace);
	return true;
}

const string sedit2(const string& line, const string& find, const string& replace)
{
	string::size_type idx;
	idx = line.find(find);
	if (idx == string::npos) return line;
	string nline(line);
	nline.replace(idx, find.length(), replace);
	return nline;
}

}
