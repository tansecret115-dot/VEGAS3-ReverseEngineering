/* Module: pngu3266.dll
   Function: IsLargeFontMode
   Address: 60612d78
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static int __cdecl CPNSystemInfo::IsLargeFontMode(void) */

int __cdecl CPNSystemInfo::IsLargeFontMode(void)

{
  int iVar1;
  long local_c;
  long local_8;
  
                    /* 0x22d78  1507  ?IsLargeFontMode@CPNSystemInfo@@SAHXZ */
  local_8 = 100;
  local_c = 100;
  GetScreenMappingFactors(&local_8,&local_c);
  if ((local_8 == 100) && (local_c == 100)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


