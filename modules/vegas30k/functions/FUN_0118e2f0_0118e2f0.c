/* Module: vegas30k.dll
   Function: FUN_0118e2f0
   Address: 0118e2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118e2f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_0118e3d0(param_2,param_3);
  }
  return 0;
}


