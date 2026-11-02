/* Module: g2plug.dll
   Function: FUN_5f809940
   Address: 5f809940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f809940(int *param_1,int *param_2,uint param_3,uint param_4,int *param_5,uint *param_6)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if ((*param_5 == 0) &&
     (iVar5 = FUN_5f81efd0(param_5,0x1b,param_3,param_4,(uint *)0x0,0,0), iVar5 < 0)) {
    return;
  }
  piVar2 = (int *)*param_5;
  if ((param_1[2] != piVar2[2]) || (param_1[1] != piVar2[1])) {
    if (piVar2[4] == 0) {
      if (((piVar2[8] != 0) || (uVar1 = *(ushort *)((int)piVar2 + 0xe), uVar1 == 0)) || (8 < uVar1))
      goto LAB_5f809a4e;
      iVar5 = 1 << ((byte)uVar1 & 0x1f);
LAB_5f809a51:
      piVar8 = (int *)(*piVar2 + iVar5 * 4 + (int)piVar2);
    }
    else {
      if (piVar2[4] != 3) {
LAB_5f809a4e:
        iVar5 = piVar2[8];
        goto LAB_5f809a51;
      }
      piVar8 = piVar2 + 0xd;
    }
    uVar10 = piVar2[5];
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)piVar8 = 0;
      piVar8 = (int *)((int)piVar8 + 1);
    }
    iVar5 = *param_5;
    iVar3 = *(int *)(iVar5 + 4);
    iVar6 = ftol();
    iVar4 = *(int *)(iVar5 + 8);
    iVar7 = iVar3;
    if (iVar4 < iVar6) {
      iVar7 = ftol();
      iVar6 = iVar4;
    }
    local_10 = (iVar3 - iVar7) / 2;
    local_8 = iVar7 + local_10;
    local_c = (*(int *)(iVar5 + 8) - iVar6) / 2;
    local_4 = iVar6 + local_c;
    if (param_6 != (uint *)0x0) {
      *param_6 = local_10;
      param_6[1] = local_c;
      param_6[2] = local_8;
      param_6[3] = local_4;
    }
    piVar2 = (int *)*param_5;
    if (piVar2[4] == 0) {
      if (((piVar2[8] != 0) || (uVar1 = *(ushort *)((int)piVar2 + 0xe), uVar1 == 0)) || (8 < uVar1))
      goto LAB_5f809b16;
      iVar5 = 1 << ((byte)uVar1 & 0x1f);
    }
    else {
      if (piVar2[4] == 3) {
        piVar8 = piVar2 + 0xd;
        goto LAB_5f809b20;
      }
LAB_5f809b16:
      iVar5 = piVar2[8];
    }
    piVar8 = (int *)(*piVar2 + iVar5 * 4 + (int)piVar2);
LAB_5f809b20:
    FUN_5f822ef0(piVar2,piVar8,&local_10,0,param_1,param_2,(uint *)0x0,0,3);
    return;
  }
  if (piVar2[4] == 0) {
    if (((piVar2[8] != 0) || (uVar1 = *(ushort *)((int)piVar2 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_5f8099cc;
    iVar5 = *piVar2 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (piVar2[4] == 3) {
      piVar8 = piVar2 + 0xd;
      goto LAB_5f8099d6;
    }
LAB_5f8099cc:
    iVar5 = *piVar2 + piVar2[8] * 4;
  }
  piVar8 = (int *)(iVar5 + (int)piVar2);
LAB_5f8099d6:
  FUN_5f822ef0(piVar2,piVar8,(uint *)0x0,0,param_1,param_2,(uint *)0x0,0,3);
  if (param_6 == (uint *)0x0) {
    return;
  }
  param_6[3] = param_4;
  param_6[2] = param_3;
  *param_6 = 0;
  param_6[1] = 0;
  return;
}


