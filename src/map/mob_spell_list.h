﻿/*
===========================================================================

  Copyright (c) 2010-2015 Darkstar Dev Teams

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see http://www.gnu.org/licenses/

  This file is part of DarkStar-server source code.

===========================================================================
*/

#ifndef _CMOBSPELLLIST_H
#define _CMOBSPELLLIST_H

#include <vector>

#include "../common/cbasetypes.h"
#include "../common/mmo.h"

#include "spell.h"

#define MAX_MOBSPELLLIST_ID		500

typedef struct
{
	SpellID spellId;
	std::uint16_t min_level;
	std::uint16_t max_level;
} MobSpell_t;

class CMobSpellList
{
public:

	CMobSpellList();

  void AddSpell(SpellID spellId, std::uint16_t minLvl, std::uint16_t maxLvl);

  // main spell list
  std::vector<MobSpell_t> m_spellList;

private:

};

/************************************************************************
*                                                                       *
*  namespase для работы с заклинаниями                                  *
*                                                                       *
************************************************************************/

namespace mobSpellList
{
    void LoadMobSpellList();

    CMobSpellList* GetMobSpellList(std::uint16_t MobSpellListID);
};

#endif