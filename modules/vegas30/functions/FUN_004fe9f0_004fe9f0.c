/* Module: vegas30.exe
   Function: FUN_004fe9f0
   Address: 004fe9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fe9f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = GetSystemMetrics(0x44);
  *(int *)(param_1 + 0x48) = (iVar1 + 1) / 2;
  iVar1 = GetSystemMetrics(0x45);
  *(undefined4 *)(param_1 + 0x1ac) = 0x21;
  *(int *)(param_1 + 0x4c) = (iVar1 + 1) / 2;
  *(uint *)(param_1 + 0x1b0) = (-(uint)(*(int *)(param_1 + 8) != 0) & 0x14) + 0x1e;
  *(uint *)(param_1 + 0x1b4) = (-(uint)(*(int *)(param_1 + 8) != 0) & 0xfffffff6) + 0xf;
  puVar2 = (undefined4 *)_SfGetUIFontSize_4(100);
  *(undefined4 *)(param_1 + 0x158) = *puVar2;
  iVar1 = puVar2[1];
  *(int *)(param_1 + 0x15c) = iVar1;
  *(undefined4 *)(param_1 + 0x160) = 100;
  *(undefined4 *)(param_1 + 0x164) = 0x3c;
  *(int *)(param_1 + 0x16c) = iVar1 * 2 + 0x4e;
  *(undefined4 *)(param_1 + 0x168) = 0x70;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  _SfList_CreateExZ_32((int *)(param_1 + 0x178),4,0x10,0x10,2,0,0,0);
  if (*(int *)(param_1 + 0x178) == 0) {
    return 0xffffffff;
  }
  FUN_004fe2c0(param_1);
  FUN_004fef60(param_1);
  FUN_004faf40(param_1);
  FUN_004fb050(param_1,0,0,0,1,1);
  return 0;
}


