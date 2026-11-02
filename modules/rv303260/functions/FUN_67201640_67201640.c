/* Module: rv303260.dll
   Function: FUN_67201640
   Address: 67201640
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_67201640(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint local_1c;
  int local_c;
  
  local_c = 0;
  if (*(int *)((int)this + 0x2da) == 0) {
    uVar11 = param_3;
    if (param_1 < param_3) {
      uVar11 = param_1;
    }
    uVar8 = param_4;
    if (param_2 < param_4) {
      uVar8 = param_2;
    }
    uVar5 = uVar8 * uVar11;
    bVar4 = false;
    bVar3 = *(uint *)((int)this + 0x36e) <= uVar5 && uVar5 - *(uint *)((int)this + 0x36e) != 0;
    uVar7 = 0;
    local_1c = 0;
    if (0x7800 < uVar5) {
      puVar10 = (uint *)((int)this + 0x2de);
      uVar9 = uVar8;
      uVar12 = uVar11;
      do {
        if (bVar3) {
          uVar12 = uVar12 >> 1 & 0x7ffffffc;
          bVar3 = false;
          *puVar10 = uVar12;
          bVar4 = true;
          puVar10[8] = uVar9;
        }
        else if (bVar4) {
          uVar9 = uVar9 >> 1 & 0x7ffffffc;
          *puVar10 = uVar12;
          bVar4 = false;
          puVar10[8] = uVar9;
        }
        else {
          uVar12 = ftol();
          uVar9 = ftol();
          *puVar10 = uVar12 + 0xf & 0xfffffff0;
          puVar10[8] = uVar9 + 0xf & 0xfffffff0;
        }
        uVar1 = puVar10[8];
        uVar2 = *puVar10;
        pvVar6 = malloc(uVar1 * uVar2 * 3 >> 1);
        puVar10[0x10] = (uint)pvVar6;
        if (pvVar6 == (void *)0x0) {
          local_c = -0x7fffbffb;
        }
        uVar7 = local_1c + 1;
        puVar10 = puVar10 + 1;
        local_1c = uVar7;
      } while (0x7800 < uVar1 * uVar2);
    }
    *(uint *)((int)this + 0x2da) = uVar7;
    if ((param_1 != param_3) || (param_2 != param_4)) {
      if ((uVar7 < 6) && (local_c == 0)) {
        *(uint *)((int)this + uVar7 * 4 + 0x2de) = uVar11 & 0xfffffffc;
        *(uint *)((int)this + *(int *)((int)this + 0x2da) * 4 + 0x2fe) = uVar8 & 0xfffffffc;
        pvVar6 = malloc(uVar5 * 3 >> 1);
        *(void **)((int)this + *(int *)((int)this + 0x2da) * 4 + 0x31e) = pvVar6;
        if (*(int *)((int)this + *(int *)((int)this + 0x2da) * 4 + 0x31e) == 0) {
          local_c = -0x7fffbffb;
        }
        *(int *)((int)this + 0x2da) = *(int *)((int)this + 0x2da) + 1;
      }
      else {
        local_c = -0x7fffbffb;
      }
    }
    if (*(int *)((int)this + 0x2da) == 0) {
      *(uint *)((int)this + 0x2de) = uVar11 & 0xfffffffc;
      *(uint *)((int)this + *(int *)((int)this + 0x2da) * 4 + 0x2fe) = uVar8 & 0xfffffffc;
      *(int *)((int)this + 0x2da) = *(int *)((int)this + 0x2da) + 1;
    }
  }
  return local_c;
}


