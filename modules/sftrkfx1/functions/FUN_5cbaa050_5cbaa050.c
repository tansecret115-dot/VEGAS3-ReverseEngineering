/* Module: sftrkfx1.dll
   Function: FUN_5cbaa050
   Address: 5cbaa050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbaa050(int param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x24));
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x24));
  GlobalFree(pvVar1);
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


