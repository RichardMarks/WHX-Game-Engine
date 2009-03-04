
// CODESTYLE: v2.0

// WHXGECore.h
// Project: WHX Game Engine Project (WHXGE)
// Author: Richard Marks
// Purpose: The core of the WHXGE; handles interfacing with all hardware and file system operations.

/**
 * @file WHXGECore.h
 * @brief The core of WHXGE - Header
 * @author Richard Marks <ccpsceo@gmail.com>
 */

#ifndef __WHXGECORE_H__
#define __WHXGECORE_H__

namespace WHXGE
{
	class WHXGECore
	{
	public:
		/// constructor
		WHXGECore();
		
		/// deconstructor
		~WHXGECore();
		
		/// initializes the engine; returns false on failure and true on success
		bool Initialize(int argc, char* argv[]);

	private:
		/// hidden copy constructor
		WHXGECore(const WHXGECore& rhs);
		
		/// hidden assignment operator
		const WHXGECore& operator=(const WHXGECore& rhs);
		
	}; // end class

} // end namespace

#endif


