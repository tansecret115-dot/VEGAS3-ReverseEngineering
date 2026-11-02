/* Module: erv23260.dll
   Function: FUN_637fccc0
   Address: 637fccc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_637fccc0(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if ((*(int *)((int)param_1 + 0x60) != 0) || (*(int *)((int)param_1 + 0xb4) == 0)) {
    return 1;
  }
  uVar2 = FUN_637fd250((int)param_1);
  iVar3 = FUN_637fd280((int)param_1);
  if ((uVar2 < (uint)(*(int *)(*(int *)((int)param_1 + 0xb8) + 4) << 3)) ||
     ((uint)(iVar3 * 8) <= uVar2)) {
    return 0;
  }
  uVar1 = *(uint *)((int)param_1 + 0xb4);
  uVar5 = 1;
  if (1 < uVar1) {
    piVar4 = (int *)(*(int *)((int)param_1 + 0xb8) + 0xc);
    do {
      if (uVar2 < (uint)(*piVar4 << 3)) break;
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar5 < uVar1);
  }
  if (uVar5 == uVar1) {
    uVar2 = iVar3 * 8 - uVar2;
    if ((uVar2 < 8) && (iVar3 = FUN_637fd600(param_1,uVar2,0,0), iVar3 != 0)) {
      return 0;
    }
  }
  else {
    uVar2 = *(int *)(uVar5 * 8 + 4 + *(int *)((int)param_1 + 0xb8)) * 8 - uVar2;
    if ((uVar2 < 8) && (iVar3 = FUN_637fd600(param_1,uVar2,0,0), iVar3 != 0)) {
      return *(undefined4 *)(*(int *)((int)param_1 + 0xb8) + uVar5 * 8);
    }
  }
  return *(undefined4 *)(*(int *)((int)param_1 + 0xb8) + -8 + uVar5 * 8);
}


