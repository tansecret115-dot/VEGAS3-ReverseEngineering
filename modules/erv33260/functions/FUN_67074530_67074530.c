/* Module: erv33260.dll
   Function: FUN_67074530
   Address: 67074530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_67074530(void *this,uint param_1)

{
  if ((param_1 != 0) && ((param_1 & 0xfffffff8) == 0)) {
    if (((*(uint *)((int)this + 0x40) & 1) == 0) && ((param_1 & 1) != 0)) {
      *(undefined4 *)((int)this + 0x38) = 1;
    }
    if ((((*(uint *)((int)this + 0x40) & 4) == 0) && ((param_1 & 4) != 0)) &&
       (*(int *)((int)this + 0x38) != 0)) {
      *(undefined4 *)((int)this + 0x34) = 1;
    }
    *(uint *)((int)this + 0x40) = param_1;
    return 1;
  }
  return 0;
}


