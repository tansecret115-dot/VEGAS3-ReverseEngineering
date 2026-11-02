/* Module: 14_43260.dll
   Function: FUN_10002fb0
   Address: 10002fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_10002fb0(void *this,undefined4 *param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float *local_18;
  short local_14;
  float *local_10;
  ushort local_c;
  short local_8;
  
  iVar2 = *(int *)((int)this + 0x12ca);
  if (iVar2 == 8000) {
    uVar3 = *(uint *)((int)this + 0x12ce);
    puVar5 = (undefined4 *)(*(int *)((int)this + 0x12d6) + (short)DAT_10012110 * 2);
    for (uVar1 = (uVar3 & 0x7fffffff) >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *param_1;
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar2 = (uVar3 & 1) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_100031e0((float *)&DAT_10012120,DAT_10012110,*(short *)((int)this + 0x12ce),
                 (short *)(*(int *)((int)this + 0x12d6) + (short)DAT_10012110 * 2),param_2);
    puVar6 = *(undefined4 **)((int)this + 0x12d6);
    uVar3 = (int)(short)DAT_10012110 << 1;
    puVar5 = (undefined4 *)((int)puVar6 + *(int *)((int)this + 0x12ce) * 2);
    goto LAB_100031b8;
  }
  if (iVar2 == 0x2b11) {
LAB_1000305a:
    local_10 = (float *)&DAT_10012160;
    local_c = (ushort)DAT_10012114;
    local_18 = (float *)&DAT_10012430;
    local_8 = (short)DAT_1001242c;
    local_14 = 8;
  }
  else {
    if ((iVar2 != 0x5622) && (iVar2 != 0xac44)) {
      return 0;
    }
    if (iVar2 == 0x2b11) goto LAB_1000305a;
    if (iVar2 == 0x5622) {
      local_10 = (float *)&DAT_100121c8;
      local_c = (ushort)DAT_10012118;
      local_18 = (float *)&DAT_10012538;
      local_8 = (short)DAT_10012534;
      local_14 = 4;
    }
    else {
      local_10 = (float *)&DAT_10012298;
      local_c = (ushort)DAT_1001211c;
      local_18 = (float *)&DAT_100125c0;
      local_8 = (short)DAT_100125bc;
      local_14 = 2;
    }
  }
  uVar3 = *(uint *)((int)this + 0x12ce);
  uVar1 = (short)local_c * 2;
  puVar5 = (undefined4 *)(uVar1 + *(int *)((int)this + 0x12d6));
  for (uVar4 = (uVar3 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  for (iVar2 = (uVar3 & 1) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar5 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  FUN_100031e0(local_10,local_c,*(short *)((int)this + 0x12ce),
               (short *)(uVar1 + *(int *)((int)this + 0x12d6)),*(float **)((int)this + 0x12da));
  puVar5 = (undefined4 *)
           ((int)*(undefined4 **)((int)this + 0x12d6) + *(int *)((int)this + 0x12ce) * 2);
  puVar6 = *(undefined4 **)((int)this + 0x12d6);
  for (uVar3 = ((int)(short)local_c & 0x7fffffffU) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  uVar3 = local_8 * 4;
  FUN_100032f0(*(undefined4 **)((int)this + 0x12da),
               (undefined4 *)(uVar3 + *(int *)((int)this + 0x12de)),local_14,
               *(short *)((int)this + 0x12ce));
  FUN_10003290(local_18,local_8,local_14 * *(short *)((int)this + 0x12ce),
               uVar3 + *(int *)((int)this + 0x12de),param_2,0xb);
  puVar6 = *(undefined4 **)((int)this + 0x12de);
  puVar5 = puVar6 + (int)local_14 * *(int *)((int)this + 0x12ce);
LAB_100031b8:
  for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  return 0;
}


