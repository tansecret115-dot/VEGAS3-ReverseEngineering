/* Module: vidcap30.exe
   Function: FUN_0057af70
   Address: 0057af70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0057af70(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = *param_2;
  *(undefined4 *)(param_1 + 0x30) = param_2[1];
  *(undefined4 *)(param_1 + 0x34) = param_2[2];
  *(undefined4 *)(param_1 + 0x38) = param_2[3];
  return;
}


