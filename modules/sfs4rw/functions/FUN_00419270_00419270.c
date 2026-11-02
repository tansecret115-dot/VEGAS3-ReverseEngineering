/* Module: sfs4rw.dll
   Function: FUN_00419270
   Address: 00419270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00419270(void *this,uint *param_1,undefined4 *param_2)

{
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  *param_1 = *(uint *)((int)this + 8) >> 9;
  *param_2 = 0x14;
  return 1;
}


