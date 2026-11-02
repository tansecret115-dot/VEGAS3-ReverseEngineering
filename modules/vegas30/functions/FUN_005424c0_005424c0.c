/* Module: vegas30.exe
   Function: FUN_005424c0
   Address: 005424c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005424c0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  *(undefined4 *)(param_1 + 0x14) = param_2[2];
  *(undefined4 *)(param_1 + 0x18) = param_2[3];
  return;
}


