/* Module: sfppack3.dll
   Function: FUN_5cc39430
   Address: 5cc39430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc39430(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0xa0) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xa0));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xa0));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    return 0;
  }
  return 0;
}


