/* Module: rmbe3260.dll
   Function: FUN_6603dd20
   Address: 6603dd20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603dd20(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xfff3;
  if (*(int *)((int)this + 0xa8) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0xa8) + 4) = param_1;
    uVar1 = 0;
  }
  return uVar1;
}


