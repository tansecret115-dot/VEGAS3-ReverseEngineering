/* Module: sfcdi.dll
   Function: FUN_5bf09260
   Address: 5bf09260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf09260(char *param_1,char *param_2,int param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  *param_4 = 0;
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    uVar2 = 0;
    iVar3 = 0;
    do {
      if ((cVar1 == '\r') || (cVar1 == '\n')) break;
      if (uVar2 < param_3 - 1U) {
        *param_1 = cVar1;
        param_1 = param_1 + 1;
        uVar2 = uVar2 + 1;
      }
      param_2 = param_2 + 1;
      cVar1 = *param_2;
      iVar3 = iVar3 + 1;
    } while (cVar1 != '\0');
    *param_1 = '\0';
    if (*param_2 == '\0') goto LAB_5bf092af;
    do {
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
LAB_5bf092af:
    } while ((*param_2 == '\r') || (*param_2 == '\n'));
    *param_4 = iVar3;
  }
  return;
}


