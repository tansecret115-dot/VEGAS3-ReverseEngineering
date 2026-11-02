/* Module: sfcdi.dll
   Function: FUN_5bf11ae0
   Address: 5bf11ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_5bf11ae0(char *param_1,char *param_2,int param_3,int *param_4)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  *param_4 = 0;
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_2;
  }
  uVar5 = 0;
  iVar1 = 0;
  do {
    iVar4 = iVar1;
    pcVar2 = param_2;
    if (uVar5 < param_3 - 1U) {
      if ((cVar3 == '\r') || (cVar3 == '\n')) {
        for (; (*pcVar2 == '\r' || (*pcVar2 == '\n')); pcVar2 = pcVar2 + 1) {
          iVar4 = iVar4 + 1;
        }
        *param_1 = '\0';
        *param_4 = iVar4;
        return pcVar2;
      }
      *param_1 = cVar3;
      param_1 = param_1 + 1;
      uVar5 = uVar5 + 1;
    }
    cVar3 = pcVar2[1];
    param_2 = pcVar2 + 1;
    iVar1 = iVar4 + 1;
    if (cVar3 == '\0') {
      *param_1 = '\0';
      *param_4 = iVar4 + 2;
      return pcVar2 + 2;
    }
  } while( true );
}


