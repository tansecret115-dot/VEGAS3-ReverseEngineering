/* Module: sfxpfx2.dll
   Function: FUN_5c8a3190
   Address: 5c8a3190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c8a3190(void *this,short *param_1,short *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int local_38;
  uint local_34;
  int local_30 [12];
  
  uVar1 = *param_3;
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x68) + 2);
  local_38 = 0;
  iVar2 = FUN_5c89fa10(this,local_30);
  if ((((iVar2 != 0) || (*(int *)((int)this + 0x6c) == 0)) ||
      ((param_1 == (short *)0x0 && (*(int *)((int)this + 0x54) != 0)))) &&
     (local_38 = FUN_5c8a2610(this,local_30,(int)param_1), local_38 < 0)) {
    return local_38;
  }
  *(undefined4 *)((int)this + 0x54) = 1;
  if (uVar5 != 0) {
    iVar2 = (int)this + 0x88;
    param_1 = param_2;
    piVar4 = (int *)((int)this + 0xf8);
    local_34 = uVar5;
    do {
      FUN_5c8a2dc0(param_1,uVar5,(int)this + 0x78,iVar2,piVar4,uVar1);
      piVar4 = piVar4 + 0x44;
      iVar2 = iVar2 + 0x38;
      param_1 = param_1 + 1;
      local_34 = local_34 - 1;
    } while (local_34 != 0);
  }
  if (DAT_5c8e93b8 != 0) goto LAB_5c8a33bd;
  uVar5 = *(uint *)(*(int *)((int)this + 0x68) + 4);
  if (*(int *)((int)this + 0x530) == 0) {
    iVar2 = *(int *)((int)this + 0x51c) - uVar1;
    *(int *)((int)this + 0x51c) = iVar2;
    if (iVar2 < 1) {
      uVar3 = rand();
      *(uint *)((int)this + 0x51c) = (uVar3 & 3) * (uVar5 >> 4) + uVar5 * 3;
      uVar3 = rand();
      *(uint *)((int)this + 0x528) = (uVar3 & 0x1f) + 1;
      uVar3 = rand();
      *(uint *)((int)this + 0x52c) = (uVar3 & 0x1f) + 1;
      *(uint *)((int)this + 0x530) = uVar5 >> 3;
      _DAT_5c8efccc = 0;
      _DAT_5c8efcd0 = 0;
      goto LAB_5c8a32da;
    }
    uVar3 = 0;
  }
  else {
LAB_5c8a32da:
    uVar5 = *(uint *)((int)this + 0x530);
    uVar3 = uVar1;
    if (uVar5 <= uVar1) {
      uVar3 = uVar5;
    }
    *(uint *)((int)this + 0x530) = uVar5 - uVar3;
  }
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x68) + 2);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    DAT_5c8efcc4 = DAT_5c8efcc4 + *(int *)((int)this + 0x528);
    iVar2 = ftol();
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    *param_2 = *param_2 + (short)iVar2;
    if (1 < uVar5) {
      DAT_5c8efcc8 = DAT_5c8efcc8 + 1 + *(int *)((int)this + 0x52c);
      iVar2 = ftol();
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      param_2[1] = param_2[1] + (short)iVar2;
    }
    param_2 = param_2 + uVar5;
  }
LAB_5c8a33bd:
  *param_3 = uVar1;
  return local_38;
}


