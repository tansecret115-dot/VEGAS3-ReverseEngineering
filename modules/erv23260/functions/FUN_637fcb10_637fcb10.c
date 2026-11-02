/* Module: erv23260.dll
   Function: FUN_637fcb10
   Address: 637fcb10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_637fcb10(void *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar6 = 1;
  if (*(int *)((int)param_1 + 0x60) == 0) {
    if (*(int *)((int)param_1 + 0xb4) == 0) {
      uVar6 = 0;
    }
    else {
      iVar3 = FUN_637fd280((int)param_1);
      uVar7 = iVar3 << 3;
      uVar4 = FUN_637fd250((int)param_1);
      uVar5 = 1;
      uVar2 = uVar7;
      if (1 < *(uint *)((int)param_1 + 0xb4)) {
        piVar1 = *(int **)((int)param_1 + 0xb8);
        do {
          if ((piVar1[2] != 0) && (uVar4 <= (uint)(piVar1[3] << 3))) {
            uVar2 = *(int *)(*(int *)((int)param_1 + 0xb8) + 4 + uVar5 * 8) << 3;
            break;
          }
          uVar5 = uVar5 + 1;
          piVar1 = piVar1 + 2;
        } while (uVar5 < *(uint *)((int)param_1 + 0xb4));
      }
      uVar6 = 2;
      if (uVar2 != uVar7) {
        uVar6 = 1;
      }
      if (uVar4 < uVar2) {
        FUN_637fd2f0(param_1,uVar2 - uVar4);
        return uVar6;
      }
    }
  }
  else {
    uVar2 = FUN_637fd250((int)param_1);
    iVar3 = FUN_637ffdb0((void *)((int)param_1 + 0x18),uVar2);
    if (iVar3 == 0) {
      uVar6 = 2;
      uVar4 = *(int *)((int)param_1 + 0x4c) << 3;
    }
    else if (*(int *)((int)param_1 + 0x48) == 0x33363248) {
      uVar4 = *(uint *)(*(int *)((int)param_1 + 0x2c) + 4);
    }
    else {
      uVar4 = *(uint *)(*(int *)((int)param_1 + 0x2c) + 4);
    }
    if (uVar2 < uVar4) {
      FUN_637fd2f0(param_1,uVar4 - uVar2);
      return uVar6;
    }
  }
  return uVar6;
}


