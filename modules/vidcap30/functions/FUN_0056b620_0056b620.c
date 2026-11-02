/* Module: vidcap30.exe
   Function: FUN_0056b620
   Address: 0056b620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0056b620(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piStack_4;
  
  piVar3 = param_1;
  iVar5 = *(int *)((int)param_1 + 0x111);
  if (iVar5 == 1) {
    iVar5 = *(int *)((int)param_1 + 0x115);
    *(undefined4 *)((int)param_1 + 0x125) = *(undefined4 *)(iVar5 + 0x1c);
    *(undefined4 *)((int)param_1 + 0x129) = *(undefined4 *)(iVar5 + 0x20);
    uVar6 = *(uint *)(iVar5 + 0x20) % *(uint *)(iVar5 + 0xc);
    *(undefined4 *)(iVar5 + 0x31) = 1;
    *(undefined4 *)(iVar5 + 0x35) = 1;
    *(undefined4 *)(iVar5 + 0x39) = 1;
    *(undefined4 *)(iVar5 + 0x3d) = 8;
    *(undefined4 *)(iVar5 + 0x41) = 1;
    if (uVar6 == 0) {
      uVar6 = *(uint *)(iVar5 + 0xc);
    }
    *(uint *)(iVar5 + 0x45) = uVar6;
    *(undefined4 *)((int)param_1 + 0x12d) = 1;
    *(undefined4 *)((int)param_1 + 0x131) = 0;
  }
  else {
    if ((iVar5 < 1) || (4 < iVar5)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x18;
      *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x111);
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)(param_1);
    }
    uVar4 = FUN_0055eb60(*(undefined4 *)((int)param_1 + 0x55),*(int *)((int)param_1 + 0x105) << 3);
    *(undefined4 *)((int)param_1 + 0x125) = uVar4;
    uVar4 = FUN_0055eb60(*(undefined4 *)((int)param_1 + 0x59),*(int *)((int)param_1 + 0x109) << 3);
    *(undefined4 *)((int)param_1 + 0x129) = uVar4;
    piVar1 = (int *)((int)param_1 + 0x111);
    *(undefined4 *)((int)param_1 + 0x12d) = 0;
    param_1 = (int *)0x0;
    if (0 < *piVar1) {
      piStack_4 = (int *)((int)piVar3 + 0x115);
      do {
        iVar5 = *piStack_4;
        uVar6 = *(uint *)(iVar5 + 8);
        uVar2 = *(uint *)(iVar5 + 0xc);
        *(uint *)(iVar5 + 0x31) = uVar6;
        *(uint *)(iVar5 + 0x3d) = uVar6 * 8;
        uVar7 = *(uint *)(iVar5 + 0x1c) % uVar6;
        iVar8 = uVar2 * uVar6;
        *(uint *)(iVar5 + 0x35) = uVar2;
        *(int *)(iVar5 + 0x39) = iVar8;
        if (uVar7 == 0) {
          uVar7 = uVar6;
        }
        *(uint *)(iVar5 + 0x41) = uVar7;
        uVar6 = *(uint *)(iVar5 + 0x20) % uVar2;
        if (uVar6 == 0) {
          uVar6 = uVar2;
        }
        *(uint *)(iVar5 + 0x45) = uVar6;
        if (10 < *(int *)((int)piVar3 + 0x12d) + iVar8) {
          *(undefined4 *)(*piVar3 + 0x14) = 0xb;
          (**(code **)*piVar3)(piVar3);
        }
        if (0 < iVar8) {
          do {
            *(int **)((int)piVar3 + *(int *)((int)piVar3 + 0x12d) * 4 + 0x131) = param_1;
            iVar8 = iVar8 + -1;
            *(int *)((int)piVar3 + 0x12d) = *(int *)((int)piVar3 + 0x12d) + 1;
          } while (iVar8 != 0);
        }
        param_1 = (int *)((int)param_1 + 1);
        piStack_4 = piStack_4 + 1;
      } while ((int)param_1 < *(int *)((int)piVar3 + 0x111));
    }
  }
  if (0 < *(int *)((int)piVar3 + 0xf5)) {
    iVar5 = *(int *)((int)piVar3 + 0xf5) * *(int *)((int)piVar3 + 0x125);
    if (0xfffe < iVar5) {
      iVar5 = 0xffff;
    }
    *(int *)((int)piVar3 + 0xf1) = iVar5;
  }
  return;
}


