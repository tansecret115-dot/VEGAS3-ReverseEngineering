/* Module: sftrkfx1.dll
   Function: FUN_5cbb91e0
   Address: 5cbb91e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cbb91e0(void *this,int param_1,int *param_2,uint *param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  double *pdVar6;
  uint uVar7;
  int *piVar8;
  uint local_38;
  uint local_34;
  uint local_2c;
  int local_28;
  undefined4 local_24 [3];
  double local_18 [2];
  
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  uVar4 = *param_3;
  iVar2 = FUN_5cbb7bf0(this,local_24);
  if ((param_1 == 0) && (*(int *)((int)this + 0x30) != 0)) {
    iVar2 = FUN_5cbb8690(this);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  else if ((iVar2 != 0) || (*(int *)((int)this + 0x48) == 0)) {
    if (param_1 == 2) {
      return 1;
    }
    iVar2 = FUN_5cbb83b0(this,local_24,param_1);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  *(undefined4 *)((int)this + 0x30) = 1;
  local_28 = 0;
  piVar8 = param_2;
  local_38 = uVar4;
  if (param_1 == 2) {
    if (*(uint *)((int)this + 0xdc) <= uVar4) {
      uVar4 = *(uint *)((int)this + 0xdc);
    }
    iVar2 = *(int *)((int)this + 0xdc) - uVar4;
    *(int *)((int)this + 0xdc) = iVar2;
    local_38 = uVar4;
    if (iVar2 == 0) {
      local_28 = 1;
    }
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (uVar5 != 0) {
      piVar3 = piVar8;
      pdVar6 = local_18;
      uVar7 = uVar5;
      do {
        iVar2 = *piVar3;
        piVar3 = piVar3 + 1;
        uVar7 = uVar7 - 1;
        *pdVar6 = (double)iVar2 * _DAT_5cc04290;
        pdVar6 = pdVar6 + 1;
      } while (uVar7 != 0);
    }
    FUN_5cbb8860(this,(int)local_18,uVar5);
    if (uVar5 != 0) {
      pdVar6 = local_18;
      local_34 = uVar5;
      do {
        if (_DAT_5cc04280 <= *pdVar6 * _DAT_5cc04288) {
          if (*pdVar6 * _DAT_5cc04288 <= _DAT_5cc04278) {
            iVar2 = ftol();
          }
          else {
            iVar2 = 0x7fffffff;
          }
        }
        else {
          iVar2 = -0x80000000;
        }
        *piVar8 = iVar2;
        pdVar6 = pdVar6 + 1;
        piVar8 = piVar8 + 1;
        local_34 = local_34 - 1;
      } while (local_34 != 0);
    }
  }
  if (*(int *)((int)this + 0xe8) == 0) goto LAB_5cbb950b;
  uVar4 = *(uint *)(*(int *)((int)this + 0x44) + 4);
  if (*(int *)((int)this + 0x100) == 0) {
    iVar2 = *(int *)((int)this + 0xec) - local_38;
    *(int *)((int)this + 0xec) = iVar2;
    if (iVar2 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0xec) = (uVar5 & 3) * (uVar4 >> 4) + uVar4 * 4;
      uVar5 = rand();
      *(uint *)((int)this + 0xf8) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0xfc) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0x100) = uVar4 >> 3;
      _DAT_5cc17dd4 = 0;
      _DAT_5cc17dd8 = 0;
      goto LAB_5cbb93f0;
    }
    local_2c = 0;
  }
  else {
LAB_5cbb93f0:
    uVar4 = *(uint *)((int)this + 0x100);
    local_2c = local_38;
    if (uVar4 <= local_38) {
      local_2c = uVar4;
    }
    *(uint *)((int)this + 0x100) = uVar4 - local_2c;
  }
  uVar4 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  for (; local_2c != 0; local_2c = local_2c - 1) {
    fVar1 = *(float *)(*(int *)((int)this + 0xf4) + (DAT_5cc17dc4 % *(uint *)((int)this + 0xf0)) * 4
                      ) * (float)_DAT_5cc04288;
    DAT_5cc17dc4 = DAT_5cc17dc4 + *(int *)((int)this + 0xf8);
    if ((float)_DAT_5cc04280 <= fVar1) {
      if (fVar1 <= (float)_DAT_5cc04278) {
        iVar2 = ftol();
      }
      else {
        iVar2 = 0x7fffffff;
      }
    }
    else {
      iVar2 = -0x80000000;
    }
    *param_2 = *param_2 + iVar2;
    if (1 < uVar4) {
      fVar1 = *(float *)(*(int *)((int)this + 0xf4) +
                        (DAT_5cc17dc8 % *(uint *)((int)this + 0xf0)) * 4) * (float)_DAT_5cc04288;
      DAT_5cc17dc8 = DAT_5cc17dc8 + 1 + *(int *)((int)this + 0xfc);
      if ((float)_DAT_5cc04280 <= fVar1) {
        if (fVar1 <= (float)_DAT_5cc04278) {
          iVar2 = ftol();
        }
        else {
          iVar2 = 0x7fffffff;
        }
      }
      else {
        iVar2 = -0x80000000;
      }
      param_2[1] = param_2[1] + iVar2;
    }
    param_2 = param_2 + uVar4;
  }
LAB_5cbb950b:
  *param_3 = local_38;
  return local_28;
}


