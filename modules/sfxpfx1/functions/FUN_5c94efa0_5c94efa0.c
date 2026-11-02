/* Module: sfxpfx1.dll
   Function: FUN_5c94efa0
   Address: 5c94efa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c94efa0(void *this,int param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  float10 fVar8;
  uint local_2c;
  uint local_24;
  int local_18 [5];
  
  uVar1 = *param_3;
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x48) + 2);
  iVar4 = FUN_5c94cb00(this,local_18);
  if ((param_1 == 0) && (*(int *)((int)this + 0x34) != 0)) {
    iVar4 = FUN_5c94e700(this);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  else if (((iVar4 != 0) || (*(int *)((int)this + 0x4c) == 0)) &&
          (iVar4 = FUN_5c94e6c0(this,local_18), iVar4 < 0)) {
    return iVar4;
  }
  *(undefined4 *)((int)this + 0x34) = 1;
  local_2c = 0;
  uVar5 = uVar1;
  piVar3 = param_2;
  piVar7 = param_2;
  if (uVar6 != 0) {
    do {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        fVar8 = FUN_5c94e890((int)this,(double)*piVar3 * _DAT_5c98ba08,local_2c);
        if ((float10)_DAT_5c98b9f8 <= fVar8 * (float10)_DAT_5c98ba00) {
          if ((double)(fVar8 * (float10)_DAT_5c98ba00) <= _DAT_5c98b9f0) {
            iVar4 = ftol();
          }
          else {
            iVar4 = 0x7fffffff;
          }
        }
        else {
          iVar4 = -0x80000000;
        }
        *piVar3 = iVar4;
        piVar3 = piVar3 + uVar6;
      }
      local_2c = local_2c + 1;
      uVar5 = uVar1;
      piVar3 = piVar7 + 1;
      piVar7 = piVar7 + 1;
    } while (local_2c < uVar6);
  }
  if (DAT_5c998760 != 0) goto LAB_5c94f27a;
  uVar6 = *(uint *)(*(int *)((int)this + 0x48) + 4);
  if (*(int *)((int)this + 0x2008) == 0) {
    iVar4 = *(int *)((int)this + 0x1ff4) - uVar1;
    *(int *)((int)this + 0x1ff4) = iVar4;
    if (iVar4 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0x1ff4) = (uVar5 & 3) * (uVar6 >> 4) + uVar6 * 4;
      uVar5 = rand();
      *(uint *)((int)this + 0x2000) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0x2004) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0x2008) = uVar6 >> 3;
      _DAT_5c99f074 = 0;
      _DAT_5c99f078 = 0;
      goto LAB_5c94f155;
    }
    local_24 = 0;
  }
  else {
LAB_5c94f155:
    uVar6 = *(uint *)((int)this + 0x2008);
    local_24 = uVar1;
    if (uVar6 <= uVar1) {
      local_24 = uVar6;
    }
    *(uint *)((int)this + 0x2008) = uVar6 - local_24;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x48) + 2);
  for (; local_24 != 0; local_24 = local_24 - 1) {
    fVar2 = *(float *)(*(int *)((int)this + 0x1ffc) +
                      (DAT_5c99f064 % *(uint *)((int)this + 0x1ff8)) * 4) * (float)_DAT_5c98ba00;
    DAT_5c99f064 = DAT_5c99f064 + *(int *)((int)this + 0x2000);
    if ((float)_DAT_5c98b9f8 <= fVar2) {
      if ((double)fVar2 <= _DAT_5c98b9f0) {
        iVar4 = ftol();
      }
      else {
        iVar4 = 0x7fffffff;
      }
    }
    else {
      iVar4 = -0x80000000;
    }
    *param_2 = *param_2 + iVar4;
    if (1 < uVar6) {
      fVar2 = *(float *)(*(int *)((int)this + 0x1ffc) +
                        (DAT_5c99f068 % *(uint *)((int)this + 0x1ff8)) * 4) * (float)_DAT_5c98ba00;
      DAT_5c99f068 = DAT_5c99f068 + 1 + *(int *)((int)this + 0x2004);
      if ((float)_DAT_5c98b9f8 <= fVar2) {
        if ((double)fVar2 <= _DAT_5c98b9f0) {
          iVar4 = ftol();
        }
        else {
          iVar4 = 0x7fffffff;
        }
      }
      else {
        iVar4 = -0x80000000;
      }
      param_2[1] = param_2[1] + iVar4;
    }
    param_2 = param_2 + uVar6;
  }
LAB_5c94f27a:
  *param_3 = uVar1;
  return 0;
}


