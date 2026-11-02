/* Module: mp3rw.dll
   Function: FUN_00450890
   Address: 00450890
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00450890(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piStack_4;
  
  piVar2 = param_1;
  iVar3 = *(int *)((int)param_1 + 0x14d);
  if (iVar3 != 1) {
    if ((iVar3 < 1) || (4 < iVar3)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x18;
      *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x14d);
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)(param_1);
    }
    iVar3 = FUN_0047d770(*(int *)((int)param_1 + 0x55),*(int *)((int)param_1 + 0x139) << 3);
    *(int *)((int)param_1 + 0x161) = iVar3;
    iVar3 = FUN_0047d770(*(int *)((int)param_1 + 0x59),*(int *)((int)param_1 + 0x13d) << 3);
    *(int *)((int)param_1 + 0x165) = iVar3;
    piVar4 = *(int **)((int)param_1 + 0x14d);
    *(undefined4 *)((int)param_1 + 0x169) = 0;
    param_1 = (int *)0x0;
    if (0 < (int)piVar4) {
      piStack_4 = (int *)((int)piVar2 + 0x151);
      do {
        iVar3 = *piStack_4;
        uVar6 = *(uint *)(iVar3 + 8);
        *(uint *)(iVar3 + 0x3d) = *(int *)(iVar3 + 0x24) * uVar6;
        uVar5 = *(uint *)(iVar3 + 0x1c) % uVar6;
        uVar1 = *(uint *)(iVar3 + 0xc);
        *(uint *)(iVar3 + 0x31) = uVar6;
        *(uint *)(iVar3 + 0x35) = uVar1;
        iVar7 = uVar1 * uVar6;
        *(int *)(iVar3 + 0x39) = iVar7;
        if (uVar5 == 0) {
          uVar5 = uVar6;
        }
        *(uint *)(iVar3 + 0x41) = uVar5;
        uVar6 = *(uint *)(iVar3 + 0x20) % uVar1;
        if (uVar6 == 0) {
          uVar6 = uVar1;
        }
        *(uint *)(iVar3 + 0x45) = uVar6;
        if (10 < *(int *)((int)piVar2 + 0x169) + iVar7) {
          *(undefined4 *)(*piVar2 + 0x14) = 0xb;
          (**(code **)*piVar2)(piVar2);
        }
        if (0 < iVar7) {
          do {
            *(int **)((int)piVar2 + *(int *)((int)piVar2 + 0x169) * 4 + 0x16d) = param_1;
            iVar7 = iVar7 + -1;
            *(int *)((int)piVar2 + 0x169) = *(int *)((int)piVar2 + 0x169) + 1;
          } while (iVar7 != 0);
        }
        piVar4 = (int *)((int)param_1 + 1);
        piStack_4 = piStack_4 + 1;
        param_1 = piVar4;
      } while ((int)piVar4 < *(int *)((int)piVar2 + 0x14d));
    }
    return (uint)piVar4;
  }
  iVar3 = *(int *)((int)param_1 + 0x151);
  *(undefined4 *)((int)param_1 + 0x161) = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)((int)param_1 + 0x165) = *(undefined4 *)(iVar3 + 0x20);
  uVar6 = *(uint *)(iVar3 + 0xc);
  *(undefined4 *)(iVar3 + 0x3d) = *(undefined4 *)(iVar3 + 0x24);
  uVar1 = *(uint *)(iVar3 + 0x20);
  uVar5 = uVar1 % uVar6;
  *(undefined4 *)(iVar3 + 0x31) = 1;
  *(undefined4 *)(iVar3 + 0x35) = 1;
  *(undefined4 *)(iVar3 + 0x39) = 1;
  *(undefined4 *)(iVar3 + 0x41) = 1;
  if (uVar5 == 0) {
    uVar5 = uVar6;
  }
  *(uint *)(iVar3 + 0x45) = uVar5;
  *(undefined4 *)((int)param_1 + 0x169) = 1;
  *(undefined4 *)((int)param_1 + 0x16d) = 0;
  return uVar1 / uVar6;
}


