/* Module: sfpaplug.dll
   Function: FUN_00408240
   Address: 00408240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00408240(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x60);
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 0:
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        iVar3 = iVar3 + 1;
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x98);
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x94);
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x90);
        iVar1 = *piVar2;
        piVar2 = piVar2 + 1;
        *(int *)(param_1 + 0x90) = iVar1;
      } while (iVar3 < *(int *)(param_1 + 0x14));
      return 0;
    }
    break;
  case 1:
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        iVar3 = iVar3 + 1;
        *piVar2 = *piVar2 + *(int *)(param_1 + 0x90);
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x98);
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x94);
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x90);
        *(int *)(param_1 + 0x90) = *piVar2;
        piVar2 = piVar2 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x14));
      return 0;
    }
    break;
  case 2:
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        iVar3 = iVar3 + 1;
        *piVar2 = *piVar2 + (*(int *)(param_1 + 0x90) * 2 - *(int *)(param_1 + 0x94));
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x98);
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x94);
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x90);
        *(int *)(param_1 + 0x90) = *piVar2;
        piVar2 = piVar2 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x14));
      return 0;
    }
    break;
  case 3:
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        iVar3 = iVar3 + 1;
        *piVar2 = *piVar2 + (*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x94)) * 3 +
                            *(int *)(param_1 + 0x98);
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x98);
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x94);
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x90);
        *(int *)(param_1 + 0x90) = *piVar2;
        piVar2 = piVar2 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x14));
      return 0;
    }
    break;
  case 4:
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        iVar3 = iVar3 + 1;
        *piVar2 = *piVar2 + (((*(int *)(param_1 + 0x98) + *(int *)(param_1 + 0x90)) * 4 +
                             *(int *)(param_1 + 0x94) * -6) - *(int *)(param_1 + 0x9c));
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x98);
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x94);
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x90);
        *(int *)(param_1 + 0x90) = *piVar2;
        piVar2 = piVar2 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x14));
    }
    break;
  default:
    return 0xffffffff;
  }
  return 0;
}


