/* Module: rmbe3260.dll
   Function: FUN_66016e30
   Address: 66016e30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_66016e30(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined2 *param_5)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 4);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 8);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0xc);
  }
  if (param_5 != (undefined2 *)0x0) {
    *param_5 = *(undefined2 *)(param_1 + 0x10);
  }
  return 0;
}


