/* Module: sfppack2.dll
   Function: FUN_5cce8070
   Address: 5cce8070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cce8070(void *this,short *param_1,short *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int local_5c;
  uint local_58;
  int local_54 [21];
  
  uVar1 = *param_3;
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x8c) + 2);
  local_5c = 0;
  iVar2 = FUN_5cce29b0(this,local_54);
  if ((((iVar2 != 0) || (*(int *)((int)this + 0x90) == 0)) ||
      ((param_1 == (short *)0x0 && (*(int *)((int)this + 0x78) != 0)))) &&
     (local_5c = FUN_5cce74e0(this,local_54,(int)param_1), local_5c < 0)) {
    return local_5c;
  }
  *(undefined4 *)((int)this + 0x78) = 1;
  if (uVar5 != 0) {
    iVar2 = (int)this + 0xb0;
    param_1 = param_2;
    piVar4 = (int *)((int)this + 0x270);
    local_58 = uVar5;
    do {
      FUN_5cce7ca0(param_1,uVar5,(int)this + 0xa0,iVar2,piVar4,uVar1);
      piVar4 = piVar4 + 0x44;
      iVar2 = iVar2 + 0xe0;
      param_1 = param_1 + 1;
      local_58 = local_58 - 1;
    } while (local_58 != 0);
  }
  if (DAT_5cd679f8 != 0) goto LAB_5cce82b2;
  uVar5 = *(uint *)(*(int *)((int)this + 0x8c) + 4);
  if (*(int *)((int)this + 0x6a8) == 0) {
    iVar2 = *(int *)((int)this + 0x694) - uVar1;
    *(int *)((int)this + 0x694) = iVar2;
    if (iVar2 < 1) {
      uVar3 = rand();
      *(uint *)((int)this + 0x694) = (uVar3 & 3) * (uVar5 >> 4) + uVar5 * 3;
      uVar3 = rand();
      *(uint *)((int)this + 0x6a0) = (uVar3 & 0x1f) + 1;
      uVar3 = rand();
      *(uint *)((int)this + 0x6a4) = (uVar3 & 0x1f) + 1;
      *(uint *)((int)this + 0x6a8) = uVar5 >> 3;
      _DAT_5cd76514 = 0;
      _DAT_5cd76518 = 0;
      goto LAB_5cce81cc;
    }
    uVar3 = 0;
  }
  else {
LAB_5cce81cc:
    uVar5 = *(uint *)((int)this + 0x6a8);
    uVar3 = uVar1;
    if (uVar5 <= uVar1) {
      uVar3 = uVar5;
    }
    *(uint *)((int)this + 0x6a8) = uVar5 - uVar3;
  }
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x8c) + 2);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    DAT_5cd7650c = DAT_5cd7650c + *(int *)((int)this + 0x6a0);
    iVar2 = ftol();
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    *param_2 = *param_2 + (short)iVar2;
    if (1 < uVar5) {
      DAT_5cd76510 = DAT_5cd76510 + 1 + *(int *)((int)this + 0x6a4);
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
LAB_5cce82b2:
  *param_3 = uVar1;
  return local_5c;
}


