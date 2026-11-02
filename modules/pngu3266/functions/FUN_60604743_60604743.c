/* Module: pngu3266.dll
   Function: FUN_60604743
   Address: 60604743
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_60604743(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  if ((param_2 != 0x410) || (DAT_60649de8 == 0)) {
    CallWindowProcA(DAT_60649de4,param_1,param_2,param_3,param_4);
  }
  return;
}


