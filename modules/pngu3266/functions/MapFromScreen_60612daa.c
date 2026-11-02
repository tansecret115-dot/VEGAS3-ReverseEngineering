/* Module: pngu3266.dll
   Function: MapFromScreen
   Address: 60612daa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNSystemInfo::MapFromScreen(long *,long *) */

void __cdecl CPNSystemInfo::MapFromScreen(long *param_1,long *param_2)

{
  long lVar1;
  long local_c;
  long local_8;
  
                    /* 0x22daa  1563  ?MapFromScreen@CPNSystemInfo@@SAXPAJ0@Z */
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


