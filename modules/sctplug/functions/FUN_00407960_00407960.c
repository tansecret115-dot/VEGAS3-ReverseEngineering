/* Module: sctplug.dll
   Function: FUN_00407960
   Address: 00407960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00407960(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x218) = *param_2;
    *(undefined4 *)(param_1 + 0x21c) = param_2[1];
    *(undefined4 *)(param_1 + 0x220) = param_2[2];
    *(undefined4 *)(param_1 + 0x224) = param_2[3];
    *(undefined2 *)(param_1 + 0x228) = *(undefined2 *)(param_2 + 4);
  }
  *(undefined4 *)(param_1 + 0x210) = param_3;
  *(undefined4 *)(param_1 + 0x214) = param_4;
  return 0;
}


