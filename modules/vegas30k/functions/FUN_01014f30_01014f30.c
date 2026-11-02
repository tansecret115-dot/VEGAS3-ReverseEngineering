/* Module: vegas30k.dll
   Function: FUN_01014f30
   Address: 01014f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01014f30(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x20) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x20));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x20));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return 0;
}


