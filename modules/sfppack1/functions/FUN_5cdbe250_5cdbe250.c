/* Module: sfppack1.dll
   Function: FUN_5cdbe250
   Address: 5cdbe250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_5cdbe250(void *this,uint param_1,uint param_2,int *param_3,int *param_4,uint *param_5)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int local_38;
  int local_34;
  undefined4 local_30 [12];
  
  local_34 = 0;
  *(uint *)((int)this + 0x84) = (uint)(param_1 == 0);
  uVar4 = (uint)(param_1 == 2);
  param_1 = 0;
  local_38 = 0;
  if (param_3 != (int *)0x0) {
    local_34 = *param_3;
  }
  if (param_5 != (uint *)0x0) {
    param_1 = *param_5;
  }
  uVar5 = param_1;
  iVar2 = FUN_5cdb9800(this,local_30);
  if ((*(int *)((int)this + 0x84) == 0) || (*(int *)((int)this + 0x5c) == 0)) {
    if (((iVar2 != 0) || (*(int *)((int)this + 0x78) == 0)) &&
       ((uVar4 == 0 && (uVar3 = FUN_5cdbd040(this,(int)local_30), (int)uVar3 < 0)))) {
      return uVar3;
    }
  }
  else {
    uVar3 = FUN_5cdbd710(this);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  *(undefined4 *)((int)this + 0x5c) = 1;
  if (*(int *)((int)this + 0x88) == 0) {
    *(uint *)((int)this + 0x80) = uVar4;
    if (uVar4 != 0) {
      *param_5 = 0;
      return 1;
    }
    param_2 = FUN_5cdbf640(this,param_2,&local_34,param_4,(int *)&param_1);
  }
  else {
    if ((uVar4 == 0) && (*(int *)((int)this + 0x164) == 0)) {
      local_38 = 0x800;
      FUN_5cdbf640(this,param_2,&local_34,*(undefined4 *)((int)this + 0x188),&local_38);
      *(undefined4 *)((int)this + 400) = 0;
      *(int *)((int)this + 0x194) = *(int *)((int)this + 0x194) + local_34;
      *(int *)((int)this + 0x18c) = local_38;
    }
    else {
      local_34 = 0;
    }
    local_38 = *(int *)((int)this + 0x18c) - *(int *)((int)this + 400);
    if ((local_38 == 0) && (uVar4 != 0)) {
      *(undefined4 *)((int)this + 0x80) = 1;
    }
    param_2 = FUN_5cdc22f0(this,*(int *)((int)this + 0x188) +
                                (uint)*(ushort *)(*(int *)((int)this + 0x70) + 2) *
                                *(int *)((int)this + 400) * 8,&local_38,param_4,&param_1);
    *(int *)((int)this + 400) = *(int *)((int)this + 400) + local_38;
    uVar3 = *(int *)((int)this + 0x198) + param_1;
    *(uint *)((int)this + 0x198) = uVar3;
    uVar4 = *(uint *)((int)this + 0x194);
    if ((uVar3 <= uVar4) || (_DAT_5ce12e70 <= *(double *)((int)this + 200))) {
      if ((param_2 == 1) && ((uVar3 < uVar4 && (param_1 == 0)))) {
        param_1 = uVar4 - uVar3;
        if (uVar5 <= uVar4 - uVar3) {
          param_1 = uVar5;
        }
        piVar6 = param_4;
        for (uVar4 = *(ushort *)(*(int *)((int)this + 0x70) + 2) * param_1 & 0x3fffffff; uVar4 != 0;
            uVar4 = uVar4 - 1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined1 *)piVar6 = 0;
          piVar6 = (int *)((int)piVar6 + 1);
        }
        uVar4 = *(int *)((int)this + 0x198) + param_1;
        *(uint *)((int)this + 0x198) = uVar4;
        param_2 = (uint)(*(uint *)((int)this + 0x194) <= uVar4);
      }
    }
    else {
      param_2 = 1;
      param_1 = param_1 + (uVar4 - uVar3);
    }
  }
  uVar4 = param_1;
  if (DAT_5ce237e8 != 0) goto LAB_5cdbe646;
  uVar5 = *(uint *)(*(int *)((int)this + 0x70) + 4);
  if (*(int *)((int)this + 0x358) == 0) {
    iVar2 = *(int *)((int)this + 0x344) - param_1;
    *(int *)((int)this + 0x344) = iVar2;
    if (iVar2 < 1) {
      uVar3 = rand();
      *(uint *)((int)this + 0x344) = (uVar3 & 3) * (uVar5 >> 4) + uVar5 * 4;
      uVar3 = rand();
      *(uint *)((int)this + 0x350) = (uVar3 & 0x1f) + 1;
      uVar3 = rand();
      *(uint *)((int)this + 0x354) = (uVar3 & 0x1f) + 1;
      *(uint *)((int)this + 0x358) = uVar5 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdbe53a;
    }
    uVar4 = 0;
  }
  else {
LAB_5cdbe53a:
    uVar5 = *(uint *)((int)this + 0x358);
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    *(uint *)((int)this + 0x358) = uVar5 - uVar4;
  }
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x70) + 2);
  piVar6 = param_4;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    fVar1 = *(float *)(*(int *)((int)this + 0x34c) +
                      (DAT_5ce2a0ec % *(uint *)((int)this + 0x348)) * 4) * (float)_DAT_5ce13260;
    DAT_5ce2a0ec = DAT_5ce2a0ec + *(int *)((int)this + 0x350);
    if ((float)_DAT_5ce13258 <= fVar1) {
      if (fVar1 <= (float)_DAT_5ce13250) {
        iVar2 = ftol();
      }
      else {
        iVar2 = 0x7fffffff;
      }
    }
    else {
      iVar2 = -0x80000000;
    }
    *piVar6 = *piVar6 + iVar2;
    if (1 < uVar5) {
      fVar1 = *(float *)(*(int *)((int)this + 0x34c) +
                        (DAT_5ce2a0f0 % *(uint *)((int)this + 0x348)) * 4) * (float)_DAT_5ce13260;
      DAT_5ce2a0f0 = DAT_5ce2a0f0 + 1 + *(int *)((int)this + 0x354);
      if ((float)_DAT_5ce13258 <= fVar1) {
        if (fVar1 <= (float)_DAT_5ce13250) {
          iVar2 = ftol();
        }
        else {
          iVar2 = 0x7fffffff;
        }
      }
      else {
        iVar2 = -0x80000000;
      }
      piVar6[1] = piVar6[1] + iVar2;
    }
    piVar6 = piVar6 + uVar5;
  }
LAB_5cdbe646:
  if (param_3 != (int *)0x0) {
    *param_3 = local_34;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = param_1;
  }
  return param_2;
}


