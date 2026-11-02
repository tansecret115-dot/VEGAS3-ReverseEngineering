/* Module: erv23260.dll
   Function: FUN_637fc3e0
   Address: 637fc3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_637fc3e0(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  if ((*(int *)((int)param_1 + 0x5c) == 0x15) || (*(int *)((int)param_1 + 0x5c) == 0x16)) {
    uVar3 = FUN_637fd250((int)param_1);
    uVar1 = *(uint *)((int)param_1 + 0xb4);
    uVar4 = 1;
    if (1 < uVar1) {
      piVar5 = (int *)(*(int *)((int)param_1 + 0xb8) + 0xc);
      do {
        if (uVar3 < (uint)(*piVar5 << 3)) break;
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 < uVar1);
    }
    if (uVar3 == *(int *)(*(int *)((int)param_1 + 0xb8) + -4 + uVar4 * 8) << 3) {
      return 1;
    }
    if ((uVar4 != uVar1) &&
       (uVar3 = *(int *)(*(int *)((int)param_1 + 0xb8) + uVar4 * 8 + 4) * 8 - uVar3, uVar3 < 8)) {
      iVar2 = FUN_637fd600(param_1,uVar3,0,0);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  else {
    iVar2 = FUN_637fd680(param_1,0x11,1,7);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


