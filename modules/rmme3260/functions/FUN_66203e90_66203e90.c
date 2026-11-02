/* Module: rmme3260.dll
   Function: FUN_66203e90
   Address: 66203e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66203e90(void *this,undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  ushort uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined4 **ppuVar15;
  uint *puVar16;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  int local_24;
  undefined4 *local_20;
  uint local_1c;
  void *local_18;
  uint local_14;
  uint local_10;
  undefined4 *local_c;
  int local_8;
  
  puVar6 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return -0x7ff8ffa9;
  }
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_2c = 0;
  local_10 = 0;
  local_30 = 0;
  local_14 = 0;
  local_18 = (void *)0x0;
  local_c = (undefined4 *)0x0;
  if (this == (void *)0xfffffff0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 0x20);
  }
  if (this == (void *)0xffffffdc) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)((int)this + 0x34);
  }
  local_28 = this;
  if (iVar10 + iVar5 == 1) {
    param_1 = *(undefined4 **)((int)this + 0x14);
    puVar11 = &local_2c;
    puVar16 = &local_1c;
    ppuVar15 = &local_20;
    puVar4 = (undefined4 *)FUN_66250bf0((int *)&param_1);
    iVar5 = FUN_66206470((void *)*puVar4,ppuVar15,puVar16,puVar11);
    for (uVar9 = local_1c >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = *local_20;
      local_20 = local_20 + 1;
      puVar6 = puVar6 + 1;
    }
    for (local_1c = local_1c & 3; local_1c != 0; local_1c = local_1c - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)local_20;
      local_20 = (undefined4 *)((int)local_20 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    return iVar5;
  }
  puVar6 = operator_new(0xc);
  if (puVar6 == (undefined4 *)0x0) {
    local_8 = -0x7ff8fff2;
  }
  else {
    *puVar6 = 0x4d4c5449;
    *(undefined2 *)(puVar6 + 1) = *(undefined2 *)((int)this + 0x4c);
    pvVar7 = operator_new((uint)*(ushort *)((int)this + 0x4c) << 1);
    *(void **)((int)puVar6 + 6) = pvVar7;
    if (pvVar7 == (void *)0x0) {
      local_8 = -0x7ff8fff2;
    }
    else {
      if (this == (void *)0xffffffdc) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 0x34);
      }
      if (iVar5 < 1) {
        local_10 = 0;
      }
      else {
        local_8 = *(int *)((int)this + 0x28);
        local_24 = 0;
        piVar8 = (int *)FUN_66250bf0(&local_8);
        if (*piVar8 != 0) {
          sVar1 = FUN_662182a0(*piVar8);
          local_8 = *(int *)((int)this + 0x14);
          do {
            if (local_8 == 0) goto LAB_66203fe4;
            piVar8 = (int *)FUN_66250bf0(&local_8);
            sVar2 = FUN_662182a0(*piVar8);
          } while (sVar1 != sVar2);
          local_24 = 1;
LAB_66203fe4:
          if (local_24 == 0) {
            if (this == (void *)0xffffffdc) {
              local_10 = 0;
            }
            else {
              local_10 = *(uint *)((int)this + 0x34);
            }
          }
          else {
            local_10 = 0;
          }
        }
      }
      if (this == (void *)0xfffffff0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 0x20);
      }
      uVar9 = iVar5 + local_10;
      *(ushort *)((int)puVar6 + 10) = (ushort)uVar9;
      local_10 = uVar9;
      local_8 = FUN_66203d20(this,&local_30,(int *)&local_14);
      if (-1 < local_8) {
        local_c = operator_new(local_14);
        local_18 = operator_new((uVar9 & 0xffff) << 1);
        if ((local_c == (undefined4 *)0x0) || (local_18 == (void *)0x0)) {
          local_8 = -0x7ff8fff2;
          goto LAB_6620417d;
        }
        local_8 = FUN_662041d0(this,&local_c,local_14,(int)local_18,(ushort)uVar9);
        if (local_8 < 0) goto LAB_6620417d;
      }
      uVar12 = 0;
      if ((-1 < local_8) && (local_24 = 0, *(short *)((int)this + 0x4c) != 0)) {
        do {
          local_8 = FUN_66203c20(this,uVar12,(undefined2 *)&local_24);
          if (local_8 < 0) goto LAB_6620417d;
          uVar3 = 0;
          if ((ushort)local_10 != 0) {
            do {
              this = local_28;
              if (*(short *)((int)local_18 + (uint)uVar3 * 2) == (short)local_24) break;
              uVar3 = uVar3 + 1;
            } while (uVar3 < (ushort)local_10);
          }
          uVar9 = (uint)uVar12;
          uVar12 = uVar12 + 1;
          *(ushort *)(*(int *)((int)puVar6 + 6) + uVar9 * 2) = uVar3;
        } while (uVar12 < *(ushort *)((int)this + 0x4c));
      }
      *(char *)param_1 = (char)((uint)*puVar6 >> 0x18);
      *(char *)((int)param_1 + 1) = (char)((uint)*puVar6 >> 0x10);
      *(char *)((int)param_1 + 2) = (char)((uint)*puVar6 >> 8);
      *(undefined1 *)((int)param_1 + 3) = *(undefined1 *)puVar6;
      iVar5 = 0;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)((int)puVar6 + 5);
      *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)(puVar6 + 1);
      puVar13 = (undefined1 *)((int)param_1 + 6);
      puVar14 = puVar13;
      if (*(short *)(puVar6 + 1) != 0) {
        do {
          *puVar14 = *(undefined1 *)(*(int *)((int)puVar6 + 6) + 1 + iVar5 * 2);
          puVar13 = puVar14 + 2;
          puVar14[1] = *(undefined1 *)(*(int *)((int)puVar6 + 6) + iVar5 * 2);
          iVar5 = iVar5 + 1;
          puVar14 = puVar13;
        } while (iVar5 < (int)(uint)*(ushort *)(puVar6 + 1));
      }
      *puVar13 = *(undefined1 *)((int)puVar6 + 0xb);
      uVar9 = local_14 >> 2;
      puVar13[1] = *(undefined1 *)((int)puVar6 + 10);
      puVar11 = local_c;
      puVar4 = (undefined4 *)(puVar13 + 2);
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar4 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar9 = local_14 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
  }
LAB_6620417d:
  if (local_c != (undefined4 *)0x0) {
    operator_delete(local_c);
    local_c = (undefined4 *)0x0;
  }
  if (local_18 != (void *)0x0) {
    operator_delete(local_18);
  }
  if (*(void **)((int)puVar6 + 6) != (void *)0x0) {
    operator_delete(*(void **)((int)puVar6 + 6));
    *(undefined4 *)((int)puVar6 + 6) = 0;
  }
  if (puVar6 != (undefined4 *)0x0) {
    operator_delete(puVar6);
  }
  return local_8;
}


