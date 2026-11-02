/* Module: sfmarket2.dll
   Function: FUN_0041d1c0
   Address: 0041d1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0041d1c0(void *this,uint *param_1,undefined4 *param_2)

{
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  *param_1 = *(uint *)((int)this + 8) >> 9;
  *param_2 = 0x14;
  return 1;
}


