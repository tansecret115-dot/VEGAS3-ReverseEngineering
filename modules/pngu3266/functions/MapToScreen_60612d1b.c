/* Module: pngu3266.dll
   Function: MapToScreen
   Address: 60612d1b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNSystemInfo::MapToScreen(long *,long *) */

void __cdecl CPNSystemInfo::MapToScreen(long *param_1,long *param_2)

{
  long lVar1;
  long local_c;
  long local_8;
  
                    /* 0x22d1b  1566  ?MapToScreen@CPNSystemInfo@@SAXPAJ0@Z */
  local_8 = 100;
  local_c = 100;
  GetScreenMappingFactors(&local_8,&local_c);
  if ((local_8 != 100) || (local_c != 100)) {
    if (param_1 != (long *)0x0) {
      lVar1 = ftol();
      *param_1 = lVar1;
    }
    if (param_2 != (long *)0x0) {
      lVar1 = ftol();
      *param_2 = lVar1;
    }
  }
  return;
}


