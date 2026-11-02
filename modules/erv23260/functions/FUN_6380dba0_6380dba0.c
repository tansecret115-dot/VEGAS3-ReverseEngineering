/* Module: erv23260.dll
   Function: FUN_6380dba0
   Address: 6380dba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6380dba0(void *this,undefined4 param_1,int param_2)

{
  *(undefined4 *)(*(int *)((int)this + 8) + 0x58 + param_2 * 0x7c) = param_1;
  *(undefined4 *)(*(int *)((int)this + 8) + 0x60 + param_2 * 0x7c) = 1;
  return 0;
}


