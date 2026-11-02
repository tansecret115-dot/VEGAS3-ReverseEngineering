/* Module: sfppack3.dll
   Function: FUN_5cc354a0
   Address: 5cc354a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc354a0(void *this,int param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_3c;
  uint local_38;
  undefined4 local_24 [8];
  
  uVar1 = *param_3;
  uVar9 = (uint)*(ushort *)(*(int *)((int)this + 0x54) + 2);
  local_3c = 0;
  iVar7 = FUN_5cc328c0(this,local_24);
  if ((((iVar7 != 0) || (*(int *)((int)this + 0x58) == 0)) ||
      ((param_1 == 0 && (*(int *)((int)this + 0x40) != 0)))) &&
     (local_3c = FUN_5cc34ce0(this,local_24,param_1), local_3c < 0)) {
    return local_3c;
  }
  iVar7 = *(int *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x40) = 1;
  if (iVar7 == 0) {
    local_3c = FUN_5cc35340(this,(int)param_2,uVar9,uVar1);
  }
  else if ((0 < iVar7) && (iVar7 < 3)) {
    uVar2 = *(undefined4 *)((int)this + 0x1e0);
    uVar3 = *(undefined4 *)((int)this + 0x1e4);
    uVar4 = *(undefined4 *)((int)this + 0x1e8);
    uVar5 = *(undefined4 *)((int)this + 0x1ec);
    uVar8 = 0;
    if (uVar9 != 0) {
      do {
        *(undefined4 *)((int)this + 0x1e0) = uVar2;
        *(undefined4 *)((int)this + 0x1e4) = uVar3;
        *(undefined4 *)((int)this + 0x1e8) = uVar4;
        *(undefined4 *)((int)this + 0x1ec) = uVar5;
        local_3c = FUN_5cc35410(this,param_2,uVar9,uVar1,uVar8);
        param_2 = param_2 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar9);
    }
  }
  if (DAT_5cc982c0 != 0) goto LAB_5cc3574d;
  uVar9 = *(uint *)(*(int *)((int)this + 0x54) + 4);
  if (*(int *)((int)this + 0x410) == 0) {
    iVar7 = *(int *)((int)this + 0x3fc) - uVar1;
    *(int *)((int)this + 0x3fc) = iVar7;
    if (iVar7 < 1) {
      uVar8 = rand();
      *(uint *)((int)this + 0x3fc) = (uVar8 & 3) * (uVar9 >> 4) + uVar9 * 3;
      uVar8 = rand();
      *(uint *)((int)this + 0x408) = (uVar8 & 0x1f) + 1;
      uVar8 = rand();
      *(uint *)((int)this + 0x40c) = (uVar8 & 0x1f) + 1;
      *(uint *)((int)this + 0x410) = uVar9 >> 3;
      _DAT_5cc9ebd4 = 0;
      _DAT_5cc9ebd8 = 0;
      goto LAB_5cc3563a;
    }
    local_38 = 0;
  }
  else {
LAB_5cc3563a:
    uVar9 = *(uint *)((int)this + 0x410);
    local_38 = uVar1;
    if (uVar9 <= uVar1) {
      local_38 = uVar9;
    }
    *(uint *)((int)this + 0x410) = uVar9 - local_38;
  }
  uVar9 = (uint)*(ushort *)(*(int *)((int)this + 0x54) + 2);
  for (; local_38 != 0; local_38 = local_38 - 1) {
    DAT_5cc9ebdc = DAT_5cc9ebdc + *(int *)((int)this + 0x408);
    iVar7 = ftol();
    if (iVar7 < -0x80) {
      bVar6 = 0;
    }
    else if (iVar7 < 0x80) {
      bVar6 = (byte)iVar7 ^ 0x80;
    }
    else {
      bVar6 = 0xff;
    }
    *param_2 = bVar6;
    if (1 < uVar9) {
      DAT_5cc9ebe0 = DAT_5cc9ebe0 + 1 + *(int *)((int)this + 0x40c);
      iVar7 = ftol();
      if (iVar7 < -0x80) {
        bVar6 = 0;
      }
      else if (iVar7 < 0x80) {
        bVar6 = (byte)iVar7 ^ 0x80;
      }
      else {
        bVar6 = 0xff;
      }
      param_2[1] = bVar6;
    }
    param_2 = param_2 + uVar9;
  }
LAB_5cc3574d:
  *param_3 = uVar1;
  return local_3c;
}


