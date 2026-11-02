/* Module: rv103260.dll
   Function: FUN_636a27d0
   Address: 636a27d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_636a27d0(void *this,float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined1 local_a8 [42];
  int local_7e;
  float local_60 [10];
  float local_38 [4];
  undefined1 local_28 [20];
  undefined4 local_14;
  void *local_10;
  undefined4 local_c;
  uint local_8;
  
  uVar9 = (uint)*(ushort *)((int)this + 8);
  local_10 = this;
  local_c = 0x80004005;
  local_8 = uVar9;
  pfVar5 = param_1;
  fVar2 = _DAT_636a70c0;
  for (uVar7 = uVar9; uVar7 != 0; uVar7 = uVar7 - 1) {
    fVar2 = fVar2 + *pfVar5;
    pfVar5 = pfVar5 + 1;
  }
  if (*(float *)((int)this + 0x17c) < fVar2) {
    *(int *)((int)this + 0x174) = *(int *)((int)this + 0x174) + -2;
  }
  if (fVar2 < *(float *)((int)this + 0x17c)) {
    *(int *)((int)this + 0x174) = *(int *)((int)this + 0x174) + 1;
  }
  if (*(int *)((int)this + 0x174) < 0) {
    *(undefined4 *)((int)this + 0x174) = 0;
  }
  if (0x1f < *(int *)((int)this + 0x174)) {
    *(undefined4 *)((int)this + 0x174) = 0x1f;
  }
  fVar3 = (float)*(int *)((int)this + 0x174) - _DAT_636a7194;
  if (fVar3 <= _DAT_636a7198) {
    if (_DAT_636a7170 <= fVar3) {
      uVar7 = uVar9;
      fVar4 = _DAT_636a719c;
      if (uVar9 != 0) {
        pfVar5 = local_38;
        for (uVar8 = uVar9; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pfVar5 = 0.0;
          pfVar5 = pfVar5 + 1;
        }
      }
      while ((fVar4 != _DAT_636a70c0 && (0 < (int)uVar7))) {
        iVar6 = 0;
        this = local_10;
        fVar4 = _DAT_636a70c0;
        if (0 < (int)uVar9) {
          iVar10 = (int)param_1 - (int)local_60;
          do {
            pfVar5 = local_38 + iVar6;
            if (local_38[iVar6] == _DAT_636a70c0) {
              local_60[iVar6] =
                   (fVar3 / (float)(int)local_8) *
                   (fVar2 / *(float *)(iVar10 + (int)(local_60 + iVar6)));
            }
            pfVar1 = local_60 + iVar6;
            if (local_60[iVar6] <= _DAT_636a71a0) {
              if (_DAT_636a71a4 <= *pfVar1) {
                *pfVar5 = 0.0;
              }
              else {
                uVar7 = uVar7 - 1;
                *pfVar5 = (*pfVar1 - _DAT_636a71a4) * (*(float *)(iVar10 + (int)pfVar1) / fVar2);
                *pfVar1 = 3.0;
                fVar4 = _DAT_636a719c;
              }
            }
            else {
              uVar7 = uVar7 - 1;
              *pfVar5 = (*pfVar1 - _DAT_636a71a0) * (*(float *)(iVar10 + (int)pfVar1) / fVar2);
              *pfVar1 = 15.0;
              fVar4 = _DAT_636a719c;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)local_8);
          this = local_10;
          uVar9 = local_8;
          if (0 < (int)local_8) {
            pfVar5 = local_38;
            uVar8 = local_8;
            do {
              fVar3 = fVar3 + *pfVar5;
              pfVar5 = pfVar5 + 1;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
        }
      }
    }
    else if (uVar9 != 0) {
      pfVar5 = local_60;
      for (uVar7 = uVar9; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pfVar5 = 3.0;
        pfVar5 = pfVar5 + 1;
      }
    }
  }
  else if (uVar9 != 0) {
    pfVar5 = local_60;
    for (uVar7 = uVar9; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pfVar5 = 15.0;
      pfVar5 = pfVar5 + 1;
    }
  }
  param_1 = (float *)0x0;
  if (0 < (int)uVar9) {
    pfVar5 = local_60;
    piVar11 = (int *)((int)this + 10);
    do {
      FUN_636a34f0((void *)*piVar11,7,local_28);
      if (*pfVar5 < _DAT_636a71a4) {
        *pfVar5 = 3.0;
      }
      if (_DAT_636a71a0 < *pfVar5) {
        *pfVar5 = 15.0;
      }
      FUN_636a34f0((void *)*piVar11,1,local_a8);
      if ((local_7e == 1) && (_DAT_636a71a8 < *pfVar5)) {
        *pfVar5 = 7.0;
      }
      local_14 = ftol();
      *(undefined4 *)(*piVar11 + 0xdc) = local_14;
      iVar6 = FUN_636a3520((void *)*piVar11,7,local_28);
      if (iVar6 == 0) {
        if (*(int *)((int)this + 0x174) < 0x13) {
          *(int *)((int)this + 0x180) = (0x14 - *(int *)((int)this + 0x174)) / 2;
        }
        else {
          *(undefined4 *)((int)this + 0x180) = 0;
        }
      }
      else {
        local_c = 0x71;
      }
      param_1 = (float *)((int)param_1 + 1);
      pfVar5 = pfVar5 + 1;
      piVar11 = piVar11 + 1;
    } while ((int)param_1 < (int)(uint)*(ushort *)((int)this + 8));
  }
  return local_c;
}


