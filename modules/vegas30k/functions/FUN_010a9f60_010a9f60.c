/* Module: vegas30k.dll
   Function: FUN_010a9f60
   Address: 010a9f60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010a9f60(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 1;
  if (param_1 < 0) {
    param_1 = -param_1;
    iVar5 = -1;
  }
  if (DAT_012062b0 < param_1) {
    return iVar5 * param_1;
  }
  iVar2 = 1;
  if (DAT_01206280 < param_1) {
    puVar4 = &DAT_01206280;
    do {
      piVar1 = puVar4 + 2;
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = iVar2 + -1;
  return ((&DAT_0120627c)[iVar3 * 2] +
         (int)(((longlong)(param_1 - (int)(&PTR_LAB_01206270)[iVar2 * 2]) *
               (longlong)(int)((&DAT_01206284)[iVar3 * 2] - (&DAT_0120627c)[iVar3 * 2])) /
              (longlong)((&DAT_01206278)[iVar2 * 2] - (int)(&PTR_LAB_01206270)[iVar2 * 2]))) * iVar5
  ;
}


