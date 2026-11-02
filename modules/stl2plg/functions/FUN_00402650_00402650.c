/* Module: stl2plg.dll
   Function: FUN_00402650
   Address: 00402650
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00402650(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 8));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


