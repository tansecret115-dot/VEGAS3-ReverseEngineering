/* Module: rmbe3260.dll
   Function: FUN_66024eb0
   Address: 66024eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_66024eb0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  if ((((param_2 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0)) &&
      (param_4 != (undefined4 *)0x0)) && (param_5 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x46);
    *param_3 = *(undefined4 *)(param_1 + 0x4a);
    *param_4 = *(undefined4 *)(param_1 + 0x4e);
    *param_5 = *(undefined4 *)(param_1 + 0x52);
    return 0;
  }
  return 0x80004003;
}


