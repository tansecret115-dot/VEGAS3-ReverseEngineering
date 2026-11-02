/* Module: wavplug.dll
   Function: FUN_5f3c48d0
   Address: 5f3c48d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f3c48d0(void *this,uint *param_1,undefined4 *param_2)

{
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  *param_1 = *(uint *)((int)this + 8) >> 9;
  *param_2 = 0x14;
  return 1;
}


