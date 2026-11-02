/* Module: vegas30k.dll
   Function: FUN_0115bc40
   Address: 0115bc40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0115bc40(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piStack_4;
  
  piVar3 = param_1;
  iVar1 = *(int *)((int)param_1 + 0x14d);
  if (iVar1 != 1) {
    if ((iVar1 < 1) || (4 < iVar1)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x18;
      *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x14d);
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)(param_1);
    }
    uVar4 = FUN_01167860(*(undefined4 *)((int)param_1 + 0x55),*(int *)((int)param_1 + 0x139) << 3);
    *(undefined4 *)((int)param_1 + 0x161) = uVar4;
    uVar4 = FUN_01167860(*(undefined4 *)((int)param_1 + 0x59),*(int *)((int)param_1 + 0x13d) << 3);
    *(undefined4 *)((int)param_1 + 0x165) = uVar4;
    uVar6 = *(uint *)((int)param_1 + 0x14d);
    *(undefined4 *)((int)param_1 + 0x169) = 0;
    param_1 = (int *)0x0;
    if (0 < (int)uVar6) {
      piStack_4 = (int *)((int)piVar3 + 0x151);
      do {
        iVar1 = *piStack_4;
        uVar6 = *(uint *)(iVar1 + 8);
        *(uint *)(iVar1 + 0x3d) = *(int *)(iVar1 + 0x24) * uVar6;
        uVar5 = *(uint *)(iVar1 + 0x1c) % uVar6;
        uVar2 = *(uint *)(iVar1 + 0xc);
        *(uint *)(iVar1 + 0x31) = uVar6;
        *(uint *)(iVar1 + 0x35) = uVar2;
        iVar7 = uVar2 * uVar6;
        *(int *)(iVar1 + 0x39) = iVar7;
        if (uVar5 == 0) {
          uVar5 = uVar6;
        }
        *(uint *)(iVar1 + 0x41) = uVar5;
        uVar6 = *(uint *)(iVar1 + 0x20) % uVar2;
        if (uVar6 == 0) {
          uVar6 = uVar2;
        }
        *(uint *)(iVar1 + 0x45) = uVar6;
        if (10 < *(int *)((int)piVar3 + 0x169) + iVar7) {
          *(undefined4 *)(*piVar3 + 0x14) = 0xb;
          (**(code **)*piVar3)(piVar3);
        }
        if (0 < iVar7) {
          do {
            *(int **)((int)piVar3 + *(int *)((int)piVar3 + 0x169) * 4 + 0x16d) = param_1;
            iVar7 = iVar7 + -1;
            *(int *)((int)piVar3 + 0x169) = *(int *)((int)piVar3 + 0x169) + 1;
          } while (iVar7 != 0);
        }
        uVar6 = (int)param_1 + 1;
        piStack_4 = piStack_4 + 1;
        param_1 = (int *)uVar6;
      } while ((int)uVar6 < *(int *)((int)piVar3 + 0x14d));
    }
    return uVar6;
  }
  iVar1 = *(int *)((int)param_1 + 0x151);
  *(undefined4 *)((int)param_1 + 0x161) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)((int)param_1 + 0x165) = *(undefined4 *)(iVar1 + 0x20);
  uVar6 = *(uint *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x3d) = *(undefined4 *)(iVar1 + 0x24);
  uVar2 = *(uint *)(iVar1 + 0x20);
  uVar5 = uVar2 % uVar6;
  *(undefined4 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(iVar1 + 0x35) = 1;
  *(undefined4 *)(iVar1 + 0x39) = 1;
  *(undefined4 *)(iVar1 + 0x41) = 1;
  if (uVar5 == 0) {
    uVar5 = uVar6;
  }
  *(uint *)(iVar1 + 0x45) = uVar5;
  *(undefined4 *)((int)param_1 + 0x169) = 1;
  *(undefined4 *)((int)param_1 + 0x16d) = 0;
  return uVar2 / uVar6;
}


