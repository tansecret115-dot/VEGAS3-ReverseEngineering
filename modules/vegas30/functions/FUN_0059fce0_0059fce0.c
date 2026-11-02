/* Module: vegas30.exe
   Function: FUN_0059fce0
   Address: 0059fce0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0059fce0(int *param_1,int *param_2,uint *param_3,LPCSTR param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  HGLOBAL pvVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *unaff_EBX;
  int *unaff_ESI;
  undefined8 uVar9;
  longlong lVar10;
  int *local_54;
  int *local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined1 auStack_14 [20];
  
  local_44 = FUN_005624d0(&DAT_0064b538);
  local_54 = (int *)0x0;
  local_48 = 0;
  local_4c = 0;
  local_50 = (int *)0x0;
  local_40 = 0xffffffff;
  local_3c = 0xffffffff;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30 = 0;
  if (local_44 == 0) {
    return -0x7ffb1feb;
  }
  iVar3 = FUN_00562af0(local_44,&DAT_0061b2a8,&local_54);
  if (iVar3 < 0) {
    iVar3 = -0x7ffb1feb;
    goto LAB_005a0324;
  }
  iVar3 = (**(code **)(*local_54 + 0x14))(local_54,param_3 + 0xe,param_3 + 0x12);
  if (iVar3 < 0) goto LAB_005a0324;
  uStack_1c = ftol();
  uStack_2c = ftol();
  uVar9 = ftol();
  uStack_1c = uVar9;
  uStack_24 = ftol();
  uVar9 = ftol();
  uStack_1c = uVar9;
  lVar10 = ftol();
  uStack_1c = lVar10;
  DVar4 = GetFileAttributesA(param_4);
  if ((DVar4 != 0xffffffff) && ((DVar4 & 0x10) == 0)) {
    local_48 = FUN_005ec620();
    iVar3 = FUN_005ec8a0(param_4,&local_4c,0,0);
    if (iVar3 < 0) goto LAB_005a0324;
    FUN_005ed3f0(local_4c);
    iVar5 = FUN_005f1460(2,0);
    if (iVar5 == 0) goto LAB_005a0260;
    iVar3 = FUN_005f6920(&local_50);
    if (iVar3 < 0) goto LAB_005a0324;
    (**(code **)(*local_50 + 0x30))(local_50,auStack_14,0x12,0,0,0,0);
    uVar9 = ftol();
    uVar1 = *(uint *)(iVar5 + 0x50);
    iVar3 = *(int *)(iVar5 + 0x54);
    pvVar6 = GlobalAlloc(0x40,0x20);
    piVar7 = GlobalLock(pvVar6);
    if (piVar7 == (int *)0x0) {
      iVar3 = -0x7ff8fff2;
      goto LAB_005a0324;
    }
    piVar7[2] = 0;
    piVar7[4] = 0;
    *piVar7 = (int)&PTR_LAB_0061b50c;
    piVar7[1] = 0;
    piVar7[3] = 0;
    piVar7[5] = 0;
    piVar7[6] = 0;
    piVar7[7] = 0;
    (**(code **)(*piVar7 + 4))(piVar7);
    param_2 = local_54;
    if (local_54 == (int *)0x0) {
      (**(code **)(*(int *)piVar7[7] + 8))((int *)piVar7[7]);
      piVar7[2] = 0;
      piVar7[4] = 0;
      piVar7[7] = 0;
      piVar7[6] = 0;
      piVar7[3] = 0;
      piVar7[5] = 0;
    }
    else {
      piVar7[7] = (int)local_54;
      (**(code **)(*local_54 + 4))(local_54);
      piVar7[4] = uVar1 - (uint)uVar9;
      piVar7[6] = (int)&uStack_1c;
      piVar7[2] = (int)param_3;
      piVar7[3] = (int)param_4;
      piVar7[5] = (iVar3 - (int)((ulonglong)uVar9 >> 0x20)) - (uint)(uVar1 < (uint)uVar9);
      (**(code **)(*param_1 + 0x34))(param_1,&uStack_1c,0);
    }
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    iVar3 = (**(code **)(*unaff_ESI + 0x1c))(unaff_ESI,piVar7,&local_4c);
    if (iVar3 < 0) goto LAB_005a0324;
  }
  bVar2 = false;
  if (uStack_2c != 0) {
    iVar5 = FUN_005b9fc0(param_1,param_2,0);
    puVar8 = (undefined4 *)FUN_005a5bd0(iVar5 + 0x108,1,iVar5 + 0x9c0);
    FUN_0059f990(*puVar8,puVar8[0x10b],puVar8[0x10c],param_3[8]);
    iVar3 = (**(code **)(*local_54 + 0x18))(local_54,*puVar8,puVar8[0x10b],puVar8[0x10c],&local_34);
    (*(code *)puVar8[0x114])(puVar8,puVar8[0x115],puVar8[0x116]);
    FUN_005ba030(param_1,iVar5,0,1);
    if (iVar3 < 0) goto LAB_005a0324;
    if ((*param_3 & 1) == 0) {
      bVar2 = true;
    }
    else {
      pvVar6 = GlobalAlloc(0x40,0x30);
      piVar7 = GlobalLock(pvVar6);
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7[8] = 0;
        *piVar7 = (int)&PTR_LAB_00629c2c;
        piVar7[1] = 0;
        piVar7[9] = -0x3fd80000;
      }
      FUN_0059fa90(auStack_14);
      FUN_0059fba0(0,0xc0280000,0,0x408f4000);
      (**(code **)(*piVar7 + 4))(piVar7);
      (**(code **)(*unaff_EBX + 0x1c))(unaff_EBX,piVar7,&local_3c);
      (**(code **)(*piVar7 + 8))(piVar7);
    }
  }
  if ((uStack_24 == 0) && (uStack_1c == 0)) {
    if (bVar2) goto LAB_005a018e;
  }
  else {
    iVar5 = FUN_005b9fc0(param_1,param_2,0);
    puVar8 = (undefined4 *)FUN_005a5bd0(iVar5 + 0x108,1,iVar5 + 0x9c0);
    _SfDibSet_36(*puVar8,puVar8[0x10b],0,puVar8[0x10c],0,0,0,0x3f800000,3);
    iVar3 = (**(code **)(*local_54 + 0x18))(local_54,*puVar8,puVar8[0x10b],puVar8[0x10c],&local_30);
    (*(code *)puVar8[0x114])(puVar8,puVar8[0x115],puVar8[0x116]);
    FUN_005ba030(param_1,iVar5,0,1);
    if (iVar3 < 0) goto LAB_005a0324;
LAB_005a018e:
    pvVar6 = GlobalAlloc(0x40,0x30);
    piVar7 = GlobalLock(pvVar6);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7[8] = 0;
      *piVar7 = (int)&PTR_LAB_00629c2c;
      piVar7[1] = 0;
      piVar7[9] = -0x3fd80000;
    }
    FUN_0059fa90(auStack_14);
    FUN_0059fba0(0,0xc0590000,0,0x408f4000);
    (**(code **)(*piVar7 + 4))(piVar7);
    (**(code **)(*unaff_EBX + 0x1c))(unaff_EBX,piVar7,&local_40);
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  if ((*param_3 & 4) != 0) {
    iVar3 = (**(code **)(*local_54 + 0x38))(local_54,param_3[10],param_3[0xb],0);
    if (iVar3 < 0) goto LAB_005a0324;
    if (iVar3 != 0) {
      iVar3 = SfMsgBox(DAT_00647624,1,"Failed to seek to specified timecode.  Proceed or Cancel?.");
      if (iVar3 != 1) {
        iVar3 = -0x7ffb1ff4;
        goto LAB_005a0324;
      }
    }
  }
  iVar3 = (**(code **)(*local_54 + 0x20))(local_54,*param_3 >> 1 & 1);
  if (-1 < iVar3) {
LAB_005a0260:
    param_3[0x22] = (uint)local_54;
    param_3[0x24] = (uint)local_50;
    param_3[0x23] = local_4c;
    param_3[0x25] = local_44;
    *(longlong *)(param_3 + 0x26) = uStack_2c;
    *(longlong *)(param_3 + 0x28) = uStack_24;
    *(longlong *)(param_3 + 0x2a) = uStack_1c;
    param_3[0x2c] = local_40;
    param_3[0x2d] = local_3c;
    param_3[0x2e] = local_38;
    param_3[0x2f] = local_34;
    param_3[0x30] = local_30;
    return iVar3;
  }
LAB_005a0324:
  if (local_54 != (int *)0x0) {
    if ((*param_3 & 2) != 0) {
      (**(code **)(*local_54 + 0x30))(local_54);
    }
    (**(code **)(*local_54 + 0x14))(local_54,0,0);
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 8))(local_50);
  }
  if ((local_48 != 0) && (local_4c != 0)) {
    FUN_005ed410(local_4c,0,0);
  }
  FUN_00562540(&DAT_0064b538,local_44);
  return iVar3;
}


