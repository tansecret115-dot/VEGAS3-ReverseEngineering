/* Module: sfppack3.dll
   Function: FUN_5cc3d3e0
   Address: 5cc3d3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc3d3e0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x22f4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x22f4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x22f4));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x22f4) = 0;
    return 0;
  }
  return 0;
}


