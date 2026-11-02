/* Module: vegas30k.dll
   Function: FUN_011637d0
   Address: 011637d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011637d0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  *param_1 = &PTR_LAB_011e907c;
  param_1[1] = 0;
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[4] = param_3;
  *(undefined4 **)(param_3 + 0xc) = param_1;
  *(undefined4 *)(param_1[4] + 0x10) = 0;
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
  *(undefined4 *)(param_1[4] + 0x44) = 0;
  *(undefined4 *)(param_1[4] + 0x4c) = 1;
  *(int *)(param_1[4] + 0x50) = param_2;
  return;
}


