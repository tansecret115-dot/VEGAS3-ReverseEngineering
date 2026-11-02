/* Module: erv23260.dll
   Function: FUN_637f2b00
   Address: 637f2b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f2b00(void *this,uint param_1)

{
  if (0x7f < param_1) {
    return 10;
  }
  *(uint *)((int)this + 0x18) = param_1 + 1;
  if ((*(int *)((int)this + 0x28c) != 0) && (*(int *)((int)this + 0x284) == 0)) {
    *(uint *)(*(int *)((int)this + 0x28c) + 0x1afc) = param_1 + 1;
  }
  return 0;
}


