/* Module: rv203260.dll
   Function: FUN_638a5050
   Address: 638a5050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_638a5050(int param_1)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  uVar6 = (uint)*(ushort *)(param_1 + 0xf4);
  dVar1 = _DAT_638b3118;
  if (uVar6 != 0) {
    piVar2 = (int *)(param_1 + 8);
    uVar5 = uVar6;
    do {
      iVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      uVar5 = uVar5 - 1;
      dVar1 = dVar1 + *(double *)(iVar3 + 0x14a);
    } while (uVar5 != 0);
  }
  if (*(int *)(param_1 + 0xfe) != 0) {
    if (dVar1 + *(double *)(param_1 + 0x10a) < (double)*(float *)(param_1 + 0xcc)) {
      iVar3 = *(int *)(param_1 + 200) + 1;
    }
    else {
      iVar3 = *(int *)(param_1 + 200) + -2;
    }
    *(int *)(param_1 + 200) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 200) = 0;
    }
    if (0x1f < *(int *)(param_1 + 200)) {
      *(undefined4 *)(param_1 + 200) = 0x1f;
    }
    *(int *)(param_1 + 0xd0) = (0x1f - *(int *)(param_1 + 200)) / 2;
    if (uVar6 != 0) {
      piVar2 = (int *)(param_1 + 8);
      do {
        uVar4 = ftol();
        iVar3 = *piVar2;
        iVar7 = iVar7 + 1;
        piVar2 = piVar2 + 1;
        *(undefined4 *)(iVar3 + 0x13a) = uVar4;
      } while (iVar7 < (int)(uint)*(ushort *)(param_1 + 0xf4));
      return 0;
    }
  }
  return 0;
}


