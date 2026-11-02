/* Module: vegas30k.dll
   Function: FUN_0111c310
   Address: 0111c310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0111c310(int param_1,int param_2)

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
    if (DAT_01206c84 < param_1) {
      return iVar6 * param_1;
    }
    iVar2 = 1;
    if (DAT_01206c1c < param_1) {
      puVar5 = &DAT_01206c1c;
      do {
        piVar1 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + 1;
      } while (*piVar1 < param_1);
    }
    iVar3 = iVar2 + -1;
    return ((&DAT_01206c10)[iVar3 * 2] +
           (int)(((longlong)(param_1 - (&DAT_01206c0c)[iVar2 * 2]) *
                 (longlong)(int)((&DAT_01206c18)[iVar3 * 2] - (&DAT_01206c10)[iVar3 * 2])) /
                (longlong)((&DAT_01206c14)[iVar2 * 2] - (&DAT_01206c0c)[iVar2 * 2]))) * iVar6;
  }
  if (DAT_01206c0c < param_1) {
    return iVar6 * param_1;
  }
  iVar2 = 1;
  if (DAT_01206bdc < param_1) {
    puVar5 = &DAT_01206bdc;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = *(int *)(iVar2 * 8 + 0x1206bcc);
  iVar4 = iVar2 + -1;
  return ((&DAT_01206bd0)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar3) *
               (longlong)(int)((&DAT_01206bd8)[iVar4 * 2] - (&DAT_01206bd0)[iVar4 * 2])) /
              (longlong)((&DAT_01206bd4)[iVar2 * 2] - iVar3))) * iVar6;
}


