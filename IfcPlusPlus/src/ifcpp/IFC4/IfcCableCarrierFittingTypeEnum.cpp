/* -*-c++-*- IfcPlusPlus - www.ifcplusplus.com - Copyright (C) 2011 Fabian Gerold
*
* This library is open source and may be redistributed and/or modified under  
* the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or 
* (at your option) any later version.  The full license is in LICENSE file
* included with this distribution, and on the openscenegraph.org website.
* 
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
* OpenSceneGraph Public License for more details.
*/

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/shared_ptr.h"
#include "ifcpp/model/IfcPPException.h"
#include "include/IfcCableCarrierFittingTypeEnum.h"

// TYPE IfcCableCarrierFittingTypeEnum = ENUMERATION OF	(BEND	,CROSS	,REDUCER	,TEE	,USERDEFINED	,NOTDEFINED);
IfcCableCarrierFittingTypeEnum::IfcCableCarrierFittingTypeEnum() {}
IfcCableCarrierFittingTypeEnum::~IfcCableCarrierFittingTypeEnum() {}
shared_ptr<IfcPPObject> IfcCableCarrierFittingTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcCableCarrierFittingTypeEnum> copy_self( new IfcCableCarrierFittingTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcCableCarrierFittingTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCABLECARRIERFITTINGTYPEENUM("; }
	if( m_enum == ENUM_BEND )
	{
		stream << ".BEND.";
	}
	else if( m_enum == ENUM_CROSS )
	{
		stream << ".CROSS.";
	}
	else if( m_enum == ENUM_REDUCER )
	{
		stream << ".REDUCER.";
	}
	else if( m_enum == ENUM_TEE )
	{
		stream << ".TEE.";
	}
	else if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcCableCarrierFittingTypeEnum> IfcCableCarrierFittingTypeEnum::createObjectFromSTEP( const std::wstring& arg )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcCableCarrierFittingTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcCableCarrierFittingTypeEnum>(); }
	shared_ptr<IfcCableCarrierFittingTypeEnum> type_object( new IfcCableCarrierFittingTypeEnum() );
	if( boost::iequals( arg, L".BEND." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_BEND;
	}
	else if( boost::iequals( arg, L".CROSS." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_CROSS;
	}
	else if( boost::iequals( arg, L".REDUCER." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_REDUCER;
	}
	else if( boost::iequals( arg, L".TEE." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_TEE;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
