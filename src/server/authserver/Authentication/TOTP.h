/*
  *  Copyright (C) 2011-2019 Project SkyFire <http://www.projectskyfire.org/>
  *  Copyright (C) 2008-2013 TrinityCore <http://www.trinitycore.org/>
  *  Copyright (C) 2005-2013 MaNGOS <http://getmangos.com/>
  *
  *  This program is free software; you can redistribute it and/or modify it
  *  under the terms of the GNU General Public License as published by the
  *  Free Software Foundation; either version 3 of the License, or (at your
  *  option) any later version.
  *
  *  This program is distributed in the hope that it will be useful, but WITHOUT
  *  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  *  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
  *  more details.
  *
  *  You should have received a copy of the GNU General Public License along
  *  with this program. If not, see <http://www.gnu.org/licenses/>.
  */

#ifndef _TOTP_H
#define _TOPT_H

#include "openssl/hmac.h"
#include "openssl/evp.h"

namespace TOTP
{
    unsigned int GenerateToken(const char* b32key);
}

#endif