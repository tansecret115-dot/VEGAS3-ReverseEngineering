/* Module: pnrs3260.dll
   Function: FUN_606f1c70
   Address: 606f1c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_606f1c70(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_606f1e90(*(void **)this,param_1);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x10);
  }
  return 0xffffffff;
}


