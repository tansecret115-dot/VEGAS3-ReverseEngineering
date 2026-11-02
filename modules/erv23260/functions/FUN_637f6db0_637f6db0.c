/* Module: erv23260.dll
   Function: FUN_637f6db0
   Address: 637f6db0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_637f6db0(void *this,undefined4 param_1,int param_2,int param_3,int param_4)

{
  if (param_4 == 0) {
    if ((*(int *)((int)this + 0x1af4) != 0) &&
       ((uint)(param_3 * param_2 * 3) <= *(uint *)((int)this + 0x1af8))) {
      return 1;
    }
  }
  else if ((*(int *)((int)this + 0x1af4) != 0) &&
          (param_3 * 8 + 7U <= *(uint *)((int)this + 0x1af8))) {
    return 1;
  }
  return 0;
}


