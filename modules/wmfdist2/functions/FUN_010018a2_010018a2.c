/* Module: wmfdist2.exe
   Function: FUN_010018a2
   Address: 010018a2
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_010018a2(undefined4 *param_1,short *param_2)

{
  char cVar1;
  short *psVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)*param_1;
  iVar5 = 0;
  while( true ) {
    psVar2 = FUN_01005bb1(param_2,(short)*pcVar4);
    if (psVar2 == (short *)0x0) {
      *param_1 = pcVar4;
      cVar1 = *pcVar4;
      for (; (psVar2 = FUN_01005bb1(param_2,(short)cVar1), psVar2 == (short *)0x0 &&
             (pcVar4[iVar5] != '\0')); iVar5 = iVar5 + 1) {
        cVar1 = pcVar4[iVar5 + 1];
      }
      pcVar3 = pcVar4 + iVar5;
      if (pcVar4[iVar5] != '\0') {
        *pcVar3 = '\0';
        pcVar3 = pcVar3 + 1;
      }
      return pcVar3;
    }
    if (*pcVar4 == '\0') break;
    pcVar4 = pcVar4 + 1;
  }
  return (char *)0x0;
}


