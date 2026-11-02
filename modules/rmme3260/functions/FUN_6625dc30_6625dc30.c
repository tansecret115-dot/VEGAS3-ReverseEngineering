/* Module: rmme3260.dll
   Function: FUN_6625dc30
   Address: 6625dc30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6625dc30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 extraout_var;
  int iVar8;
  short sVar9;
  undefined4 local_18;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  iVar8 = 0;
  (**(code **)(*(int *)param_1[0x11] + 4))();
  if (*(short *)((int)param_1 + 0x3a) == 1) {
    puVar1 = (undefined4 *)param_1[0x20];
    iVar7 = puVar1[3];
    iVar2 = puVar1[2];
    if (iVar7 - iVar2 < 0) {
      uVar5 = (uint)*(ushort *)(puVar1 + 5);
    }
    else {
      uVar5 = 0;
    }
    uVar4 = (**(code **)*puVar1)();
    uVar3 = (ulonglong)((iVar7 - iVar2) + uVar5 & 0xffff) / (ulonglong)(longlong)(int)(uint)uVar4;
    uVar5 = (uint)uVar3;
    sVar9 = (short)uVar3;
    if (sVar9 != 0) {
      (**(code **)(*(int *)param_1[0x20] + 0xc))(param_1[0x22],uVar5);
      local_8 = uVar5;
      iVar8 = (**(code **)(**(int **)((int)param_1 + 0x36) + 0x38))(param_1[0x22],&local_8);
      if (((iVar8 == -0x7ffbffb2) || (iVar8 == -0x7ffbffac)) || (iVar8 == 0)) {
        if ((short)local_8 != sVar9) {
          (**(code **)(*(int *)param_1[0x20] + 0x10))
                    ((local_8 & 0xffff) + param_1[0x22],uVar5 - local_8);
        }
        iVar8 = 0;
      }
    }
    if ((param_1[0x28] == 0) && (param_1[0x2b] == 0)) {
      puVar1 = (undefined4 *)param_1[0x20];
      iVar7 = puVar1[3];
      local_8 = CONCAT22(local_8._2_2_,*(undefined2 *)(puVar1 + 6));
      iVar2 = puVar1[2];
      if (iVar7 - iVar2 < 0) {
        uVar5 = (uint)*(ushort *)(puVar1 + 5);
      }
      else {
        uVar5 = 0;
      }
      uVar4 = (**(code **)*puVar1)();
      if ((short)((ulonglong)((local_8 - ((iVar7 - iVar2) + uVar5)) - 1 & 0xffff) /
                 (ulonglong)(longlong)(int)(uint)uVar4) != 0) {
        local_10 = 0;
        local_c = 0;
        param_1[0x2b] = 1;
        local_18 = 0x468;
        local_14 = param_1;
        (**(code **)(*(int *)param_1[0x10] + 0x24))(&local_18,param_1[0x26]);
      }
    }
  }
  else {
    while( true ) {
      if (param_1 == (int *)0xffffff94) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_1[0x1f];
      }
      if (iVar7 < 1) break;
      puVar1 = *(undefined4 **)(param_1[0x1c] + 8);
      local_8 = (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1);
      iVar8 = **(int **)((int)param_1 + 0x36);
      uVar6 = (**(code **)(*(int *)*puVar1 + 0x1c))
                        ((int *)*puVar1,&local_8,puVar1[1],
                         CONCAT22(extraout_var,*(undefined2 *)(puVar1 + 2)));
      iVar8 = (**(code **)(iVar8 + 0x3c))(uVar6);
      if (iVar8 != 0) break;
      (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
      operator_delete(puVar1);
      FUN_66250ae0(param_1 + 0x1b);
    }
    if ((param_1[0x28] == 0) && (param_1[0x2b] == 0)) {
      if (param_1 == (int *)0xffffff94) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_1[0x1f];
      }
      if (iVar7 == 0) {
        local_10 = 0;
        local_c = 0;
        param_1[0x2b] = 1;
        local_18 = 0x468;
        local_14 = param_1;
        (**(code **)(*(int *)param_1[0x10] + 0x24))(&local_18,param_1[0x26]);
      }
    }
  }
  if ((param_1[3] == 0) && (iVar8 != 0)) {
    iVar8 = FUN_6625dfb0(iVar8);
    param_1[3] = iVar8;
  }
  if ((param_1[3] == 0) && (param_1[0x24] == 0)) {
    if (*(short *)((int)param_1 + 0x3a) == 1) {
      puVar1 = (undefined4 *)param_1[0x20];
      iVar8 = puVar1[3];
      iVar7 = puVar1[2];
      if (iVar8 - iVar7 < 0) {
        uVar5 = (uint)*(ushort *)(puVar1 + 5);
      }
      else {
        uVar5 = 0;
      }
      uVar4 = (**(code **)*puVar1)();
      if ((short)((ulonglong)((iVar8 - iVar7) + uVar5 & 0xffff) /
                 (ulonglong)(longlong)(int)(uint)uVar4) == 0) goto LAB_6625deac;
LAB_6625dec4:
      FUN_6625e090((int)param_1);
    }
    else {
LAB_6625deac:
      if (*(short *)((int)param_1 + 0x3a) == 2) {
        if (param_1 == (int *)0xffffff94) {
          iVar8 = 0;
        }
        else {
          iVar8 = param_1[0x1f];
        }
        if (0 < iVar8) goto LAB_6625dec4;
      }
    }
  }
  (**(code **)(*(int *)param_1[0x11] + 8))();
  if (param_1[0x2c] == 0) goto LAB_6625df45;
  if (*(short *)((int)param_1 + 0x3a) == 1) {
    puVar1 = (undefined4 *)param_1[0x20];
    iVar8 = puVar1[3];
    iVar7 = puVar1[2];
    if (iVar8 - iVar7 < 0) {
      uVar5 = (uint)*(ushort *)(puVar1 + 5);
    }
    else {
      uVar5 = 0;
    }
    uVar4 = (**(code **)*puVar1)();
    if ((short)((ulonglong)((iVar8 - iVar7) + uVar5 & 0xffff) /
               (ulonglong)(longlong)(int)(uint)uVar4) != 0) goto LAB_6625df1c;
  }
  else {
LAB_6625df1c:
    if (*(short *)((int)param_1 + 0x3a) != 2) goto LAB_6625df45;
    if (param_1 == (int *)0xffffff94) {
      iVar8 = 0;
    }
    else {
      iVar8 = param_1[0x1f];
    }
    if (iVar8 != 0) goto LAB_6625df45;
  }
  param_1[0x2c] = 0;
  (**(code **)(*param_1 + 0x20))();
LAB_6625df45:
  if ((param_1[0x28] != 0) && (param_1[0x2c] == 0)) {
    param_1[0x23] = 0;
    FUN_6625c910((int)param_1);
  }
  return;
}


