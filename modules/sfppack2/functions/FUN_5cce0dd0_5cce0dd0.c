/* Module: sfppack2.dll
   Function: FUN_5cce0dd0
   Address: 5cce0dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_5cce0dd0(void *this,int param_1,undefined4 *param_2,uint *param_3,double *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  
  *(uint *)((int)this + 100) = (uint)(param_1 == 2);
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x54) + 2);
  if (param_3 == (uint *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = *param_3;
  }
  if (param_5 == (uint *)0x0) {
    local_18 = 0;
  }
  else {
    local_18 = *param_5;
  }
  iVar1 = FUN_5cce0220(this,*(int *)((int)this + 0x90),local_14,(uint)(param_1 == 0));
  if (*(int *)((int)this + iVar1 * 0x2c + 0xbc) != 0) {
    if (*(int *)((int)this + 100) != 0) {
      *param_5 = 0;
      return 1;
    }
    if (local_18 <= local_14) {
      local_14 = local_18;
    }
    *param_3 = local_14;
    *param_5 = local_14;
    for (; local_14 != 0; local_14 = local_14 - 1) {
      *(undefined4 *)param_4 = *param_2;
      *(undefined4 *)((int)param_4 + 4) = param_2[1];
      if (uVar3 == 2) {
        *(undefined4 *)(param_4 + 1) = param_2[2];
        *(undefined4 *)((int)param_4 + 0xc) = param_2[3];
      }
      param_4 = param_4 + uVar3;
      param_2 = param_2 + uVar3 * 2;
    }
    return 0;
  }
  local_c = FUN_5cce1e40(this,param_2,(int *)&local_14,param_4,&local_18,
                         (undefined4 *)((int)this + iVar1 * 0x2c + 0xac));
  if (DAT_5cd679f8 != 0) goto LAB_5cce0f9e;
  uVar3 = *(uint *)(*(int *)((int)this + 0x54) + 4);
  local_10 = local_18;
  if (*(int *)((int)this + 0x154) == 0) {
    iVar1 = *(int *)((int)this + 0x140) - local_18;
    *(int *)((int)this + 0x140) = iVar1;
    if (iVar1 < 1) {
      uVar2 = rand();
      *(uint *)((int)this + 0x140) = (uVar2 & 3) * (uVar3 >> 4) + uVar3 * 3;
      uVar2 = rand();
      *(uint *)((int)this + 0x14c) = (uVar2 & 0x1f) + 1;
      uVar2 = rand();
      *(uint *)((int)this + 0x150) = (uVar2 & 0x1f) + 1;
      *(uint *)((int)this + 0x154) = uVar3 >> 3;
      _DAT_5cd76514 = 0;
      _DAT_5cd76518 = 0;
      goto LAB_5cce0efb;
    }
    local_10 = 0;
  }
  else {
LAB_5cce0efb:
    uVar3 = *(uint *)((int)this + 0x154);
    if (uVar3 <= local_10) {
      local_10 = uVar3;
    }
    *(uint *)((int)this + 0x154) = uVar3 - local_10;
  }
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x54) + 2);
  for (; local_10 != 0; local_10 = local_10 - 1) {
    uVar2 = DAT_5cd764f4 % *(uint *)((int)this + 0x144);
    DAT_5cd764f4 = DAT_5cd764f4 + *(int *)((int)this + 0x14c);
    *param_4 = (double)(*(float *)(*(int *)((int)this + 0x148) + uVar2 * 4) + (float)*param_4);
    if (1 < uVar3) {
      uVar2 = DAT_5cd764f8 % *(uint *)((int)this + 0x144);
      DAT_5cd764f8 = DAT_5cd764f8 + 1 + *(int *)((int)this + 0x150);
      param_4[1] = (double)(*(float *)(*(int *)((int)this + 0x148) + uVar2 * 4) + (float)param_4[1])
      ;
    }
    param_4 = param_4 + uVar3;
  }
LAB_5cce0f9e:
  if (param_3 != (uint *)0x0) {
    *param_3 = local_14;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = local_18;
  }
  return local_c;
}


