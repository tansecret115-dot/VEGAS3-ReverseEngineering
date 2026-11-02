/* Module: sfxpfx2.dll
   Function: FUN_5c8a3c50
   Address: 5c8a3c50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c8a3c50(void *this,float *param_1,float *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int local_38;
  uint local_34;
  int local_30 [12];
  
  uVar1 = *param_3;
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x68) + 2);
  local_38 = 0;
  iVar2 = FUN_5c89fa10(this,local_30);
  if ((((iVar2 != 0) || (*(int *)((int)this + 0x6c) == 0)) ||
      ((param_1 == (float *)0x0 && (*(int *)((int)this + 0x54) != 0)))) &&
     (local_38 = FUN_5c8a2610(this,local_30,(int)param_1), local_38 < 0)) {
    return local_38;
  }
  *(undefined4 *)((int)this + 0x54) = 1;
  if (uVar6 != 0) {
    iVar2 = (int)this + 0x88;
    param_1 = param_2;
    piVar5 = (int *)((int)this + 0xf8);
    local_34 = uVar6;
    do {
      FUN_5c8a38b0(param_1,uVar6,(double *)((int)this + 0x78),iVar2,piVar5,uVar1);
      piVar5 = piVar5 + 0x44;
      iVar2 = iVar2 + 0x38;
      param_1 = param_1 + 1;
      local_34 = local_34 - 1;
    } while (local_34 != 0);
  }
  if (DAT_5c8e93b8 != 0) goto LAB_5c8a3e31;
  uVar6 = *(uint *)(*(int *)((int)this + 0x68) + 4);
  if (*(int *)((int)this + 0x530) == 0) {
    iVar2 = *(int *)((int)this + 0x51c) - uVar1;
    *(int *)((int)this + 0x51c) = iVar2;
    if (iVar2 < 1) {
      uVar3 = rand();
      *(uint *)((int)this + 0x51c) = (uVar3 & 3) * (uVar6 >> 4) + uVar6 * 3;
      uVar3 = rand();
      *(uint *)((int)this + 0x528) = (uVar3 & 0x1f) + 1;
      uVar3 = rand();
      *(uint *)((int)this + 0x52c) = (uVar3 & 0x1f) + 1;
      *(uint *)((int)this + 0x530) = uVar6 >> 3;
      _DAT_5c8efccc = 0;
      _DAT_5c8efcd0 = 0;
      goto LAB_5c8a3d9a;
    }
    uVar3 = 0;
  }
  else {
LAB_5c8a3d9a:
    uVar6 = *(uint *)((int)this + 0x530);
    uVar3 = uVar1;
    if (uVar6 <= uVar1) {
      uVar3 = uVar6;
    }
    *(uint *)((int)this + 0x530) = uVar6 - uVar3;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x68) + 2);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar4 = DAT_5c8efcb4 % *(uint *)((int)this + 0x520);
    DAT_5c8efcb4 = DAT_5c8efcb4 + *(int *)((int)this + 0x528);
    *param_2 = *(float *)(*(int *)((int)this + 0x524) + uVar4 * 4) + *param_2;
    if (1 < uVar6) {
      uVar4 = DAT_5c8efcb8 % *(uint *)((int)this + 0x520);
      DAT_5c8efcb8 = DAT_5c8efcb8 + 1 + *(int *)((int)this + 0x52c);
      param_2[1] = *(float *)(*(int *)((int)this + 0x524) + uVar4 * 4) + param_2[1];
    }
    param_2 = param_2 + uVar6;
  }
LAB_5c8a3e31:
  *param_3 = uVar1;
  return local_38;
}


