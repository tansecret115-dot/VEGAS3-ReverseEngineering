/* Module: erv23260.dll
   Function: FUN_637f8e30
   Address: 637f8e30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f8e30(void *this,undefined4 *param_1,undefined4 *param_2)

{
  if (*(int *)((int)this + 0x34) != 0) {
    *param_1 = *(undefined4 *)(*(int *)((int)this + 0x34) + 0xc);
    *param_2 = *(undefined4 *)(*(int *)((int)this + 0x34) + 0x10);
    return 0;
  }
  *param_1 = 0;
  *param_2 = 0;
  return 1;
}


