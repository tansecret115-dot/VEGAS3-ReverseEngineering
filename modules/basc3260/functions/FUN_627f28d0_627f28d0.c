/* Module: basc3260.dll
   Function: FUN_627f28d0
   Address: 627f28d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f28d0(uint *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar1 = strchr((char *)*param_1,0x3d);
  if (pcVar1 != (char *)0x0) {
    iVar2 = isspace((int)pcVar1[-1]);
    for (; (iVar2 != 0 && ((char *)*param_1 < pcVar1)); pcVar1 = pcVar1 + -1) {
      iVar2 = isspace((int)pcVar1[-2]);
    }
    pcVar3 = (char *)*param_1;
    if ((pcVar3 < pcVar1) && ((int)pcVar1 - (int)pcVar3 < 0xc9)) {
      strncpy(param_2,pcVar3,(int)pcVar1 - (int)pcVar3);
      param_2[(int)pcVar1 - *param_1] = '\0';
      pcVar1 = strchr(pcVar1,0x22);
      if (pcVar1 != (char *)0x0) {
        pcVar3 = strchr(pcVar1 + 1,0x22);
        if ((pcVar3 != (char *)0x0) && (iVar2 = (int)pcVar3 - (int)pcVar1, iVar2 < 0xc9)) {
          strncpy(param_3,pcVar1 + 1,iVar2 - 1);
          param_3[iVar2 + -1] = '\0';
          *param_1 = (uint)(pcVar3 + 1);
          return 1;
        }
      }
    }
  }
  return 0;
}


