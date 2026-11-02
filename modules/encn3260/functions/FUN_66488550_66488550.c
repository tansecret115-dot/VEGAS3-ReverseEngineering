/* Module: encn3260.dll
   Function: FUN_66488550
   Address: 66488550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66488550(void *this,int *param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  void *this_00;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  bool bVar14;
  int *local_14;
  byte *local_10;
  void *local_c;
  int *local_8;
  
  piVar8 = param_1;
  piVar6 = *(int **)((int)this + 0x68);
  local_10 = (byte *)0x0;
  local_14 = (int *)0x0;
  local_8 = (int *)0x0;
  if (piVar6 == (int *)0x0) {
    return 0x80004005;
  }
  pbVar12 = &DAT_664e2538;
  pbVar3 = (byte *)param_1[0xd];
  do {
    bVar1 = *pbVar3;
    bVar14 = bVar1 < *pbVar12;
    if (bVar1 != *pbVar12) {
LAB_664885a1:
      iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_664885a6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar14 = bVar1 < pbVar12[1];
    if (bVar1 != pbVar12[1]) goto LAB_664885a1;
    pbVar3 = pbVar3 + 2;
    pbVar12 = pbVar12 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_664885a6:
  local_c = this;
  if (iVar4 != 0) {
    uVar5 = (**(code **)(*piVar6 + 0x38))(piVar6,0x80004005);
    return uVar5;
  }
  iVar4 = FUN_664bd670(param_1,s_MulticastIP_664e2604);
  if (((iVar4 != 0) && (iVar4 = FUN_664be4b0(iVar4), iVar4 != 0)) &&
     (piVar6 = (int *)FUN_664be280(iVar4), piVar6 != (int *)0x0)) {
    local_10 = (byte *)*piVar6;
  }
  iVar4 = FUN_664bd670(piVar8,s_MulticastPort_664e25f4);
  piVar6 = local_14;
  if (((iVar4 != 0) && (iVar4 = FUN_664be4b0(iVar4), piVar6 = local_14, iVar4 != 0)) &&
     (puVar7 = (undefined4 *)FUN_664be280(iVar4), piVar6 = local_14, puVar7 != (undefined4 *)0x0)) {
    piVar6 = (int *)*puVar7;
  }
  iVar4 = FUN_664bd670(piVar8,s_MulticastSourcePort_664e25e0);
  piVar8 = local_8;
  if (((iVar4 != 0) && (iVar4 = FUN_664be4b0(iVar4), piVar8 = local_8, iVar4 != 0)) &&
     (puVar7 = (undefined4 *)FUN_664be280(iVar4), piVar8 = local_8, puVar7 != (undefined4 *)0x0)) {
    piVar8 = (int *)*puVar7;
  }
  if (((local_10 != (byte *)0x0) && (piVar6 != (int *)0x0)) && (piVar8 != (int *)0x0)) {
    uVar9 = atoi((char *)piVar6);
    puVar7 = FUN_664bbe00(*(void **)((int)local_c + 0x132),0);
    pvVar2 = local_c;
    uVar13 = uVar9 & 0xffff;
    puVar10 = FUN_664bbe00(*(void **)((int)local_c + 0x13a),uVar13);
    *puVar10 = *puVar7;
    local_14 = (int *)0x0;
    param_1 = (int *)0x0;
    local_8 = (int *)0x0;
    puVar7 = *(undefined4 **)((int)pvVar2 + 4);
    iVar4 = (**(code **)*puVar7)(puVar7,&DAT_664dc710,&local_14);
    if (iVar4 != 0) {
      return 0x8007000e;
    }
    iVar4 = (**(code **)(*local_14 + 0x10))(local_14,&param_1);
    if (iVar4 != 0) {
      return 0x80004005;
    }
    this_00 = operator_new(0x12);
    if (this_00 == (void *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_6648a900(this_00,pvVar2,(short)uVar9);
    }
    if (piVar6 == (int *)0x0) {
      return 0x8007000e;
    }
    (**(code **)(*piVar6 + 4))(piVar6);
    FUN_664baab0((void *)((int)local_c + 0x11e),piVar6);
    (**(code **)(*param_1 + 0xc))(param_1,0,uVar9,piVar6);
    iVar4 = (**(code **)*param_1)(param_1,&DAT_664dc7e0,&local_8);
    if (iVar4 == 0) {
      (**(code **)(*local_8 + 0xc))(local_8,0,1);
      (**(code **)(*local_8 + 0xc))(local_8,1,1);
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
    }
    (**(code **)(*param_1 + 0x10))(param_1,0,uVar9);
    (**(code **)(*param_1 + 0x14))(param_1,0x1000);
    puVar7 = FUN_664bbe00(*(void **)((int)local_c + 0x13a),uVar13);
    iVar4 = *(int *)*puVar7;
    piVar6 = param_1;
    uVar9 = FUN_664d0320(local_10);
    iVar11 = FUN_664d0260(uVar9);
    (**(code **)(iVar4 + 0x54))(iVar11,uVar13,piVar6);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  uVar5 = (**(code **)(**(int **)((int)local_c + 0x68) + 0x38))(*(int **)((int)local_c + 0x68),0);
  return uVar5;
}


