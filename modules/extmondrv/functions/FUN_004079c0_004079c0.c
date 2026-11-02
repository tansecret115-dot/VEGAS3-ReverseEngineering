/* Module: extmondrv.dll
   Function: FUN_004079c0
   Address: 004079c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004079c0(int param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,uint param_6
                ,double param_7)

{
  ushort uVar1;
  LPCVOID pvVar2;
  int iVar3;
  double dVar4;
  uint uVar5;
  HGLOBAL hMem;
  LPVOID pvVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined1 auStack_6c [4];
  double dStack_68;
  double dStack_60;
  double dStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30 [3];
  ushort uStack_22;
  undefined2 local_20;
  undefined2 uStack_1e;
  int local_1c;
  
  piVar9 = (int *)(param_1 + 0x1c);
  piVar10 = local_30;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar10 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar10 = piVar10 + 1;
  }
  local_20 = 0;
  uStack_1e = 0;
  uVar5 = (uint)uStack_22 * local_30[1] + 0x1f;
  local_1c = ((int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3) * local_30[2];
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar7 = ICOpen(0x63646976,*(undefined4 *)(param_1 + 0x6c),1);
    *(int *)(param_1 + 0x5c) = iVar7;
    if (iVar7 == 0) {
      return -0x7ffb1fe1;
    }
    iVar7 = ICSendMessage(iVar7,0x4007,&uStack_3c,param_1 + 0x1c);
    if (iVar7 != 0) {
      ICClose(*(undefined4 *)(param_1 + 0x5c));
      *(undefined4 *)(param_1 + 0x5c) = 0;
      return -0x7ffb1fe1;
    }
  }
  if (*param_2 == 0) {
    hMem = GlobalAlloc(0x42,*(SIZE_T *)(param_1 + 0x30));
    pvVar6 = GlobalLock(hMem);
    *param_2 = (int)pvVar6;
    if (pvVar6 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
  }
  *param_3 = *(undefined4 *)(param_1 + 0x30);
  if (((*(ushort *)((int)param_4 + 0xe) == uStack_22) && (param_4[1] == local_30[1])) &&
     (param_4[2] == local_30[2])) goto LAB_00407dd0;
  pvVar2 = *(LPCVOID *)(param_1 + 100);
  piVar9 = (int *)(param_1 + 100);
  if ((pvVar2 != (LPCVOID)0x0) &&
     ((*(int *)((int)pvVar2 + 4) != local_30[1] || (*(int *)((int)pvVar2 + 8) != local_30[2])))) {
    FUN_00418210(pvVar2,0);
    *piVar9 = 0;
  }
  if ((*piVar9 == 0) &&
     (iVar7 = FUN_00418270(piVar9,0x1b,local_30[1],local_30[2],(uint *)0x0,0,0), iVar7 < 0)) {
    return iVar7;
  }
  piVar10 = (int *)*piVar9;
  iVar7 = piVar10[1];
  iVar3 = piVar10[2];
  dVar4 = (double)param_4[1] * (param_7 / *(double *)(param_1 + 0x70));
  dStack_60 = dVar4 / (double)param_4[2];
  dStack_58 = (double)iVar7;
  dStack_68 = (double)iVar3;
  if (dStack_68 / (double)param_4[2] <= dStack_58 / dVar4) {
    dStack_60 = dStack_68 * dStack_60;
    iStack_50 = 0;
    uStack_4c = 0;
    iStack_48 = ftol();
    iStack_44 = iVar3;
    FUN_0041d040(piVar10,(int *)0x0,&iStack_50,0,(undefined4 *)&DAT_0044e190,3);
    iStack_50 = ftol();
    piVar10 = (int *)*piVar9;
    uStack_4c = 0;
  }
  else {
    dStack_68 = dStack_58 / dStack_60;
    iStack_50 = 0;
    uStack_4c = 0;
    dStack_60 = dStack_58;
    iStack_48 = iVar7;
    iStack_44 = ftol();
    FUN_0041d040(piVar10,(int *)0x0,&iStack_50,0,(undefined4 *)&DAT_0044e190,3);
    iStack_50 = 0;
    uStack_4c = ftol();
    piVar10 = (int *)*piVar9;
  }
  iStack_48 = iVar7;
  iStack_44 = iVar3;
  FUN_0041d040(piVar10,(int *)0x0,&iStack_50,0,(undefined4 *)&DAT_0044e190,3);
  uStack_40 = ftol();
  uStack_38 = ftol();
  uStack_3c = ftol();
  uStack_34 = ftol();
  piVar10 = (int *)*piVar9;
  uVar5 = (uint)*(ushort *)((int)piVar10 + 0xe) * piVar10[1] + 0x1f;
  if (piVar10[4] == 0) {
    if (((piVar10[8] != 0) || (uVar1 = *(ushort *)((int)piVar10 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_00407d4b;
    iVar7 = 1 << ((byte)uVar1 & 0x1f);
LAB_00407d4e:
    piVar8 = (int *)(*piVar10 + iVar7 * 4 + (int)piVar10);
  }
  else {
    if (piVar10[4] != 3) {
LAB_00407d4b:
      iVar7 = piVar10[8];
      goto LAB_00407d4e;
    }
    piVar8 = piVar10 + 0xd;
  }
  FUN_0041c190(piVar10,piVar8,&uStack_40,
               (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3,param_4,param_5,
               (uint *)0x0,param_6,0x1000003);
  piVar9 = (int *)*piVar9;
  if (piVar9[4] == 0) {
    if (((piVar9[8] == 0) && (uVar1 = *(ushort *)((int)piVar9 + 0xe), uVar1 != 0)) && (uVar1 < 9)) {
      param_5 = (int *)((int)piVar9 + *piVar9 + (1 << ((byte)uVar1 & 0x1f)) * 4);
      goto LAB_00407dd0;
    }
  }
  else if (piVar9[4] == 3) {
    param_5 = piVar9 + 0xd;
    goto LAB_00407dd0;
  }
  param_5 = (int *)((int)piVar9 + *piVar9 + piVar9[8] * 4);
LAB_00407dd0:
  iVar7 = ICCompress(*(undefined4 *)(param_1 + 0x5c),0,param_1 + 0x1c,*param_2,local_30,param_5,0,
                     auStack_6c,0,0,0,0,0);
  if (iVar7 == 0) {
    return 0;
  }
  return -0x7ffb1fee;
}


