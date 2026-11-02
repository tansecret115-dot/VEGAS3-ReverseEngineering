/* Module: vidpcore.dll
   Function: FUN_5df08e00
   Address: 5df08e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5df08e00(int param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  iVar3 = 4;
  bVar6 = true;
  piVar4 = param_2;
  piVar5 = &DAT_5df17970;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
LAB_5df08e7a:
    iVar3 = FUN_5deca690(param_1 + 0x568,0x1c,*(int *)(param_1 + 0x494) - *(int *)(param_1 + 0x48c),
                         *(int *)(param_1 + 0x498) - *(int *)(param_1 + 0x490),0,0,0);
    if (iVar3 < 0) {
      return 0;
    }
  }
  else {
    iVar3 = 4;
    bVar6 = true;
    piVar4 = param_2;
    piVar5 = &DAT_5df17980;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (bVar6) goto LAB_5df08e7a;
    iVar3 = 4;
    bVar6 = true;
    piVar4 = &DAT_5df34890;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *param_2 == *piVar4;
      param_2 = param_2 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar6);
    if (!bVar6) {
      return 0;
    }
    iVar3 = FUN_5deca690(param_1 + 0x568,0x20,*(int *)(param_1 + 0x494) - *(int *)(param_1 + 0x48c),
                         *(int *)(param_1 + 0x498) - *(int *)(param_1 + 0x490),0,0,0);
    if (iVar3 < 0) {
      return 0;
    }
  }
  piVar4 = *(int **)(param_1 + 0x568);
  *(uint *)(param_1 + 0x548) = *(uint *)(param_1 + 0x548) | 1;
  if (piVar4[4] == 0) {
    if (((piVar4[8] != 0) || (uVar1 = *(ushort *)((int)piVar4 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_5df08efa;
    iVar3 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (piVar4[4] == 3) {
      piVar4 = piVar4 + 0xd;
      goto LAB_5df08f04;
    }
LAB_5df08efa:
    iVar3 = piVar4[8];
  }
  piVar4 = (int *)(*piVar4 + iVar3 * 4 + (int)piVar4);
LAB_5df08f04:
  *(int **)(param_1 + 0x488) = piVar4;
  FUN_5df08a40(param_1 + 0x428,param_1 + 0x550);
  iVar3 = *(int *)(param_1 + 0x568);
  uVar2 = (uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f;
  *(int *)(param_1 + 0x488) =
       *(int *)(param_1 + 0x488) +
       ((int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3) *
       ((*(int *)(param_1 + 0x498) - *(int *)(param_1 + 0x490)) + -1);
  uVar2 = (uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f;
  *(int *)(param_1 + 0x56c) = -((int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3);
  return 1;
}


