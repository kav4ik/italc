/*
 * GlobalConfig.h - GlobalConfig class
 *
 * Copyright (c) 2009-2010 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
 *
 * This file is part of iTALC - http://italc.sourceforge.net
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

#ifndef _GLOBAL_CONFIG_H
#define _GLOBAL_CONFIG_H

#include "Configuration/Object.h"

class GlobalConfig : public Configuration::Object
{
	Q_OBJECT
public:
	GlobalConfig( Configuration::Store::Backend _backend ) :
		Configuration::Object( _backend,
					Configuration::Store::Global )
	{
	}

#define FOREACH_GLOBAL_CONFIG_PROPERTY(OP)						\
	OP( GlobalConfig, MasterCore::globalConfig, STRING, defaultDomain, setDefaultDomain, "DefaultDomain", "Logon" );

	FOREACH_GLOBAL_CONFIG_PROPERTY(DECLARE_CONFIG_PROPERTY)


public slots:
	void setDefaultDomain( const QString & );

} ;

#endif