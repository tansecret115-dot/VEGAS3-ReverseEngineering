/* Module: sfxpfx1.dll
   Function: FUN_5c945f90
   Address: 5c945f90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c945f90(void *this,int param_1,short *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int local_3c;
  uint local_38;
  undefined4 local_28 [9];
  
  uVar1 = *param_3;
  uVar8 = (uint)*(ushort *)(*(int *)((int)this + 0x58) + 2);
  local_3c = 0;
  iVar6 = FUN_5c943200(this,local_28);
  if ((((iVar6 != 0) || (*(int *)((int)this + 0x5c) == 0)) ||
      ((param_1 == 0 && (*(int *)((int)this + 0x44) != 0)))) &&
     (local_3c = FUN_5c9453a0(this,local_28,param_1), local_3c < 0)) {
    return local_3c;
  }
  iVar6 = *(int *)((int)this + 0x68);
  *(undefined4 *)((int)this + 0x44) = 1;
  if (iVar6 == 0) {
    local_3c = FUN_5c945e30(this,param_2,uVar8,uVar1);
  }
  else if ((0 < iVar6) && (iVar6 < 3)) {
    uVar2 = *(undefined4 *)((int)this + 0x1e8);
    uVar3 = *(undefined4 *)((int)this + 0x1ec);
    uVar4 = *(undefined4 *)((int)this + 0x1f0);
    uVar5 = *(undefined4 *)((int)this + 500);
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(undefined4 *)((int)this + 0x1e8) = uVar2;
        *(undefined4 *)((int)this + 0x1ec) = uVar3;
        *(undefined4 *)((int)this + 0x1f0) = uVar4;
        *(undefined4 *)((int)this + 500) = uVar5;
        local_3c = FUN_5c945f00(this,param_2,uVar8,uVar1,uVar7);
        param_2 = param_2 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
  }
  if (DAT_5c998760 != 0) goto LAB_5c94621d;
  uVar8 = *(uint *)(*(int *)((int)this + 0x58) + 4);
  if (*(int *)((int)this + 0x418) == 0) {
    iVar6 = *(int *)((int)this + 0x404) - uVar1;
    *(int *)((int)this + 0x404) = iVar6;
    if (iVar6 < 1) {
      uVar7 = rand();
      *(uint *)((int)this + 0x404) = (uVar7 & 3) * (uVar8 >> 4) + uVar8 * 3;
      uVar7 = rand();
      *(uint *)((int)this + 0x410) = (uVar7 & 0x1f) + 1;
      uVar7 = rand();
      *(uint *)((int)this + 0x414) = (uVar7 & 0x1f) + 1;
      *(uint *)((int)this + 0x418) = uVar8 >> 3;
      _DAT_5c99f074 = 0;
      _DAT_5c99f078 = 0;
      goto LAB_5c94612c;
    }
    local_38 = 0;
  }
  else {
LAB_5c94612c:
    uVar8 = *(uint *)((int)this + 0x418);
    local_38 = uVar1;
    if (uVar8 <= uVar1) {
      local_38 = uVar8;
    }
    *(uint *)((int)this + 0x418) = uVar8 - local_38;
  }
  uVar8 = (uint)*(ushort *)(*(int *)((int)this + 0x58) + 2);
  for (; local_38 != 0; local_38 = local_38 - 1) {
    DAT_5c99f06c = DAT_5c99f06c + *(int *)((int)this + 0x410);
    iVar6 = ftol();
    if (iVar6 < -0x8000) {
      iVar6 = -0x8000;
    }
    else if (0x7fff < iVar6) {
      iVar6 = 0x7fff;
    }
    *param_2 = *param_2 + (short)iVar6;
    if (1 < uVar8) {
      DAT_5c99f070 = DAT_5c99f070 + 1 + *(int *)((int)this + 0x414);
      iVar6 = ftol();
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      param_2[1] = param_2[1] + (short)iVar6;
    }
    param_2 = param_2 + uVar8;
  }
LAB_5c94621d:
  *param_3 = uVar1;
  return local_3c;
}


