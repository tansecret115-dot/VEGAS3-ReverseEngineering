/* Module: sfxpfx1.dll
   Function: FUN_5c9463b0
   Address: 5c9463b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c9463b0(void *this,int param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_3c;
  uint local_38;
  undefined4 local_28 [9];
  
  uVar1 = *param_3;
  uVar9 = (uint)*(ushort *)(*(int *)((int)this + 0x58) + 2);
  local_3c = 0;
  iVar7 = FUN_5c943200(this,local_28);
  if ((((iVar7 != 0) || (*(int *)((int)this + 0x5c) == 0)) ||
      ((param_1 == 0 && (*(int *)((int)this + 0x44) != 0)))) &&
     (local_3c = FUN_5c9453a0(this,local_28,param_1), local_3c < 0)) {
    return local_3c;
  }
  iVar7 = *(int *)((int)this + 0x68);
  *(undefined4 *)((int)this + 0x44) = 1;
  if (iVar7 == 0) {
    local_3c = FUN_5c946230(this,param_2,uVar9,uVar1);
  }
  else if ((0 < iVar7) && (iVar7 < 3)) {
    uVar2 = *(undefined4 *)((int)this + 0x1e8);
    uVar3 = *(undefined4 *)((int)this + 0x1ec);
    uVar4 = *(undefined4 *)((int)this + 0x1f0);
    uVar5 = *(undefined4 *)((int)this + 500);
    uVar8 = 0;
    if (uVar9 != 0) {
      do {
        *(undefined4 *)((int)this + 0x1e8) = uVar2;
        *(undefined4 *)((int)this + 0x1ec) = uVar3;
        *(undefined4 *)((int)this + 0x1f0) = uVar4;
        *(undefined4 *)((int)this + 500) = uVar5;
        local_3c = FUN_5c946310(this,param_2,uVar9,uVar1,uVar8);
        param_2 = param_2 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar9);
    }
  }
  if (DAT_5c998760 != 0) goto LAB_5c946667;
  uVar9 = *(uint *)(*(int *)((int)this + 0x58) + 4);
  if (*(int *)((int)this + 0x418) == 0) {
    iVar7 = *(int *)((int)this + 0x404) - uVar1;
    *(int *)((int)this + 0x404) = iVar7;
    if (iVar7 < 1) {
      uVar8 = rand();
      *(uint *)((int)this + 0x404) = (uVar8 & 3) * (uVar9 >> 4) + uVar9 * 3;
      uVar8 = rand();
      *(uint *)((int)this + 0x410) = (uVar8 & 0x1f) + 1;
      uVar8 = rand();
      *(uint *)((int)this + 0x414) = (uVar8 & 0x1f) + 1;
      *(uint *)((int)this + 0x418) = uVar9 >> 3;
      _DAT_5c99f074 = 0;
      _DAT_5c99f078 = 0;
      goto LAB_5c94654c;
    }
    local_38 = 0;
  }
  else {
LAB_5c94654c:
    uVar9 = *(uint *)((int)this + 0x418);
    local_38 = uVar1;
    if (uVar9 <= uVar1) {
      local_38 = uVar9;
    }
    *(uint *)((int)this + 0x418) = uVar9 - local_38;
  }
  uVar9 = (uint)*(ushort *)(*(int *)((int)this + 0x58) + 2);
  for (; local_38 != 0; local_38 = local_38 - 1) {
    fVar6 = *(float *)(*(int *)((int)this + 0x40c) +
                      (DAT_5c99f064 % *(uint *)((int)this + 0x408)) * 4) * (float)_DAT_5c98ba00;
    DAT_5c99f064 = DAT_5c99f064 + *(int *)((int)this + 0x410);
    if ((float)_DAT_5c98b9f8 <= fVar6) {
      if (fVar6 <= (float)_DAT_5c98b9f0) {
        iVar7 = ftol();
      }
      else {
        iVar7 = 0x7fffffff;
      }
    }
    else {
      iVar7 = -0x80000000;
    }
    *param_2 = *param_2 + iVar7;
    if (1 < uVar9) {
      fVar6 = *(float *)(*(int *)((int)this + 0x40c) +
                        (DAT_5c99f068 % *(uint *)((int)this + 0x408)) * 4) * (float)_DAT_5c98ba00;
      DAT_5c99f068 = DAT_5c99f068 + 1 + *(int *)((int)this + 0x414);
      if ((float)_DAT_5c98b9f8 <= fVar6) {
        if (fVar6 <= (float)_DAT_5c98b9f0) {
          iVar7 = ftol();
        }
        else {
          iVar7 = 0x7fffffff;
        }
      }
      else {
        iVar7 = -0x80000000;
      }
      param_2[1] = param_2[1] + iVar7;
    }
    param_2 = param_2 + uVar9;
  }
LAB_5c946667:
  *param_3 = uVar1;
  return local_3c;
}


