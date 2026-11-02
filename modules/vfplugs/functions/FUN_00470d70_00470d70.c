/* Module: vfplugs.dll
   Function: FUN_00470d70
   Address: 00470d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00470d70(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x68) = param_1;
  if (*(int *)((int)this + 0x54) != 0) {
    FUN_00470d90((int)this);
  }
  return 1;
}


