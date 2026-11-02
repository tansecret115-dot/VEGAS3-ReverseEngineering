/* Module: erv33260.dll
   Function: FUN_67072930
   Address: 67072930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_67072930(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((-2 < iVar1) && (iVar1 < *(int *)((int)this + 0x80))) {
    if (iVar1 < 0) {
      *param_1 = 0;
    }
    return 0;
  }
  return 10;
}


