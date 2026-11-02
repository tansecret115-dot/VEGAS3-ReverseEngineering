/* Module: qt4plug.dll
   Function: FUN_5f517690
   Address: 5f517690
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f517690(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,int *param_5,
                int param_6,uint param_7)

{
  bool bVar1;
  short sVar2;
  undefined3 extraout_var;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined8 uVar11;
  int local_128;
  uint local_11c;
  int local_110;
  uint local_100;
  uint local_f8 [2];
  undefined4 *local_f0;
  int local_e4 [7];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  ushort uStack_be;
  ushort local_bc;
  ushort uStack_ba;
  ushort local_b8;
  undefined2 uStack_b6;
  uint local_b4;
  int iStack_b0;
  undefined4 local_a4;
  undefined4 *local_a0;
  undefined4 local_9c;
  undefined4 *local_94;
  int local_90;
  uint local_8c;
  undefined8 local_88;
  uint local_80;
  int local_7c;
  undefined4 *local_74;
  uint local_70;
  int local_68;
  double local_60;
  int local_58 [2];
  short local_50;
  undefined2 uStack_4e;
  undefined2 local_4c;
  undefined2 uStack_4a;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_28;
  uint local_24;
  uint uStack_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f596440;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffec8;
  ExceptionList = &local_14;
  FUN_5f518320(*(int *)(param_2 + 0x2c),local_e4);
  piVar7 = local_e4;
  piVar9 = local_58;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar9 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar9 = piVar9 + 1;
  }
  FUN_5f5183a0(param_3,local_58);
  uVar10 = 0;
  local_94 = (undefined4 *)FUN_5f57aed0();
  bVar1 = FUN_5f5182c0();
  local_34 = FUN_5f5779b0();
  FUN_5f575c90();
  FUN_5f5127d0(CONCAT22(uStack_4a,local_4c));
  local_a4 = FUN_5f577a50();
  local_68 = 0;
  FUN_5f57eb70();
  FUN_5f57ec50();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    sVar2 = FUN_5f57ec30();
    if (sVar2 == 0) {
      FUN_5f57b130();
      FUN_5f517e40((uint *)*local_94,(int)local_58);
      FUN_5f57ec50();
      FUN_5f57b0d0();
    }
    else {
      FUN_5f57b390();
      local_94 = (undefined4 *)0x0;
    }
  }
  else {
    FUN_5f57b130();
    FUN_5f517e40((uint *)*local_94,(int)local_58);
    FUN_5f57ec50();
    FUN_5f57b0d0();
  }
  FUN_5f57ebb0();
  puVar3 = (undefined4 *)FUN_5f57aed0();
  local_a0 = puVar3;
  FUN_5f57ae90();
  FUN_5f57b130();
  local_9c = *puVar3;
  puVar3 = (undefined4 *)FUN_5f57aed0();
  local_74 = puVar3;
  FUN_5f57ae90();
  FUN_5f57b130();
  local_28 = (undefined4 *)*puVar3;
  FUN_5f57ebd0();
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  uStack_be = 0;
  local_bc = 0;
  uStack_ba = 0;
  local_b8 = 0;
  uStack_b6 = 0;
  sVar2 = FUN_5f57ec30();
  if (sVar2 != 0) {
    FUN_5f57ea70();
  }
  uStack_ba = local_bc * local_50;
  FUN_5f5766b0();
  local_f0 = (undefined4 *)FUN_5f57af10();
  puVar3 = (undefined4 *)*local_f0;
  *puVar3 = 0x34;
  puVar3[1] = local_58[1];
  puVar3[2] = 0;
  *(undefined2 *)(puVar3 + 3) = 0;
  *(undefined2 *)((int)puVar3 + 0xe) = 1;
  *(undefined2 *)(puVar3 + 4) = 1;
  *(undefined2 *)((int)puVar3 + 0x12) = 0;
  puVar3[5] = 0;
  *(short *)(puVar3 + 6) = local_50;
  *(undefined2 *)((int)puVar3 + 0x1a) = uStack_4e;
  *(undefined2 *)(puVar3 + 7) = 0;
  *(undefined2 *)((int)puVar3 + 0x1e) = 0;
  puVar3[8] = CONCAT22(uStack_4a,local_4c);
  puVar3[9] = (uint)uStack_be;
  puVar3[10] = (uint)local_bc;
  puVar3[0xb] = (uint)uStack_ba;
  puVar3[0xc] = (uint)local_b8;
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_5f5789f0();
  }
  local_90 = (**(code **)(**(int **)(param_2 + 4) + 0x2c))(*(int **)(param_2 + 4),&local_24);
  uVar6 = local_24;
  local_60 = 1.0;
  local_88 = __alldiv(local_24,uStack_20,(uint)uStack_be,0);
  local_88 = local_88 + 1;
  local_80 = 0;
  local_7c = 0;
  if (uVar6 != 0 || uStack_20 != 0) {
    local_60 = (double)param_6 / (double)CONCAT44(uStack_20,local_24);
  }
  _fpreset();
  iVar5 = 0;
  while( true ) {
    do {
      if (((int)uStack_20 < iVar5) || (((int)uStack_20 <= iVar5 && (local_24 <= uVar10))))
      goto LAB_5f517bb4;
      iVar4 = (uStack_20 - iVar5) - (uint)(local_24 < uVar10);
      if ((iVar4 < 1) && ((iVar4 < 0 || (local_24 - uVar10 < local_70)))) {
        local_70 = local_24 - uVar10;
      }
      local_f8[0] = 0;
      local_90 = (**(code **)(**(int **)(param_2 + 4) + 0x3c))
                           (*(int **)(param_2 + 4),uVar10,iVar5,local_28,local_70,local_f8);
      if ((local_90 == 1) && (local_f8[0] == 0)) goto LAB_5f517bb4;
      if (-1 < local_90) {
        local_8 = 0;
        local_30 = FUN_5f57ebf0();
        if (((short)local_30 == 0) && (local_100 != 0)) {
          local_30 = FUN_5f5767b0();
          bVar1 = CARRY4(local_80,local_100);
          local_80 = local_80 + local_100;
          local_7c = local_7c + (uint)bVar1;
        }
        local_8 = 0xffffffff;
      }
      bVar1 = CARRY4(uVar10,local_f8[0]);
      uVar10 = uVar10 + local_f8[0];
      iStack_b0 = iVar5 + (uint)bVar1;
      iVar5 = iStack_b0;
      local_b4 = uVar10;
    } while (param_5 == (int *)0x0);
    iVar5 = *param_5;
    uVar11 = ftol();
    iVar5 = (**(code **)(iVar5 + 0x18))
                      (param_5,(uint)uVar11 + param_7,
                       (int)((ulonglong)uVar11 >> 0x20) + ((int)param_7 >> 0x1f) +
                       (uint)CARRY4((uint)uVar11,param_7));
    if (iVar5 != 0) break;
    local_90 = 0;
    iVar5 = iStack_b0;
  }
  local_90 = -0x80;
LAB_5f517bb4:
  if ((local_24 == 0 && uStack_20 == 0) || (local_58[1] != 0x51444d32)) {
    puVar3 = local_a0;
    if ((local_24 != 0 || uStack_20 != 0) && (FUN_5f57ec10(), puVar3 = local_a0, local_128 != 0)) {
      FUN_5f5767b0();
    }
  }
  else {
    uVar10 = FUN_5f5127d0(CONCAT22(uStack_4a,local_4c));
    uVar8 = 0;
    local_110 = 0;
    puVar3 = local_28;
    for (uVar6 = local_8c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (local_8c = local_8c & 3; local_8c != 0; local_8c = local_8c - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    for (; (puVar3 = local_a0, local_7c <= local_88._4_4_ &&
           ((((local_7c < local_88._4_4_ || (local_80 < (uint)local_88)) &&
             (local_110 <= (int)uVar10 >> 0x1f)) &&
            ((local_110 < (int)uVar10 >> 0x1f || (uVar8 < uVar10)))))); uVar8 = uVar8 + local_70) {
      local_8 = 1;
      local_30 = FUN_5f57ebf0();
      if (((short)local_30 == 0) && (local_11c != 0)) {
        local_30 = FUN_5f5767b0();
        bVar1 = CARRY4(local_80,local_11c);
        local_80 = local_80 + local_11c;
        local_7c = local_7c + (uint)bVar1;
      }
      local_8 = 0xffffffff;
      local_110 = local_110 + (uint)CARRY4(uVar8,local_70);
    }
  }
  if (local_74 != (undefined4 *)0x0) {
    FUN_5f57b0d0();
    FUN_5f57b390();
  }
  if (puVar3 != (undefined4 *)0x0) {
    FUN_5f57b0d0();
    FUN_5f57b390();
  }
  if (local_68 != 0) {
    FUN_5f57eb90();
  }
  FUN_5f5766d0();
  FUN_5f5765b0();
  FUN_5f577970();
  if (local_94 != (undefined4 *)0x0) {
    FUN_5f57b390();
  }
  ExceptionList = local_14;
  return local_90;
}


