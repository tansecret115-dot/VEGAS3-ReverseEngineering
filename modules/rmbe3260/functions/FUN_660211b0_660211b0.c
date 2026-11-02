/* Module: rmbe3260.dll
   Function: FUN_660211b0
   Address: 660211b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660211b0(int param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_2 != (char *)0x0) {
    iVar3 = -1;
    pcVar4 = param_2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x198));
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x1a0)) {
        do {
          piVar2 = *(int **)(*(int *)(param_1 + 0x19c) + iVar3 * 4);
          (**(code **)(*piVar2 + 0xc))(piVar2,param_2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x1a0));
      }
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x198));
      return 0;
    }
  }
  return 0x80004003;
}


