/* Module: mpegin.dll
   Function: FUN_1000daf0
   Address: 1000daf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1000daf0(undefined4 *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1[0x4b95] + 0x44) + *(int *)(param_1[0x4b95] + 0x40);
  iVar3 = FUN_1000dbc0((int)param_1,iVar5);
  iVar3 = iVar3 * 0x18;
  *(undefined4 *)(param_1[0x4b95] + 0x160) = 1;
  iVar4 = *(int *)param_1[0x4b95];
  puVar1 = (uint *)(iVar4 + iVar3);
  FUN_10005520((int *)param_1[0x4b95] + 0x4a,*puVar1,puVar1[1],*(int *)(iVar4 + 8 + iVar3));
  *(undefined4 *)(param_1[0x4b95] + 0x160) = 0;
  iVar4 = *(int *)param_1[0x4b95];
  iVar4 = FUN_10007a60(param_1,*(int *)(iVar4 + iVar5 * 0x18 + 0x14) -
                               *(int *)(iVar4 + 0x14 + iVar3),
                       (int)*(short *)(iVar4 + 0xc + iVar5 * 0x18));
  if (iVar4 != 0) {
    return 1;
  }
  piVar2 = (int *)param_1[0x4b95];
  param_1[0x71] = (int)*(short *)(*piVar2 + 0xe + (piVar2[0x11] + piVar2[0x10]) * 0x18);
  return piVar2[0x5a];
}


