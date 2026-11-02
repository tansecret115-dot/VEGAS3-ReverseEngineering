/* Module: vegas30k.dll
   Function: FUN_010ab310
   Address: 010ab310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010ab310(int param_1)

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
  if (DAT_012062b4 < param_1) {
    return iVar6 * param_1;
  }
  iVar3 = 1;
  if (DAT_01206284 < param_1) {
    puVar5 = &DAT_01206284;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar3 = iVar3 + 1;
    } while (*piVar1 < param_1);
  }
  iVar2 = *(int *)(iVar3 * 8 + 0x1206274);
  iVar4 = iVar3 + -1;
  return ((&DAT_01206278)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar2) *
               (longlong)(int)((&DAT_01206280)[iVar4 * 2] - (&DAT_01206278)[iVar4 * 2])) /
              (longlong)((&DAT_0120627c)[iVar3 * 2] - iVar2))) * iVar6;
}


