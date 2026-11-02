/* Module: vegas30k.dll
   Function: FUN_01163730
   Address: 01163730
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_01163730(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  
  param_1[5] = param_3;
  *param_1 = &PTR_LAB_011e907c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = param_2;
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(param_2 + 0x16);
    *(int **)(param_1[4] + 4) = param_2 + 0x16;
    *(undefined4 *)(param_1[4] + 8) = 0;
    *(undefined4 **)(param_1[4] + 0xc) = param_1;
    *(undefined4 *)(param_1[4] + 0x10) = 0;
    *(undefined4 *)(param_1[4] + 0x14) = param_4;
    *(undefined4 *)(param_1[4] + 0x1c) = param_4;
    *(undefined4 *)(param_1[4] + 0x18) = 0;
    iVar1 = param_1[4];
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    iVar1 = param_1[4];
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    iVar1 = param_1[4];
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    iVar1 = param_1[4];
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(param_1[4] + 0x40) = param_5;
    *(undefined4 *)(param_1[4] + 0x44) = 0;
    *(undefined4 *)(param_1[4] + 0x4c) = 0;
    *(undefined4 *)(param_1[4] + 0x50) = 0;
  }
  return;
}


