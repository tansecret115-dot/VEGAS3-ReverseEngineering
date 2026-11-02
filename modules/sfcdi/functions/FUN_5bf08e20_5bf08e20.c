/* Module: sfcdi.dll
   Function: FUN_5bf08e20
   Address: 5bf08e20
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_5bf08e20(char *param_1,char *param_2,int param_3,int *param_4)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  
  *param_4 = 0;
  cVar3 = *param_2;
  if (cVar3 != '\0') {
    uVar4 = 0;
    iVar1 = 0;
    do {
      iVar5 = iVar1;
      pcVar2 = param_2;
      if (uVar4 < param_3 - 1U) {
        *param_1 = cVar3;
        param_1 = param_1 + 1;
        uVar4 = uVar4 + 1;
      }
      param_2 = pcVar2 + 1;
      cVar3 = *param_2;
      iVar1 = iVar5 + 1;
    } while (cVar3 != '\0');
    *param_1 = '\0';
    *param_4 = iVar5 + 2;
    param_2 = pcVar2 + 2;
  }
  return param_2;
}


