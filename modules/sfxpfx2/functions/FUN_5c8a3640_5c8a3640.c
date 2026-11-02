/* Module: sfxpfx2.dll
   Function: FUN_5c8a3640
   Address: 5c8a3640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c8a3640(void *this,int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int local_38;
  uint local_34;
  int local_30 [12];
  
  uVar1 = *param_3;
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x68) + 2);
  local_38 = 0;
  iVar3 = FUN_5c89fa10(this,local_30);
  if ((((iVar3 != 0) || (*(int *)((int)this + 0x6c) == 0)) ||
      ((param_1 == (int *)0x0 && (*(int *)((int)this + 0x54) != 0)))) &&
     (local_38 = FUN_5c8a2610(this,local_30,(int)param_1), local_38 < 0)) {
    return local_38;
  }
  *(undefined4 *)((int)this + 0x54) = 1;
  if (uVar6 != 0) {
    iVar3 = (int)this + 0x88;
    param_1 = param_2;
    piVar5 = (int *)((int)this + 0xf8);
    local_34 = uVar6;
    do {
      FUN_5c8a33e0(param_1,uVar6,(double *)((int)this + 0x78),iVar3,piVar5,uVar1);
      piVar5 = piVar5 + 0x44;
      iVar3 = iVar3 + 0x38;
      param_1 = param_1 + 1;
      local_34 = local_34 - 1;
    } while (local_34 != 0);
  }
  if (DAT_5c8e93b8 != 0) goto LAB_5c8a3896;
  uVar6 = *(uint *)(*(int *)((int)this + 0x68) + 4);
  if (*(int *)((int)this + 0x530) == 0) {
    iVar3 = *(int *)((int)this + 0x51c) - uVar1;
    *(int *)((int)this + 0x51c) = iVar3;
    if (iVar3 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0x51c) = (uVar4 & 3) * (uVar6 >> 4) + uVar6 * 3;
      uVar4 = rand();
      *(uint *)((int)this + 0x528) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0x52c) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0x530) = uVar6 >> 3;
      _DAT_5c8efccc = 0;
      _DAT_5c8efcd0 = 0;
      goto LAB_5c8a378a;
    }
    uVar4 = 0;
  }
  else {
LAB_5c8a378a:
    uVar6 = *(uint *)((int)this + 0x530);
    uVar4 = uVar1;
    if (uVar6 <= uVar1) {
      uVar4 = uVar6;
    }
    *(uint *)((int)this + 0x530) = uVar6 - uVar4;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x68) + 2);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    fVar2 = *(float *)(*(int *)((int)this + 0x524) +
                      (DAT_5c8efcbc % *(uint *)((int)this + 0x520)) * 4) * (float)_DAT_5c8dc978;
    DAT_5c8efcbc = DAT_5c8efcbc + *(int *)((int)this + 0x528);
    if ((float)_DAT_5c8dc970 <= fVar2) {
      if (fVar2 <= (float)_DAT_5c8dc968) {
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
      fVar2 = *(float *)(*(int *)((int)this + 0x524) +
                        (DAT_5c8efcc0 % *(uint *)((int)this + 0x520)) * 4) * (float)_DAT_5c8dc978;
      DAT_5c8efcc0 = DAT_5c8efcc0 + 1 + *(int *)((int)this + 0x52c);
      if ((float)_DAT_5c8dc970 <= fVar2) {
        if (fVar2 <= (float)_DAT_5c8dc968) {
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
LAB_5c8a3896:
  *param_3 = uVar1;
  return local_38;
}


