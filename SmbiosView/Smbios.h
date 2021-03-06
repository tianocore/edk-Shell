/*++

Copyright (c) 2005 - 2008, Intel Corporation                                                         
All rights reserved. This program and the accompanying materials                          
are licensed and made available under the terms and conditions of the BSD License         
which accompanies this distribution. The full text of the license may be found at         
http://opensource.org/licenses/bsd-license.php                                            
                                                                                          
THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,                     
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.             

Module Name:

  smbios.h

Abstract:

  declares interface functions

Revision History

--*/

#ifndef _SMBIOS_H
#define _SMBIOS_H

//
//
//
#define EFI_SMBIOS_GUID \
  { \
    0xda4ccda5, 0xe09d, 0x4f89, 0xb0, 0xf2, 0xdf, 0x84, 0x5c, 0xbb, 0x92, 0x80 \
  }

extern EFI_HII_HANDLE HiiHandle;



#endif
