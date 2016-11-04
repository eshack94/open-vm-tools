/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#include "stdafx.h"

#include "Doc/DocUtils/EnumConvertersXml.h"
#include "Doc/CafInstallRequestDoc/CafInstallRequestDocTypes.h"

#include "Doc/CafInstallRequestDoc/CUninstallProviderJobDoc.h"
#include "Xml/XmlUtils/CXmlElement.h"
#include "Doc/DocXml/CafInstallRequestXml/UninstallProviderJobXml.h"

using namespace Caf;

void UninstallProviderJobXml::add(
	const SmartPtrCUninstallProviderJobDoc uninstallProviderJobDoc,
	const SmartPtrCXmlElement thisXml) {
	CAF_CM_STATIC_FUNC_VALIDATE("UninstallProviderJobXml", "add");

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(uninstallProviderJobDoc);
		CAF_CM_VALIDATE_SMARTPTR(thisXml);

		const std::string clientIdVal =
			BasePlatform::UuidToString(uninstallProviderJobDoc->getClientId());
		CAF_CM_VALIDATE_STRING(clientIdVal);
		thisXml->addAttribute("clientId", clientIdVal);

		const std::string jobIdVal =
			BasePlatform::UuidToString(uninstallProviderJobDoc->getJobId());
		CAF_CM_VALIDATE_STRING(jobIdVal);
		thisXml->addAttribute("jobId", jobIdVal);

		const std::string providerNamespaceVal = uninstallProviderJobDoc->getProviderNamespace();
		CAF_CM_VALIDATE_STRING(providerNamespaceVal);
		thisXml->addAttribute("providerNamespace", providerNamespaceVal);

		const std::string providerNameVal = uninstallProviderJobDoc->getProviderName();
		CAF_CM_VALIDATE_STRING(providerNameVal);
		thisXml->addAttribute("providerName", providerNameVal);

		const std::string providerVersionVal = uninstallProviderJobDoc->getProviderVersion();
		CAF_CM_VALIDATE_STRING(providerVersionVal);
		thisXml->addAttribute("providerVersion", providerVersionVal);

		const std::string packageOSTypeVal =
			EnumConvertersXml::convertPackageOSTypeToString(uninstallProviderJobDoc->getPackageOSType());
		CAF_CM_VALIDATE_STRING(packageOSTypeVal);
		thisXml->addAttribute("packageOSType", packageOSTypeVal);
	}
	CAF_CM_EXIT;
}

SmartPtrCUninstallProviderJobDoc UninstallProviderJobXml::parse(
	const SmartPtrCXmlElement thisXml) {
	CAF_CM_STATIC_FUNC_VALIDATE("UninstallProviderJobXml", "parse");

	SmartPtrCUninstallProviderJobDoc uninstallProviderJobDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(thisXml);

		const std::string clientIdStrVal =
			thisXml->findRequiredAttribute("clientId");
		UUID clientIdVal = CAFCOMMON_GUID_NULL;
		BasePlatform::UuidFromString(clientIdStrVal.c_str(), clientIdVal);

		const std::string jobIdStrVal =
			thisXml->findRequiredAttribute("jobId");
		UUID jobIdVal = CAFCOMMON_GUID_NULL;
		BasePlatform::UuidFromString(jobIdStrVal.c_str(), jobIdVal);

		const std::string providerNamespaceStrVal =
			thisXml->findRequiredAttribute("providerNamespace");
		const std::string providerNamespaceVal = providerNamespaceStrVal;

		const std::string providerNameStrVal =
			thisXml->findRequiredAttribute("providerName");
		const std::string providerNameVal = providerNameStrVal;

		const std::string providerVersionStrVal =
			thisXml->findRequiredAttribute("providerVersion");
		const std::string providerVersionVal = providerVersionStrVal;

		const std::string packageOSTypeStrVal =
			thisXml->findRequiredAttribute("packageOSType");
		PACKAGE_OS_TYPE packageOSTypeVal = PACKAGE_OS_NONE;
		if (! packageOSTypeStrVal.empty()) {
			packageOSTypeVal = EnumConvertersXml::convertStringToPackageOSType(packageOSTypeStrVal);
		}

		uninstallProviderJobDoc.CreateInstance();
		uninstallProviderJobDoc->initialize(
			clientIdVal,
			jobIdVal,
			providerNamespaceVal,
			providerNameVal,
			providerVersionVal,
			packageOSTypeVal);
	}
	CAF_CM_EXIT;

	return uninstallProviderJobDoc;
}

