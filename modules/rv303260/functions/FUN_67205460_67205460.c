/* Module: rv303260.dll
   Function: FUN_67205460
   Address: 67205460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_67205460(int param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = (int *)(param_1 + 8);
  dVar1 = *(double *)(*(int *)(param_1 + 8) + 0x19e);
  if (*(int *)(param_1 + 0xfe) != 0) {
    dVar3 = _DAT_67213120;
    for (uVar5 = (uint)*(ushort *)(param_1 + 0xf4); uVar5 != 0; uVar5 = uVar5 - 1) {
      iVar2 = *piVar4;
      piVar4 = piVar4 + 1;
      dVar3 = *(double *)(iVar2 + 0x13a) + dVar3;
    }
    *(undefined4 *)(param_1 + 0xd0) = 0;
    while (iVar2 = *(int *)(param_1 + 0xd0) + 1,
          (double)*(float *)(param_1 + 0xcc) <= (dVar1 * dVar3) / ((double)iVar2 * _DAT_672130f0)) {
      *(int *)(param_1 + 0xd0) = iVar2;
      if (0x1f < iVar2) {
        return 0;
      }
    }
  }
  return 0;
}


