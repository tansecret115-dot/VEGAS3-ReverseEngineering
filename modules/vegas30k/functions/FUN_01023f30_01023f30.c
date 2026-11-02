/* Module: vegas30k.dll
   Function: FUN_01023f30
   Address: 01023f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01023f30(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    *param_1 = *(undefined4 *)(param_2 + 0x18);
    param_1[1] = *(undefined4 *)(param_2 + 0x1c);
    param_1[2] = *(undefined4 *)(param_2 + 0x10);
    param_1[3] = *(undefined4 *)(param_2 + 0x14);
    param_1[4] = param_3;
    param_1[5] = param_4;
    return 0;
  }
  return 0x80004003;
}


