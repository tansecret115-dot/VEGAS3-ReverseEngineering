/* Module: sfcdi.dll
   Function: FUN_5bf2beb0
   Address: 5bf2beb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2beb0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (param_1 == 0) {
    return 0x80004003;
  }
  if (*(LPCVOID *)(param_1 + 4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 4));
    GlobalFree(pvVar1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}


