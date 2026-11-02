/* Module: mp3plug.dll
   Function: FUN_5f6ddbb0
   Address: 5f6ddbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f6ddbb0(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *in_EAX;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  if (DAT_5f7529b0 == 0) {
    return 0;
  }
  iVar2 = 0;
  cVar1 = *in_EAX;
  pcVar3 = in_EAX;
  while (cVar1 != '\0') {
    pcVar3 = pcVar3 + 1;
    iVar2 = iVar2 + 1;
    cVar1 = *pcVar3;
  }
  pcVar3 = (char *)FUN_5f6d9720(iVar2 + 1,1);
  *(char **)(DAT_5f7529b0 + DAT_5f73fd60 * 0x18) = pcVar3;
  if (pcVar3 != (char *)0x0) {
    do {
      cVar1 = *in_EAX;
      in_EAX = in_EAX + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar2 = 0;
    cVar1 = *param_2;
    pcVar3 = param_2;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      iVar2 = iVar2 + 1;
      cVar1 = *pcVar3;
    }
    pcVar3 = (char *)FUN_5f6d9720(iVar2 + 1,1);
    *(char **)(DAT_5f7529b0 + 4 + DAT_5f73fd60 * 0x18) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        *pcVar3 = cVar1;
        iVar2 = DAT_5f7529b0;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar4 = DAT_5f73fd60 * 0x18;
      *(undefined4 *)(DAT_5f7529b0 + 0x14 + iVar4) = 1;
      *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
      *(undefined4 *)(iVar2 + 8 + iVar4) = 0;
      *(undefined4 *)(iVar2 + 0xc + iVar4) = param_1;
      DAT_5f73fd60 = DAT_5f73fd60 + 1;
      return 0;
    }
  }
  return 9;
}


