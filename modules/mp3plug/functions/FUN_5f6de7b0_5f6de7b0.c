/* Module: mp3plug.dll
   Function: FUN_5f6de7b0
   Address: 5f6de7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6de7b0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((param_1 != (char *)0x0) && (DAT_5f7529c4 < 0x14)) {
    uVar4 = FUN_5f6ddbb0(0,param_2);
    iVar2 = 0;
    cVar1 = *param_1;
    pcVar3 = param_1;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      iVar2 = iVar2 + 1;
      cVar1 = *pcVar3;
    }
    pcVar3 = (char *)FUN_5f6d9760(iVar2 + 1);
    *(char **)(DAT_5f7529c8 + DAT_5f7529c4 * 4) = pcVar3;
    if (pcVar3 == (char *)0x0) {
      return 9;
    }
    strncpy(pcVar3,param_1,iVar2 + 1);
    DAT_5f7529c4 = DAT_5f7529c4 + 1;
  }
  return uVar4;
}


