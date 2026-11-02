/* Module: vegas30k.dll
   Function: FUN_0119f270
   Address: 0119f270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0119f270(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x1ac);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x1b0);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x1b4);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0x1b8);
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = *(undefined4 *)(param_1 + 0x1bc);
  }
  return 0;
}


