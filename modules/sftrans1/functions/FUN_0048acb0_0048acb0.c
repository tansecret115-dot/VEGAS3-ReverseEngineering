/* Module: sftrans1.dll
   Function: FUN_0048acb0
   Address: 0048acb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048acb0(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x100);
  param_2[1] = *(undefined4 *)(param_1 + 0x104);
  return 1;
}


