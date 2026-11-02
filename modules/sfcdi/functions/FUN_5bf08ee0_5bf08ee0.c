/* Module: sfcdi.dll
   Function: FUN_5bf08ee0
   Address: 5bf08ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_5bf08ee0(char *param_1,LPSTR param_2,LPSTR param_3,char *param_4,size_t param_5,
                   int *param_6)

{
  char *pcVar1;
  int iVar2;
  char local_150 [40];
  char local_128 [40];
  char local_100 [256];
  
  *param_2 = '\0';
  *param_3 = '\0';
  if (param_4 != (char *)0x0) {
    *param_4 = '\0';
  }
  if (*param_1 != '\0') {
    while (param_1 = FUN_5bf08e20(local_100,param_1,0x100,param_6), local_100[0] == ';') {
      if (*param_1 == '\0') {
        return param_1;
      }
    }
    pcVar1 = local_128;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1 = pcVar1 + 4;
    }
    pcVar1 = local_150;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1 = pcVar1 + 4;
    }
    pcVar1 = FUN_5bf08d70(local_128,local_100,0x28);
    pcVar1 = FUN_5bf08d70(local_150,pcVar1,0x28);
    lstrcpyA(param_2,local_128);
    lstrcpyA(param_3,local_150);
    if ((param_4 != (char *)0x0) && (param_5 != 0)) {
      strncpy(param_4,pcVar1,param_5);
    }
  }
  return param_1;
}


