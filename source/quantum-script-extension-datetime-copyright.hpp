//
// Quantum Script Extension DateTime
//
// Copyright (c) 2020-2021 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#ifndef QUANTUM_SCRIPT_EXTENSION_DATETIME_COPYRIGHT_HPP
#define QUANTUM_SCRIPT_EXTENSION_DATETIME_COPYRIGHT_HPP

#define QUANTUM_SCRIPT_EXTENSION_DATETIME_COPYRIGHT            "Copyright (c) Grigore Stefan"
#define QUANTUM_SCRIPT_EXTENSION_DATETIME_PUBLISHER            "Grigore Stefan"
#define QUANTUM_SCRIPT_EXTENSION_DATETIME_COMPANY              QUANTUM_SCRIPT_EXTENSION_DATETIME_PUBLISHER
#define QUANTUM_SCRIPT_EXTENSION_DATETIME_CONTACT              "g_stefan@yahoo.com"
#define QUANTUM_SCRIPT_EXTENSION_DATETIME_FULL_COPYRIGHT       QUANTUM_SCRIPT_EXTENSION_DATETIME_COPYRIGHT " <" QUANTUM_SCRIPT_EXTENSION_DATETIME_CONTACT ">"

#ifndef XYO_RC

#ifndef QUANTUM_SCRIPT_EXTENSION_DATETIME__EXPORT_HPP
#include "quantum-script-extension-datetime--export.hpp"
#endif

namespace Quantum {
	namespace Script {
		namespace Extension {
			namespace DateTime {
				namespace Copyright {
					QUANTUM_SCRIPT_EXTENSION_DATETIME_EXPORT const char *copyright();
					QUANTUM_SCRIPT_EXTENSION_DATETIME_EXPORT const char *publisher();
					QUANTUM_SCRIPT_EXTENSION_DATETIME_EXPORT const char *company();
					QUANTUM_SCRIPT_EXTENSION_DATETIME_EXPORT const char *contact();
					QUANTUM_SCRIPT_EXTENSION_DATETIME_EXPORT const char *fullCopyright();
				};
			};
		};
	};
};

#endif
#endif
