/* Module: vegas30k.dll
   Function: FUN_011801f0
   Address: 011801f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011801f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x18) = 25000;
    *(undefined4 *)(param_1 + 0x14) = 0xbb5;
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
  }
  if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 0x18) = 10;
    *(undefined4 *)(param_1 + 0x14) = 1;
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
  }
  if (iVar1 == 4) {
    *(undefined4 *)(param_1 + 0x18) = 0x7d;
    *(undefined4 *)(param_1 + 0x14) = 0xc;
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
  }
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0x19;
    *(undefined4 *)(param_1 + 0x14) = 3;
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0x61c1;
  *(undefined4 *)(param_1 + 0x14) = 3000;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}


