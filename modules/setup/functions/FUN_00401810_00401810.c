/* Module: Setup.exe
   Function: FUN_00401810
   Address: 00401810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401810(char *param_1,int *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char local_100 [256];
  
  iVar6 = 0;
  cVar4 = *param_1;
  if (cVar4 != '\0') {
    pcVar2 = param_1;
    do {
      if ((cVar4 == '.') || (0xff < iVar6)) break;
      iVar6 = iVar6 + 1;
      pcVar2[(int)(local_100 + -(int)param_1)] = *pcVar2;
      cVar4 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    } while (cVar4 != '\0');
    if ((iVar6 != 0) && (iVar6 != 0x100)) {
      local_100[iVar6] = '\0';
      iVar6 = iVar6 + 1;
      iVar3 = atoi(local_100);
      iVar5 = 0;
      *param_2 = iVar3;
      cVar4 = param_1[iVar6];
      if (cVar4 != '\0') {
        do {
          if ((cVar4 == '.') || (0xff < iVar5)) break;
          local_100[iVar5] = cVar4;
          cVar4 = param_1[iVar6 + 1];
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 1;
        } while (cVar4 != '\0');
        if ((iVar5 != 0) && (iVar5 != 0x100)) {
          local_100[iVar5] = '\0';
          iVar3 = atoi(local_100);
          param_2[1] = iVar3;
          iVar3 = 0;
          pcVar2 = param_1 + iVar6 + 1;
          if (param_1[iVar6 + 1] != '\0') {
            do {
              if (0xff < iVar3) break;
              local_100[iVar3] = *pcVar2;
              pcVar1 = pcVar2 + 1;
              iVar3 = iVar3 + 1;
              pcVar2 = pcVar2 + 1;
            } while (*pcVar1 != '\0');
            if ((iVar3 != 0) && (iVar3 != 0x100)) {
              local_100[iVar3] = '\0';
              iVar6 = atoi(local_100);
              param_2[2] = iVar6;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0xffffffff;
}


