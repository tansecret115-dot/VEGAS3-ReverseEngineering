/* Module: sfppack1.dll
   Function: FUN_5cdc56b0
   Address: 5cdc56b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdc56b0(void *this,int param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  float10 fVar9;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_30;
  int local_2c;
  int local_1c [6];
  
  local_48 = *param_3;
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2);
  iVar4 = FUN_5cdc2fd0(this,local_1c);
  if ((param_1 == 0) && (*(int *)((int)this + 0x38) != 0)) {
    iVar4 = FUN_5cdc4e20(this);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  else if ((iVar4 != 0) || (*(int *)((int)this + 0x50) == 0)) {
    if (param_1 == 2) {
      return 1;
    }
    iVar4 = FUN_5cdc4dc0(this,local_1c,param_1);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  *(undefined4 *)((int)this + 0x38) = 1;
  local_2c = 0;
  local_40 = 0;
  local_44 = local_48;
  if (uVar6 != 0) {
    puVar7 = (uint *)((int)this + 0x8c);
    piVar8 = param_2;
    do {
      piVar3 = piVar8;
      uVar5 = local_48;
      if (param_1 == 2) {
        uVar1 = *puVar7;
        if (uVar1 <= local_48) {
          local_48 = uVar1;
        }
        *puVar7 = uVar1 - local_48;
        uVar5 = local_48;
        local_44 = local_48;
        if (uVar1 - local_48 == 0) {
          local_2c = 1;
        }
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        fVar9 = FUN_5cdc4fd0(this,(double)*piVar3 * _DAT_5ce13278,puVar7 + -1,local_40);
        if ((float10)_DAT_5ce13258 <= fVar9 * (float10)_DAT_5ce13260) {
          if ((double)(fVar9 * (float10)_DAT_5ce13260) <= _DAT_5ce13250) {
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
      local_40 = local_40 + 1;
      puVar7 = puVar7 + 2;
      piVar8 = piVar8 + 1;
    } while (local_40 < uVar6);
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdc59fb;
  local_30 = local_44;
  uVar6 = *(uint *)(*(int *)((int)this + 0x4c) + 4);
  if (*(int *)((int)this + 0xb0) == 0) {
    iVar4 = *(int *)((int)this + 0x9c) - local_44;
    *(int *)((int)this + 0x9c) = iVar4;
    if (iVar4 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0x9c) = (uVar5 & 3) * (uVar6 >> 4) + uVar6 * 4;
      uVar5 = rand();
      *(uint *)((int)this + 0xa8) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0xac) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0xb0) = uVar6 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdc58d6;
    }
    local_30 = 0;
  }
  else {
LAB_5cdc58d6:
    uVar6 = *(uint *)((int)this + 0xb0);
    if (uVar6 <= local_44) {
      local_30 = uVar6;
    }
    *(uint *)((int)this + 0xb0) = uVar6 - local_30;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2);
  for (; local_30 != 0; local_30 = local_30 - 1) {
    fVar2 = *(float *)(*(int *)((int)this + 0xa4) + (DAT_5ce2a0ec % *(uint *)((int)this + 0xa0)) * 4
                      ) * (float)_DAT_5ce13260;
    DAT_5ce2a0ec = DAT_5ce2a0ec + *(int *)((int)this + 0xa8);
    if ((float)_DAT_5ce13258 <= fVar2) {
      if ((double)fVar2 <= _DAT_5ce13250) {
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
      fVar2 = *(float *)(*(int *)((int)this + 0xa4) +
                        (DAT_5ce2a0f0 % *(uint *)((int)this + 0xa0)) * 4) * (float)_DAT_5ce13260;
      DAT_5ce2a0f0 = DAT_5ce2a0f0 + 1 + *(int *)((int)this + 0xac);
      if ((float)_DAT_5ce13258 <= fVar2) {
        if ((double)fVar2 <= _DAT_5ce13250) {
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
LAB_5cdc59fb:
  *param_3 = local_44;
  return local_2c;
}


