/* Module: vidcap30.exe
   Function: FUN_004610b0
   Address: 004610b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004610b0(int param_1,int *param_2)

{
  _SfGetTextExtent_16(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x28),0xffffffff,
                      param_2);
  *param_2 = *param_2 + *(int *)(param_1 + 0x3c);
  param_2[1] = param_2[1] + *(int *)(param_1 + 0x40);
  if ((*(byte *)(param_1 + 0x44) & 8) != 0) {
    *param_2 = *param_2 + 2;
    param_2[1] = param_2[1] + 2;
  }
  if ((*(byte *)(param_1 + 0x4c) & 2) != 0) {
    *param_2 = *param_2 + 4;
    param_2[1] = param_2[1] + 4;
  }
  return;
}


