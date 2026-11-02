/* Module: rv203260.dll
   Function: FUN_638a1760
   Address: 638a1760
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638a1760(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint local_18;
  int local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x2d2) == 0) {
    uVar12 = param_3;
    if (param_1 < param_3) {
      uVar12 = param_1;
    }
    uVar8 = param_4;
    if (param_2 < param_4) {
      uVar8 = param_2;
    }
    uVar5 = uVar8 * uVar12;
    bVar4 = false;
    bVar3 = 0x32000 < uVar5;
    uVar10 = 0;
    local_18 = 0;
    if (0x7800 < uVar5) {
      puVar11 = (uint *)((int)this + 0x2f6);
      uVar9 = uVar8;
      uVar13 = uVar12;
      do {
        if (bVar3) {
          uVar13 = uVar13 >> 1 & 0x7ffffffc;
          bVar3 = false;
          puVar11[-8] = uVar13;
          bVar4 = true;
          *puVar11 = uVar9;
        }
        else if (bVar4) {
          uVar9 = uVar9 >> 1 & 0x7ffffffc;
          puVar11[-8] = uVar13;
          bVar4 = false;
          *puVar11 = uVar9;
        }
        else {
          uVar13 = ftol();
          uVar9 = ftol();
          puVar11[-8] = uVar13 + 0xf & 0xfffffff0;
          *puVar11 = uVar9 + 0xf & 0xfffffff0;
        }
        uVar1 = puVar11[-8];
        uVar2 = *puVar11;
        pvVar6 = malloc(uVar1 * uVar2 * 3 >> 1);
        puVar11[8] = (uint)pvVar6;
        if (pvVar6 == (void *)0x0) {
          local_8 = -0x7fffbffb;
        }
        uVar10 = local_18 + 1;
        puVar11 = puVar11 + 1;
        local_18 = uVar10;
      } while (0x7800 < uVar1 * uVar2);
    }
    *(uint *)((int)this + 0x2d2) = uVar10;
    if ((param_1 == param_3) && (param_2 == param_4)) {
      if (uVar10 == 0) {
        *(uint *)((int)this + 0x2d6) = param_1;
        *(uint *)((int)this + *(int *)((int)this + 0x2d2) * 4 + 0x2f6) = param_2;
        *(int *)((int)this + 0x2d2) = *(int *)((int)this + 0x2d2) + 1;
        return local_8;
      }
    }
    else {
      if ((uVar10 < 6) && (local_8 == 0)) {
        *(uint *)((int)this + uVar10 * 4 + 0x2d6) = param_1 & 0xfffffffc;
        *(uint *)((int)this + *(int *)((int)this + 0x2d2) * 4 + 0x2f6) = param_2 & 0xfffffffc;
        iVar7 = *(int *)((int)this + 0x2d2) + 1;
        *(int *)((int)this + 0x2d2) = iVar7;
        *(uint *)((int)this + iVar7 * 4 + 0x2d6) = uVar12 & 0xfffffffc;
        *(uint *)((int)this + *(int *)((int)this + 0x2d2) * 4 + 0x2f6) = uVar8 & 0xfffffffc;
        pvVar6 = malloc(uVar5 * 3 >> 1);
        *(void **)((int)this + *(int *)((int)this + 0x2d2) * 4 + 0x316) = pvVar6;
        if (*(int *)((int)this + *(int *)((int)this + 0x2d2) * 4 + 0x316) == 0) {
          local_8 = -0x7fffbffb;
        }
        *(int *)((int)this + 0x2d2) = *(int *)((int)this + 0x2d2) + 1;
        return local_8;
      }
      local_8 = -0x7fffbffb;
    }
  }
  return local_8;
}


