/* Module: sfxpfx1.dll
   Function: FUN_5c952400
   Address: 5c952400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c952400(void *this,int param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  float10 fVar8;
  uint local_24;
  int local_18 [5];
  
  uVar1 = *param_3;
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x48) + 2);
  iVar4 = FUN_5c94ff60(this,local_18);
  if ((param_1 == 0) && (*(int *)((int)this + 0x34) != 0)) {
    iVar4 = FUN_5c951c60(this);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  else if (((iVar4 != 0) || (*(int *)((int)this + 0x4c) == 0)) &&
          (iVar4 = FUN_5c951a00(this,local_18), iVar4 < 0)) {
    return iVar4;
  }
  *(undefined4 *)((int)this + 0x34) = 1;
  piVar6 = param_2;
  for (uVar5 = uVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        fVar8 = FUN_5c951df0((int)this,(double)*piVar6 * _DAT_5c98ba08,uVar7);
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
        *piVar6 = iVar4;
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar7 < uVar3);
    }
  }
  if (DAT_5c998760 != 0) goto LAB_5c9526bb;
  uVar3 = *(uint *)(*(int *)((int)this + 0x48) + 4);
  if (*(int *)((int)this + 0xc0) == 0) {
    iVar4 = *(int *)((int)this + 0xac) - uVar1;
    *(int *)((int)this + 0xac) = iVar4;
    if (iVar4 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0xac) = (uVar5 & 3) * (uVar3 >> 4) + uVar3 * 4;
      uVar5 = rand();
      *(uint *)((int)this + 0xb8) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0xbc) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0xc0) = uVar3 >> 3;
      _DAT_5c99f074 = 0;
      _DAT_5c99f078 = 0;
      goto LAB_5c952592;
    }
    local_24 = 0;
  }
  else {
LAB_5c952592:
    uVar3 = *(uint *)((int)this + 0xc0);
    local_24 = uVar1;
    if (uVar3 <= uVar1) {
      local_24 = uVar3;
    }
    *(uint *)((int)this + 0xc0) = uVar3 - local_24;
  }
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x48) + 2);
  for (; local_24 != 0; local_24 = local_24 - 1) {
    fVar2 = *(float *)(*(int *)((int)this + 0xb4) + (DAT_5c99f064 % *(uint *)((int)this + 0xb0)) * 4
                      ) * (float)_DAT_5c98ba00;
    DAT_5c99f064 = DAT_5c99f064 + *(int *)((int)this + 0xb8);
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
    if (1 < uVar3) {
      fVar2 = *(float *)(*(int *)((int)this + 0xb4) +
                        (DAT_5c99f068 % *(uint *)((int)this + 0xb0)) * 4) * (float)_DAT_5c98ba00;
      DAT_5c99f068 = DAT_5c99f068 + 1 + *(int *)((int)this + 0xbc);
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
    param_2 = param_2 + uVar3;
  }
LAB_5c9526bb:
  *param_3 = uVar1;
  return 0;
}


