/* Module: erv23260.dll
   Function: FUN_6380bd80
   Address: 6380bd80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_6380bd80(void *this,uint param_1,float param_2,float param_3,uint param_4,undefined4 param_5,
            char param_6)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  bool bVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  float fVar13;
  float10 fVar14;
  float10 fVar15;
  float local_c;
  
  fVar2 = param_3;
  iVar10 = *(int *)((int)this + 0x5ec);
  if ((iVar10 == 0) || (iVar10 == 4)) {
    bVar5 = true;
    bVar3 = true;
  }
  else {
    bVar3 = false;
    bVar5 = false;
  }
  if (bVar3) {
    iVar8 = (int)this + 0x360;
    piVar6 = (int *)((int)this + 0x28);
  }
  else {
    iVar8 = (int)this + 0x100;
    piVar6 = (int *)((int)this + 0xc);
  }
  if ((((*piVar6 == 2) ||
       ((((bVar3 && (*piVar6 == 3)) || (piVar6 = (int *)(iVar8 + 0x18), *(int *)(iVar8 + 0x18) == 0)
         ) || ((param_3 == 0.0 && (*(int *)((int)this + 0x74) == 0)))))) ||
      (-1 < *(int *)((int)this + 0x10c))) || ((iVar10 == 3 && (*(int *)((int)this + 0x54) == 2)))) {
    uVar7 = *(uint *)((int)this + 0x750);
  }
  else {
    fVar4 = ((float)*(int *)(iVar8 + 4) - (float)(int)param_2) * _DAT_6382e324;
    param_2 = _DAT_6382e334;
    fVar9 = *(float *)((int)this + 0x6dc);
    param_3 = _DAT_6382e334;
    local_c = _DAT_6382e334;
    if ((uint)fVar2 < (uint)fVar9) {
      piVar1 = (int *)(iVar8 + 0x18 + (int)fVar2 * 4);
      piVar12 = piVar1;
      fVar13 = fVar2;
      do {
        fVar14 = FUN_6380bad0((uint)fVar13,(uint)fVar9);
        if ((*piVar1 == 0) && (fVar2 != 0.0)) {
          iVar10 = *(int *)(iVar8 + 0x14 + (int)fVar2 * 4);
        }
        else {
          iVar10 = *piVar12;
        }
        fVar15 = (float10)(iVar10 - 1);
        local_c = (float)((float10)local_c + fVar15);
        fVar13 = (float)((int)fVar13 + 1);
        param_3 = (float)(fVar14 * fVar15 + (float10)param_3);
        fVar9 = *(float *)((int)this + 0x6dc);
        piVar12 = piVar12 + 1;
        param_2 = (float)(fVar14 * fVar14 * fVar15 + (float10)param_2);
      } while ((uint)fVar13 < (uint)fVar9);
    }
    fVar14 = FUN_6380bad0((uint)fVar2,*(uint *)((int)this + 0x6dc));
    if (*(int *)(iVar8 + 0x18 + (int)fVar2 * 4) != 0) {
      fVar15 = (float10)_DAT_6382e334;
      for (fVar9 = fVar2; fVar9 != 0.0; fVar9 = (float)((int)fVar9 + -1)) {
        iVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        fVar15 = fVar15 + (float10)(iVar10 + -1);
      }
      local_c = (float)*(uint *)(iVar8 + 0x25c) - local_c;
      if ((fVar15 != (float10)_DAT_6382e334) && (local_c != _DAT_6382e334)) {
        fVar15 = (float10)_DAT_6382e320 -
                 ((float10)(uint)fVar2 / (float10)*(uint *)((int)this + 0x6dc)) *
                 ((float10)_DAT_6382e320 - fVar15 / (float10)local_c);
        param_3 = (float)((float10)param_3 * fVar15);
        param_2 = (float)((float10)param_2 * fVar15);
      }
    }
    fVar9 = -(*(float *)(iVar8 + 0x10) * param_3);
    fVar2 = -(*(float *)(iVar8 + 0x14) * param_2);
    if ((fVar4 <= _DAT_6382e334) || ((float)fVar14 <= _DAT_6382e334)) {
      uVar7 = param_1 + 6;
    }
    else {
      uVar7 = param_1;
      if ((fVar9 < _DAT_6382e334) && (fVar2 <= _DAT_6382e334)) {
        fVar13 = (float)fVar14 * fVar4;
        fVar2 = (SQRT(fVar9 * fVar9 - fVar2 * fVar4 * _DAT_6382e338) - fVar9) / (fVar13 + fVar13) -
                (float)_DAT_6382e340;
        if (fVar2 < (float)_DAT_6382e348) {
          if ((float)_DAT_6382e350 < fVar2) {
            uVar7 = ftol();
          }
          else {
            uVar7 = 2;
          }
        }
        else {
          uVar7 = 0x1f;
        }
      }
    }
    iVar10 = param_1 + 6;
    if ((iVar10 < (int)uVar7) || (iVar10 = param_1 - 6, (int)uVar7 < iVar10)) {
      uVar7 = FUN_6380baa0(iVar10);
    }
    if (bVar5) {
      uVar11 = 0x10;
      if (0xf < param_4) {
        uVar11 = param_4;
      }
      if ((uVar11 < uVar7) && (uVar7 = 0x10, 0xf < param_4)) {
        uVar7 = param_4;
      }
      if (uVar7 < 3) {
        uVar7 = 3;
      }
    }
    else {
      uVar11 = 0x1f;
      if (*(int *)this == 0) {
        uVar11 = param_4;
      }
      if ((uVar11 < uVar7) && (uVar7 = 0x1f, *(int *)this == 0)) {
        uVar7 = param_4;
      }
      if (uVar7 < 2) {
        uVar7 = 2;
      }
    }
  }
  if ((param_6 == '\x01') && (uVar7 < param_1 + 4)) {
    uVar7 = FUN_6380baa0(param_1 + 4);
  }
  if (*(int *)((int)this + 0x614) != 0) {
    FUN_6380bd40(uVar7,param_1,*(int *)((int)this + 0x624));
  }
  return;
}


