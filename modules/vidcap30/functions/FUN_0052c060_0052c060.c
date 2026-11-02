/* Module: vidcap30.exe
   Function: FUN_0052c060
   Address: 0052c060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052c060(int param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x10) = param_3;
    *(undefined2 *)(param_2 + 0x14) = param_4;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
  }
  return;
}


