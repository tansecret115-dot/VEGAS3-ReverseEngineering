/* Module: erv33260.dll
   Function: FUN_670744c0
   Address: 670744c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_670744c0(void *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  *(undefined4 *)((int)this + 0x34) = 1;
  *(undefined4 *)((int)this + 0x38) = 1;
  *(undefined4 *)((int)this + 0x44) = 2;
  *(undefined4 *)((int)this + 0x48) = 2;
  *(undefined4 *)((int)this + 0x4c) = 2;
  if (((((param_1 & 3) != 0) || ((param_2 & 3) != 0)) || (param_1 < 8)) || (param_2 < 8)) {
    uVar1 = 0;
  }
  return uVar1;
}


