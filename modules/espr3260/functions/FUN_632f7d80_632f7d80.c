/* Module: espr3260.dll
   Function: FUN_632f7d80
   Address: 632f7d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_632f7d80(int param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < param_4) {
    iVar3 = param_4 - param_2;
    iVar1 = param_2 * 4;
    do {
      iVar2 = iVar1 + 4;
      iVar3 = iVar3 + -1;
      *(float *)(param_1 + -4 + iVar2) =
           *(float *)(param_1 + iVar1 + param_2 * -4) * param_3 + *(float *)(param_1 + -4 + iVar2);
      iVar1 = iVar2;
    } while (iVar3 != 0);
  }
  return;
}


