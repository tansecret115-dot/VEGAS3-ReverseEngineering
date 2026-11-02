/* Module: sfppack3.dll
   Function: FUN_5cc36090
   Address: 5cc36090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc36090(void *this,int param_1,float *param_2,uint *param_3,int param_4)

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
  undefined4 local_24 [8];
  
  local_3c = 0;
  uVar7 = (uint)*(ushort *)(*(int *)((int)this + 0x54) + 2);
  uVar1 = *param_3;
  if (param_4 != 0) {
    *param_3 = 0;
    return 1;
  }
  iVar6 = FUN_5cc328c0(this,local_24);
  if ((((iVar6 != 0) || (*(int *)((int)this + 0x58) == 0)) ||
      ((param_1 == 0 && (*(int *)((int)this + 0x40) != 0)))) &&
     (local_3c = FUN_5cc34ce0(this,local_24,param_1), local_3c < 0)) {
    return local_3c;
  }
  iVar6 = *(int *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x40) = 1;
  if (iVar6 == 0) {
    local_3c = FUN_5cc35fb0(this,param_2,uVar7,uVar1);
  }
  else if ((0 < iVar6) && (iVar6 < 3)) {
    uVar2 = *(undefined4 *)((int)this + 0x1e0);
    uVar3 = *(undefined4 *)((int)this + 0x1e4);
    uVar4 = *(undefined4 *)((int)this + 0x1e8);
    uVar5 = *(undefined4 *)((int)this + 0x1ec);
    uVar8 = 0;
    if (uVar7 != 0) {
      do {
        *(undefined4 *)((int)this + 0x1e0) = uVar2;
        *(undefined4 *)((int)this + 0x1e4) = uVar3;
        *(undefined4 *)((int)this + 0x1e8) = uVar4;
        *(undefined4 *)((int)this + 0x1ec) = uVar5;
        local_3c = FUN_5cc36030(this,param_2,uVar7,uVar1,uVar8);
        param_2 = param_2 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
  }
  if (DAT_5cc982c0 != 0) goto LAB_5cc362ed;
  uVar7 = *(uint *)(*(int *)((int)this + 0x54) + 4);
  if (*(int *)((int)this + 0x410) == 0) {
    iVar6 = *(int *)((int)this + 0x3fc) - uVar1;
    *(int *)((int)this + 0x3fc) = iVar6;
    if (iVar6 < 1) {
      uVar8 = rand();
      *(uint *)((int)this + 0x3fc) = (uVar8 & 3) * (uVar7 >> 4) + uVar7 * 3;
      uVar8 = rand();
      *(uint *)((int)this + 0x408) = (uVar8 & 0x1f) + 1;
      uVar8 = rand();
      *(uint *)((int)this + 0x40c) = (uVar8 & 0x1f) + 1;
      *(uint *)((int)this + 0x410) = uVar7 >> 3;
      _DAT_5cc9ebd4 = 0;
      _DAT_5cc9ebd8 = 0;
      goto LAB_5cc36247;
    }
    local_38 = 0;
  }
  else {
LAB_5cc36247:
    uVar7 = *(uint *)((int)this + 0x410);
    local_38 = uVar1;
    if (uVar7 <= uVar1) {
      local_38 = uVar7;
    }
    *(uint *)((int)this + 0x410) = uVar7 - local_38;
  }
  uVar7 = (uint)*(ushort *)(*(int *)((int)this + 0x54) + 2);
  for (; local_38 != 0; local_38 = local_38 - 1) {
    uVar8 = DAT_5cc9ebbc % *(uint *)((int)this + 0x400);
    DAT_5cc9ebbc = DAT_5cc9ebbc + *(int *)((int)this + 0x408);
    *param_2 = *(float *)(*(int *)((int)this + 0x404) + uVar8 * 4) + *param_2;
    if (1 < uVar7) {
      uVar8 = DAT_5cc9ebc0 % *(uint *)((int)this + 0x400);
      DAT_5cc9ebc0 = DAT_5cc9ebc0 + 1 + *(int *)((int)this + 0x40c);
      param_2[1] = *(float *)(*(int *)((int)this + 0x404) + uVar8 * 4) + param_2[1];
    }
    param_2 = param_2 + uVar7;
  }
LAB_5cc362ed:
  *param_3 = uVar1;
  return local_3c;
}


