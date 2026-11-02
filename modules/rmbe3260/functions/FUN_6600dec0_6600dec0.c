/* Module: rmbe3260.dll
   Function: FUN_6600dec0
   Address: 6600dec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600dec0(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  if (*(int *)(param_1 + 4) != 0) {
    return 0x80040007;
  }
  if (((param_2 != (undefined1 *)0x0) && (param_3 != (undefined1 *)0x0)) &&
     (param_4 != (undefined1 *)0x0)) {
    *param_2 = *(undefined1 *)(param_1 + 8);
    *param_3 = *(undefined1 *)(param_1 + 9);
    *param_4 = *(undefined1 *)(param_1 + 10);
    return 0;
  }
  return 0x80004003;
}


