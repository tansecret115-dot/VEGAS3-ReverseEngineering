/* Module: rmbe3260.dll
   Function: FUN_66024f00
   Address: 66024f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_66024f00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  *(undefined4 *)(param_1 + 0x46) = param_2;
  *(undefined4 *)(param_1 + 0x4a) = param_3;
  *(undefined4 *)(param_1 + 0x4e) = param_4;
  *(undefined4 *)(param_1 + 0x52) = param_5;
  return 0;
}


