/* Module: mp3rw.dll
   Function: FUN_004891d0
   Address: 004891d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004891d0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piStack_4;
  
  piVar3 = param_1;
  iVar4 = *(int *)((int)param_1 + 0x111);
  if (iVar4 == 1) {
    iVar4 = *(int *)((int)param_1 + 0x115);
    *(undefined4 *)((int)param_1 + 0x125) = *(undefined4 *)(iVar4 + 0x1c);
    *(undefined4 *)((int)param_1 + 0x129) = *(undefined4 *)(iVar4 + 0x20);
    uVar5 = *(uint *)(iVar4 + 0x20) % *(uint *)(iVar4 + 0xc);
    *(undefined4 *)(iVar4 + 0x31) = 1;
    *(undefined4 *)(iVar4 + 0x35) = 1;
    *(undefined4 *)(iVar4 + 0x39) = 1;
    *(undefined4 *)(iVar4 + 0x3d) = 8;
    *(undefined4 *)(iVar4 + 0x41) = 1;
    if (uVar5 == 0) {
      uVar5 = *(uint *)(iVar4 + 0xc);
    }
    *(uint *)(iVar4 + 0x45) = uVar5;
    *(undefined4 *)((int)param_1 + 0x12d) = 1;
    *(undefined4 *)((int)param_1 + 0x131) = 0;
  }
  else {
    if ((iVar4 < 1) || (4 < iVar4)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x18;
      *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x111);
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)(param_1);
    }
    iVar4 = FUN_0047d770(*(int *)((int)param_1 + 0x55),*(int *)((int)param_1 + 0x105) << 3);
    *(int *)((int)param_1 + 0x125) = iVar4;
    iVar4 = FUN_0047d770(*(int *)((int)param_1 + 0x59),*(int *)((int)param_1 + 0x109) << 3);
    *(int *)((int)param_1 + 0x129) = iVar4;
    piVar1 = (int *)((int)param_1 + 0x111);
    *(undefined4 *)((int)param_1 + 0x12d) = 0;
    param_1 = (int *)0x0;
    if (0 < *piVar1) {
      piStack_4 = (int *)((int)piVar3 + 0x115);
      do {
        iVar4 = *piStack_4;
        uVar5 = *(uint *)(iVar4 + 8);
        uVar2 = *(uint *)(iVar4 + 0xc);
        *(uint *)(iVar4 + 0x31) = uVar5;
        *(uint *)(iVar4 + 0x3d) = uVar5 * 8;
        uVar6 = *(uint *)(iVar4 + 0x1c) % uVar5;
        iVar7 = uVar2 * uVar5;
        *(uint *)(iVar4 + 0x35) = uVar2;
        *(int *)(iVar4 + 0x39) = iVar7;
        if (uVar6 == 0) {
          uVar6 = uVar5;
        }
        *(uint *)(iVar4 + 0x41) = uVar6;
        uVar5 = *(uint *)(iVar4 + 0x20) % uVar2;
        if (uVar5 == 0) {
          uVar5 = uVar2;
        }
        *(uint *)(iVar4 + 0x45) = uVar5;
        if (10 < *(int *)((int)piVar3 + 0x12d) + iVar7) {
          *(undefined4 *)(*piVar3 + 0x14) = 0xb;
          (**(code **)*piVar3)(piVar3);
        }
        if (0 < iVar7) {
          do {
            *(int **)((int)piVar3 + *(int *)((int)piVar3 + 0x12d) * 4 + 0x131) = param_1;
            iVar7 = iVar7 + -1;
            *(int *)((int)piVar3 + 0x12d) = *(int *)((int)piVar3 + 0x12d) + 1;
          } while (iVar7 != 0);
        }
        param_1 = (int *)((int)param_1 + 1);
        piStack_4 = piStack_4 + 1;
      } while ((int)param_1 < *(int *)((int)piVar3 + 0x111));
    }
  }
  if (0 < *(int *)((int)piVar3 + 0xf5)) {
    iVar4 = *(int *)((int)piVar3 + 0xf5) * *(int *)((int)piVar3 + 0x125);
    if (0xfffe < iVar4) {
      iVar4 = 0xffff;
    }
    *(int *)((int)piVar3 + 0xf1) = iVar4;
  }
  return;
}


