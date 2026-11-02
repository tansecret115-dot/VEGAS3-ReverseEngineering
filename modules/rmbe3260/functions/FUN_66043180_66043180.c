/* Module: rmbe3260.dll
   Function: FUN_66043180
   Address: 66043180
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66043180(void *this,uint *param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 local_48 [14];
  int local_3a;
  int local_28;
  byte local_24;
  uint local_20;
  uint *local_1c;
  uint local_18;
  undefined4 *local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  FUN_660434c0(local_48);
  local_1c = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_8 = CONCAT31(local_8._1_3_,(char)param_1[5]);
  if ((char)param_1[5] == '\x01') {
    iVar2 = FUN_660439a0(local_48,0,1);
    local_8 = CONCAT31(local_8._1_3_,(char)(*param_1 / (uint)(*(int *)((int)this + 0x14) - iVar2)));
    iVar2 = FUN_660439a0(local_48,0,1);
    if (*param_1 % (uint)(*(int *)((int)this + 0x14) - iVar2) != 0) {
      local_8 = CONCAT31(local_8._1_3_,(byte)local_8 + '\x01');
    }
    local_10 = param_1;
    local_18 = local_8 & 0xff;
    puVar3 = operator_new(local_18 * 8 + 0x18);
    puVar9 = puVar3;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = *param_1;
      param_1 = param_1 + 1;
      puVar9 = puVar9 + 1;
    }
    uVar10 = *puVar3;
    puVar3[7] = 0;
    puVar3[6] = 1;
    iVar2 = FUN_660439a0(local_48,0,1);
    uVar10 = uVar10 + (iVar2 - *(int *)((int)this + 0x14));
    param_1 = puVar3;
    if (1 < (byte)local_8) {
      local_18 = local_18 - 1;
      puVar3 = puVar3 + 9;
      do {
        iVar2 = FUN_660439a0(local_48,0,1);
        *puVar3 = (puVar3[-2] + *(int *)((int)this + 0x14)) - iVar2;
        puVar3[-1] = 1;
        iVar2 = FUN_660439a0(local_48,0,1);
        uVar7 = uVar10;
        if ((uint)(*(int *)((int)this + 0x14) - iVar2) < uVar10) {
          iVar2 = FUN_660439a0(local_48,0,1);
          uVar7 = *(int *)((int)this + 0x14) - iVar2;
        }
        uVar10 = uVar10 - uVar7;
        puVar3 = puVar3 + 2;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  local_18 = *param_1;
  local_14 = (undefined4 *)param_1[1];
  local_28 = (local_8 & 0xff) - 1;
  local_c = local_c & 0xffffff00;
  if (0 < local_28) {
    do {
      if (local_1c != (uint *)0x0) goto LAB_66043497;
      uVar7 = local_c & 0xff;
      local_24 = (char)local_c + 1;
      local_1c = param_1 + uVar7 * 2 + 7;
      local_20 = uVar7;
      FUN_660434f0(local_48,local_24,(char)local_8,*(undefined1 *)((int)this + 0x26),*param_1,
                   *local_1c,(uint)(local_10 != (uint *)0x0));
      uVar10 = FUN_66043610(local_48,*(char **)((int)this + 0x1c));
      puVar5 = (undefined4 *)(*(int *)((int)this + 0x1c) + (uVar10 & 0xffff));
      *(undefined4 **)((int)this + 0x1c) = puVar5;
      uVar6 = param_1[uVar7 * 2 + 9] - *local_1c;
      *(uint *)((int)this + 0x18) = uVar6;
      puVar8 = local_14;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar5 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      local_14 = (undefined4 *)((int)local_14 + *(int *)((int)this + 0x18));
      local_18 = local_18 - *(ushort *)((int)this + 0x18);
      **(int **)((int)this + 0xc) =
           **(int **)((int)this + 0xc) + (uVar10 & 0xffff) + *(int *)((int)this + 0x18);
      local_1c = (uint *)FUN_66042c40((int)this);
      if (local_1c == (uint *)0x0) {
        FUN_66042c90(this,(int *)param_1,local_20 + 2);
      }
      local_c = CONCAT31(local_c._1_3_,local_24);
    } while ((int)(uint)local_24 < local_28);
  }
  if (local_1c == (uint *)0x0) {
    iVar2 = FUN_66043a50(local_48);
    iVar4 = FUN_660439a0(local_48,0,1);
    uVar10 = local_18;
    cVar1 = *(char *)((int)this + 0x26);
    *(char *)((int)this + 0x26) = cVar1 + '\x01';
    local_28 = iVar2;
    if (iVar4 + local_18 + iVar2 < *(uint *)((int)this + 0x18)) {
      FUN_66043540(local_48,(char)local_c + '\x01',(char)local_8,cVar1,*param_1,local_18,
                   (uint)(local_10 != (uint *)0x0));
    }
    else {
      FUN_660434f0(local_48,(char)local_c + '\x01',(char)local_8,cVar1,*param_1,
                   param_1[(local_c & 0xff) * 2 + 7],(uint)(local_10 != (uint *)0x0));
    }
    uVar7 = FUN_66043610(local_48,*(char **)((int)this + 0x1c));
    uVar7 = uVar7 & 0xffff;
    puVar5 = (undefined4 *)(*(int *)((int)this + 0x1c) + uVar7);
    uVar6 = uVar10 >> 2;
    *(undefined4 **)((int)this + 0x1c) = puVar5;
    puVar8 = local_14;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(uint *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + local_18;
    **(int **)((int)this + 0xc) = **(int **)((int)this + 0xc) + local_18 + uVar7;
    if (local_3a == 0) {
      *(undefined4 *)((int)this + 0x18) = 0;
    }
    else {
      *(uint *)((int)this + 0x18) = *(int *)((int)this + 0x18) - (local_18 + uVar7);
    }
  }
LAB_66043497:
  if (local_10 != (uint *)0x0) {
    operator_delete(param_1);
  }
  return (int)local_1c;
}


