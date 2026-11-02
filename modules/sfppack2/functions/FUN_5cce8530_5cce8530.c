/* Module: sfppack2.dll
   Function: FUN_5cce8530
   Address: 5cce8530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cce8530(void *this,int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int local_5c;
  uint local_58;
  int local_54 [21];
  
  uVar1 = *param_3;
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x8c) + 2);
  local_5c = 0;
  iVar3 = FUN_5cce29b0(this,local_54);
  if ((((iVar3 != 0) || (*(int *)((int)this + 0x90) == 0)) ||
      ((param_1 == (int *)0x0 && (*(int *)((int)this + 0x78) != 0)))) &&
     (local_5c = FUN_5cce74e0(this,local_54,(int)param_1), local_5c < 0)) {
    return local_5c;
  }
  *(undefined4 *)((int)this + 0x78) = 1;
  if (uVar6 != 0) {
    iVar3 = (int)this + 0xb0;
    param_1 = param_2;
    piVar5 = (int *)((int)this + 0x270);
    local_58 = uVar6;
    do {
      FUN_5cce82d0(param_1,uVar6,(double *)((int)this + 0xa0),iVar3,piVar5,uVar1);
      piVar5 = piVar5 + 0x44;
      iVar3 = iVar3 + 0xe0;
      param_1 = param_1 + 1;
      local_58 = local_58 - 1;
    } while (local_58 != 0);
  }
  if (DAT_5cd679f8 != 0) goto LAB_5cce879b;
  uVar6 = *(uint *)(*(int *)((int)this + 0x8c) + 4);
  if (*(int *)((int)this + 0x6a8) == 0) {
    iVar3 = *(int *)((int)this + 0x694) - uVar1;
    *(int *)((int)this + 0x694) = iVar3;
    if (iVar3 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0x694) = (uVar4 & 3) * (uVar6 >> 4) + uVar6 * 3;
      uVar4 = rand();
      *(uint *)((int)this + 0x6a0) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0x6a4) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0x6a8) = uVar6 >> 3;
      _DAT_5cd76514 = 0;
      _DAT_5cd76518 = 0;
      goto LAB_5cce868c;
    }
    uVar4 = 0;
  }
  else {
LAB_5cce868c:
    uVar6 = *(uint *)((int)this + 0x6a8);
    uVar4 = uVar1;
    if (uVar6 <= uVar1) {
      uVar4 = uVar6;
    }
    *(uint *)((int)this + 0x6a8) = uVar6 - uVar4;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x8c) + 2);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    fVar2 = *(float *)(*(int *)((int)this + 0x69c) +
                      (DAT_5cd76504 % *(uint *)((int)this + 0x698)) * 4) * (float)_DAT_5cd51758;
    DAT_5cd76504 = DAT_5cd76504 + *(int *)((int)this + 0x6a0);
    if ((float)_DAT_5cd51750 <= fVar2) {
      if (fVar2 <= (float)_DAT_5cd51748) {
        iVar3 = ftol();
      }
      else {
        iVar3 = 0x7fffffff;
      }
    }
    else {
      iVar3 = -0x80000000;
    }
    *param_2 = *param_2 + iVar3;
    if (1 < uVar6) {
      fVar2 = *(float *)(*(int *)((int)this + 0x69c) +
                        (DAT_5cd76508 % *(uint *)((int)this + 0x698)) * 4) * (float)_DAT_5cd51758;
      DAT_5cd76508 = DAT_5cd76508 + 1 + *(int *)((int)this + 0x6a4);
      if ((float)_DAT_5cd51750 <= fVar2) {
        if (fVar2 <= (float)_DAT_5cd51748) {
          iVar3 = ftol();
        }
        else {
          iVar3 = 0x7fffffff;
        }
      }
      else {
        iVar3 = -0x80000000;
      }
      param_2[1] = param_2[1] + iVar3;
    }
    param_2 = param_2 + uVar6;
  }
LAB_5cce879b:
  *param_3 = uVar1;
  return local_5c;
}


