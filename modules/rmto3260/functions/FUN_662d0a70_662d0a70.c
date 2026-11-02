/* Module: rmto3260.dll
   Function: FUN_662d0a70
   Address: 662d0a70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662d0a70(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char **ppcVar5;
  char *local_30;
  char *local_2c [4];
  char *local_1c [3];
  int local_10;
  int local_c;
  int local_8;
  
  pcVar1 = strtok(param_1,&DAT_6630ab64);
  pcVar2 = strtok((char *)0x0,&DAT_6630ab64);
  FUN_662ef160(local_1c,pcVar2);
  iVar4 = *(int *)(local_1c[0] + -8);
  while (iVar4 < 3) {
    FUN_662ef520(local_1c,&DAT_6630ab60);
    iVar4 = *(int *)(local_1c[0] + -8);
  }
  iVar4 = 0;
  local_30 = strtok(pcVar1,&DAT_6630ab5c);
  if (local_30 != (char *)0x0) {
    ppcVar5 = &local_30;
    do {
      iVar4 = iVar4 + 1;
      ppcVar5 = ppcVar5 + 1;
      pcVar1 = strtok((char *)0x0,&DAT_6630ab5c);
      *ppcVar5 = pcVar1;
    } while (pcVar1 != (char *)0x0);
  }
  iVar3 = 0;
  local_c = 0;
  local_8 = 0;
  param_1 = (char *)0x0;
  local_10 = atoi(local_1c[0]);
  if (iVar4 != 0) {
    local_c = atoi(local_1c[iVar4 + -6]);
    if (iVar4 != 1) {
      local_8 = atoi(local_1c[iVar4 + -7]);
      if (iVar4 != 2) {
        param_1 = (char *)atoi(local_1c[iVar4 + -8]);
        if (iVar4 != 3) {
          iVar3 = atoi(local_1c[iVar4 + -9]);
        }
      }
    }
  }
  FUN_662ef0f0((int *)local_1c);
  return local_10 + (local_c + (local_8 + (int)(param_1 + iVar3 * 0x18) * 0x3c) * 0x3c) * 1000;
}


