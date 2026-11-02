/* Module: vidcap30.exe
   Function: FUN_0057aec0
   Address: 0057aec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0057aec0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  *(undefined4 *)(param_1 + 0x1c) = param_2[3];
  return;
}


