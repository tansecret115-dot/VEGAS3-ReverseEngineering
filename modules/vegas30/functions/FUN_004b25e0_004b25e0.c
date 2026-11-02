/* Module: vegas30.exe
   Function: FUN_004b25e0
   Address: 004b25e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_004b25e0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  *(undefined4 *)(param_1 + 0x40) = param_11;
  *(undefined4 *)(param_1 + 0x44) = param_12;
  if (param_4[4] == 3) {
    iVar2 = 0xc;
  }
  else {
    iVar2 = param_4[8] << 2;
  }
  pvVar3 = GlobalAlloc(0,*param_4 + iVar2);
  piVar4 = GlobalLock(pvVar3);
  *(int **)(param_1 + 0xc) = piVar4;
  if (piVar4 == (int *)0x0) {
    return 0x8007000e;
  }
  if (param_4[4] == 3) {
    iVar2 = 0xc;
  }
  else {
    iVar2 = param_4[8] << 2;
  }
  iVar1 = *param_4;
  for (uVar6 = (uint)(iVar1 + iVar2) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *piVar4 = *param_4;
    param_4 = param_4 + 1;
    piVar4 = piVar4 + 1;
  }
  for (uVar6 = iVar1 + iVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)piVar4 = (char)*param_4;
    param_4 = (int *)((int)param_4 + 1);
    piVar4 = (int *)((int)piVar4 + 1);
  }
  pvVar3 = GlobalAlloc(0,0x40);
  puVar5 = GlobalLock(pvVar3);
  *(undefined4 **)(param_1 + 0x10) = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0xc));
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0xc));
    GlobalFree(pvVar3);
    return 0x8007000e;
  }
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *param_5;
    param_5 = param_5 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x20) = param_6;
  *(undefined4 *)(param_1 + 0x28) = param_8;
  *(undefined4 *)(param_1 + 0x2c) = param_9;
  *(undefined4 *)(param_1 + 0x24) = param_7;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return 0;
}


