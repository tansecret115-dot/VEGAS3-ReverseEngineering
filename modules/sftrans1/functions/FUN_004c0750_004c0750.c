/* Module: sftrans1.dll
   Function: FUN_004c0750
   Address: 004c0750
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004c0750(int param_1,int param_2)

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
    if (DAT_00575a0c < param_1) {
      return iVar6 * param_1;
    }
    iVar2 = 1;
    if (DAT_005759a4 < param_1) {
      puVar5 = &DAT_005759a4;
      do {
        piVar1 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + 1;
      } while (*piVar1 < param_1);
    }
    iVar3 = iVar2 + -1;
    return ((&DAT_00575998)[iVar3 * 2] +
           (int)(((longlong)(param_1 - (&DAT_00575994)[iVar2 * 2]) *
                 (longlong)(int)((&DAT_005759a0)[iVar3 * 2] - (&DAT_00575998)[iVar3 * 2])) /
                (longlong)((&DAT_0057599c)[iVar2 * 2] - (&DAT_00575994)[iVar2 * 2]))) * iVar6;
  }
  if (DAT_00575994 < param_1) {
    return iVar6 * param_1;
  }
  iVar2 = 1;
  if (DAT_00575964 < param_1) {
    puVar5 = &DAT_00575964;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = *(int *)(iVar2 * 8 + 0x575954);
  iVar4 = iVar2 + -1;
  return ((&DAT_00575958)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar3) *
               (longlong)(int)((&DAT_00575960)[iVar4 * 2] - (&DAT_00575958)[iVar4 * 2])) /
              (longlong)((&DAT_0057595c)[iVar2 * 2] - iVar3))) * iVar6;
}


