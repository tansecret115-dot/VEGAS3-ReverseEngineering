/* Module: pnrs3260.dll
   Function: FUN_606f1c90
   Address: 606f1c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_606f1c90(void *this,uint param_1)

{
  int iVar1;
  
  if (*(int *)((int)*(void **)this + 4) == 0) {
    return 0;
  }
  iVar1 = FUN_606f1e90(*(void **)this,param_1);
  if (*(int *)(iVar1 + 0x10) == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 4);
}


