/* Module: erv23260.dll
   Function: FUN_6380d7e0
   Address: 6380d7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_6380d7e0(void *this,int *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  *(undefined4 *)((int)this + 0x18) = param_7;
  *(undefined4 *)((int)this + 4) = param_3;
  if (param_1[5] == 3) {
    iVar1 = *param_1 - *(int *)(*(int *)((int)this + 0x18) + 0x28);
    *(int *)((int)this + 0x24) = iVar1;
    if (iVar1 < 0) {
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x254) + iVar1;
    }
  }
  else if (*param_1 != *(int *)((int)this + 0x2c)) {
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x2c);
    iVar1 = *param_1;
    *(int *)((int)this + 0x2c) = iVar1;
    iVar1 = iVar1 - *(int *)((int)this + 0x28);
    *(int *)((int)this + 0x20) = iVar1;
    if (iVar1 < 0) {
      *(int *)((int)this + 0x20) = *(int *)((int)this + 0x254) + iVar1;
    }
  }
  if (param_1[5] == 0) {
    FUN_6380d560((int)this);
  }
  if (*(int *)((int)this + 0x230) != 3) {
    FUN_63810b40((int)this);
  }
  *(int *)((int)this + 0x230) = param_1[5];
  *(uint *)((int)this + 200) = param_5;
  *(undefined4 *)((int)this + 0xd0) = param_6;
  *(int *)((int)this + 0xcc) = param_4;
  piVar7 = (int *)((int)this + 0x144);
  for (iVar1 = 0x3b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar7 = *param_1;
    param_1 = param_1 + 1;
    piVar7 = piVar7 + 1;
  }
  if (((*(int *)((int)this + 0x18c) == 0) && (*(int *)((int)this + 0x194) == 0)) &&
     (*(int *)((int)this + 0x168) == 0)) {
    *(undefined4 *)((int)this + 0x250) = 0;
    *(undefined4 *)((int)this + 0xe8) = 0;
    if (((*(int *)((int)this + 0x15c) != 0) || (*(int *)((int)this + 0x164) != 0)) ||
       ((*(int *)((int)this + 0x17c) != 0 || (*(int *)((int)this + 0x158) == 3)))) {
      *(undefined4 *)((int)this + 0xe8) = 1;
    }
    *(undefined4 *)((int)this + 0xec) = 0;
    if ((*(int *)((int)this + 0x158) == 1) &&
       ((*(int *)((int)this + 0x164) != 0 || (*(int *)((int)this + 0x17c) != 0)))) {
      *(undefined4 *)((int)this + 0xec) = 1;
    }
    uVar5 = 0;
    if (*(int *)((int)this + 0x128) != 0) {
      do {
        uVar2 = uVar5 + 1;
        *(undefined1 *)(uVar5 + *(int *)((int)this + 0xc4)) = 0;
        uVar5 = uVar2;
      } while (uVar2 < *(uint *)((int)this + 0x128));
    }
    uVar5 = 0;
    if (*(int *)((int)this + 0x128) != 0) {
      do {
        uVar2 = *(uint *)((int)this + 0x124);
        uVar6 = 0;
        if (uVar2 != 0) {
          do {
            iVar1 = uVar5 * uVar2 + uVar6;
            uVar6 = uVar6 + 1;
            iVar1 = *(int *)((int)this + 8) + iVar1 * 0x7c;
            *(undefined4 *)(iVar1 + 0x60) = 0;
            *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)((int)this + 0xc);
            *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)((int)this + 0x10);
            uVar2 = *(uint *)((int)this + 0x124);
          } while (uVar6 < uVar2);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)((int)this + 0x128));
    }
    if (*(int *)((int)this + 0x158) != 0) {
      FUN_63815450(this,*(int *)(param_4 + 4),*(int *)((int)this + 0xf4),*(int *)((int)this + 0xf8),
                   *(int *)((int)this + 0x124) << 4,*(int *)((int)this + 0x128) << 4,
                   *(int *)(param_5 + 0x10));
    }
    if ((*(int *)((int)this + 0x158) != 0) && (*(int *)((int)this + 0x158) != 4)) {
      *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) + 1;
    }
    *(undefined4 *)((int)this + 0x234) = 0;
    if (*(int *)((int)this + 0x1b8) == 0) {
      *(undefined1 **)((int)this + 0x238) = &LAB_6381b8d0;
      *(undefined1 **)((int)this + 0x23c) = &LAB_6381b820;
      *(undefined1 **)((int)this + 0x240) = &LAB_6381b960;
    }
    else {
      *(undefined1 **)((int)this + 0x238) = &LAB_6381bb00;
      *(undefined1 **)((int)this + 0x23c) = &LAB_6381ba50;
      *(undefined1 **)((int)this + 0x240) = &LAB_6381bb90;
    }
    if ((*(int *)((int)this + 0x178) != 0) &&
       (param_5 = 0, (*(uint *)((int)this + 0x124) & 0x3fffffff) != 0x3fffffff)) {
      iVar1 = 0;
      do {
        iVar4 = 7;
        *(undefined4 *)(iVar1 + *(int *)((int)this + 0x104)) = 0x400;
        iVar3 = iVar1;
        do {
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 + -1;
          *(undefined4 *)(iVar3 + *(int *)((int)this + 0x104)) = 0;
        } while (iVar4 != 0);
        param_5 = param_5 + 1;
        iVar1 = iVar1 + 0x20;
      } while (param_5 < *(int *)((int)this + 0x124) * 4 + 4U);
    }
    *(undefined4 *)((int)this + 0x25c) = *(undefined4 *)(*(int *)((int)this + 200) + 0x20);
    *(undefined4 *)((int)this + 600) = *(undefined4 *)(*(int *)((int)this + 200) + 0x1c);
    return 0;
  }
  return 3;
}


