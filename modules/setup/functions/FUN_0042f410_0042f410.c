/* Module: Setup.exe
   Function: FUN_0042f410
   Address: 0042f410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0042f410(void *this,uint *param_1,undefined4 *param_2)

{
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  *param_1 = *(uint *)((int)this + 8) >> 9;
  *param_2 = 0x14;
  return 1;
}


