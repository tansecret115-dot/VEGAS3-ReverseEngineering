/* Module: pngu3266.dll
   Function: SafeStrlen
   Address: 605f1090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: static int __cdecl CPNString::SafeStrlen(char const *) */

int __cdecl CPNString::SafeStrlen(char *param_1)

{
  size_t sVar1;
  
                    /* 0x1090  1790  ?SafeStrlen@CPNString@@KAHPBD@Z */
  sVar1 = 0;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
  }
  return sVar1;
}


