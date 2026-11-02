/* Module: sfmarket2.dll
   Function: FUN_0040e080
   Address: 0040e080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040e080(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)((int)this + 0x10ac) == 0) {
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)((int)this + 0x10a4);
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)((int)this + 0x10a8);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)((int)this + 0x10a4);
    *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)((int)this + 0x10a8);
    return 0;
  }
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  return 0;
}


