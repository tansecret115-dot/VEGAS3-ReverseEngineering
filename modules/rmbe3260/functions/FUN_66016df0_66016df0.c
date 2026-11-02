/* Module: rmbe3260.dll
   Function: FUN_66016df0
   Address: 66016df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66016df0(int param_1,int param_2,int param_3,undefined4 param_4,undefined2 param_5)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = param_3;
    *(undefined4 *)(param_1 + 0xc) = param_4;
    *(undefined2 *)(param_1 + 0x10) = param_5;
    return 0;
  }
  return 0x80070057;
}


