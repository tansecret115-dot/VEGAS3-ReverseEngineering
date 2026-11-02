/* Module: vidcap30.exe
   Function: FUN_0057e080
   Address: 0057e080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0057e080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)(param_1 + 0x74) = param_2;
  *(undefined4 *)(param_1 + 0x78) = param_3;
  *(undefined4 *)(param_1 + 0x7c) = param_4;
  *(undefined4 *)(param_1 + 0x80) = param_5;
  *(undefined4 *)(param_1 + 0x84) = param_6;
  *(undefined4 *)(param_1 + 0x88) = param_7;
  return 0;
}


