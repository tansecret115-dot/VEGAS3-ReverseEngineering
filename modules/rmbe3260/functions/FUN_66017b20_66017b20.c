/* Module: rmbe3260.dll
   Function: FUN_66017b20
   Address: 66017b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_66017b20(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5
            )

{
  *(undefined2 *)(param_1 + 0x10) = param_2;
  *(undefined2 *)(param_1 + 0x12) = param_3;
  *(undefined2 *)(param_1 + 0x14) = param_4;
  *(undefined2 *)(param_1 + 0x16) = param_5;
  return 0;
}


