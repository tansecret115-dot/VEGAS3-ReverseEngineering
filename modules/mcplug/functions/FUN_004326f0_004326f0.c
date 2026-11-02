/* Module: mcplug.dll
   Function: FUN_004326f0
   Address: 004326f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004326f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 1;
  if (param_1 < 0) {
    param_1 = -param_1;
    iVar6 = -1;
  }
  if (param_2 != 0) {
    if (DAT_004874dc < param_1) {
      return iVar6 * param_1;
    }
    iVar2 = 1;
    if (DAT_00487474 < param_1) {
      puVar5 = &DAT_00487474;
      do {
        piVar1 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + 1;
      } while (*piVar1 < param_1);
    }
    iVar3 = iVar2 + -1;
    return ((&DAT_00487468)[iVar3 * 2] +
           (int)(((longlong)(param_1 - (&DAT_00487464)[iVar2 * 2]) *
                 (longlong)(int)((&DAT_00487470)[iVar3 * 2] - (&DAT_00487468)[iVar3 * 2])) /
                (longlong)((&DAT_0048746c)[iVar2 * 2] - (&DAT_00487464)[iVar2 * 2]))) * iVar6;
  }
  if (DAT_00487464 < param_1) {
    return iVar6 * param_1;
  }
  iVar2 = 1;
  if (DAT_00487434 < param_1) {
    puVar5 = &DAT_00487434;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = *(int *)(iVar2 * 8 + 0x487424);
  iVar4 = iVar2 + -1;
  return ((&DAT_00487428)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar3) *
               (longlong)(int)((&DAT_00487430)[iVar4 * 2] - (&DAT_00487428)[iVar4 * 2])) /
              (longlong)((&DAT_0048742c)[iVar2 * 2] - iVar3))) * iVar6;
}


