/* Module: wavplug.dll
   Function: FUN_5f393740
   Address: 5f393740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f393740(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x70) = *param_2;
    *(undefined4 *)(param_1 + 0x74) = param_2[1];
    *(undefined4 *)(param_1 + 0x78) = param_2[2];
    *(undefined4 *)(param_1 + 0x7c) = param_2[3];
    *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_2 + 4);
  }
  *(undefined4 *)(param_1 + 0x68) = param_3;
  *(undefined4 *)(param_1 + 0x6c) = param_4;
  return 0;
}


