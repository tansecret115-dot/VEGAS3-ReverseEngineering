/* Module: sfppack2.dll
   Function: FUN_5cce9250
   Address: 5cce9250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cce9250(void *this,double *param_1,double *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int local_5c;
  uint local_58;
  int local_54 [21];
  
  uVar1 = *param_3;
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x8c) + 2);
  local_5c = 0;
  iVar2 = FUN_5cce29b0(this,local_54);
  if ((((iVar2 != 0) || (*(int *)((int)this + 0x90) == 0)) ||
      ((param_1 == (double *)0x0 && (*(int *)((int)this + 0x78) != 0)))) &&
     (local_5c = FUN_5cce74e0(this,local_54,(int)param_1), local_5c < 0)) {
    return local_5c;
  }
  *(undefined4 *)((int)this + 0x78) = 1;
  if (uVar6 != 0) {
    iVar2 = (int)this + 0xb0;
    param_1 = param_2;
    piVar5 = (int *)((int)this + 0x270);
    local_58 = uVar6;
    do {
      FUN_5cce8ea0(param_1,uVar6,(double *)((int)this + 0xa0),iVar2,piVar5,uVar1);
      piVar5 = piVar5 + 0x44;
      iVar2 = iVar2 + 0xe0;
      param_1 = param_1 + 1;
      local_58 = local_58 - 1;
    } while (local_58 != 0);
  }
  if (DAT_5cd679f8 != 0) goto LAB_5cce9446;
  uVar6 = *(uint *)(*(int *)((int)this + 0x8c) + 4);
  if (*(int *)((int)this + 0x6a8) == 0) {
    iVar2 = *(int *)((int)this + 0x694) - uVar1;
    *(int *)((int)this + 0x694) = iVar2;
    if (iVar2 < 1) {
      uVar3 = rand();
      *(uint *)((int)this + 0x694) = (uVar3 & 3) * (uVar6 >> 4) + uVar6 * 3;
      uVar3 = rand();
      *(uint *)((int)this + 0x6a0) = (uVar3 & 0x1f) + 1;
      uVar3 = rand();
      *(uint *)((int)this + 0x6a4) = (uVar3 & 0x1f) + 1;
      *(uint *)((int)this + 0x6a8) = uVar6 >> 3;
      _DAT_5cd76514 = 0;
      _DAT_5cd76518 = 0;
      goto LAB_5cce93ac;
    }
    uVar3 = 0;
  }
  else {
LAB_5cce93ac:
    uVar6 = *(uint *)((int)this + 0x6a8);
    uVar3 = uVar1;
    if (uVar6 <= uVar1) {
      uVar3 = uVar6;
    }
    *(uint *)((int)this + 0x6a8) = uVar6 - uVar3;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x8c) + 2);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar4 = DAT_5cd764f4 % *(uint *)((int)this + 0x698);
    DAT_5cd764f4 = DAT_5cd764f4 + *(int *)((int)this + 0x6a0);
    *param_2 = (double)(*(float *)(*(int *)((int)this + 0x69c) + uVar4 * 4) + (float)*param_2);
    if (1 < uVar6) {
      uVar4 = DAT_5cd764f8 % *(uint *)((int)this + 0x698);
      DAT_5cd764f8 = DAT_5cd764f8 + 1 + *(int *)((int)this + 0x6a4);
      param_2[1] = (double)(*(float *)(*(int *)((int)this + 0x69c) + uVar4 * 4) + (float)param_2[1])
      ;
    }
    param_2 = param_2 + uVar6;
  }
LAB_5cce9446:
  *param_3 = uVar1;
  return local_5c;
}


