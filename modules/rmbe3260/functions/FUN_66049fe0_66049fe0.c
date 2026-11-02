/* Module: rmbe3260.dll
   Function: FUN_66049fe0
   Address: 66049fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


short __fastcall FUN_66049fe0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  char *pcVar5;
  
  sVar4 = (short)((ulonglong)*(ushort *)(param_1 + 0x50) /
                 (ulonglong)(longlong)(int)(uint)*(ushort *)(param_1 + 0x52)) *
          *(short *)(param_1 + 0x4e) * (ushort)*(byte *)(param_1 + 0x54) * 2 + 0x3e +
          *(short *)(param_1 + 0x59);
  if (*(char **)(param_1 + 0x67) != (char *)0x0) {
    iVar2 = -1;
    pcVar5 = *(char **)(param_1 + 0x67);
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    sVar4 = sVar4 + (~(ushort)iVar2 - 1);
  }
  if (*(char **)(param_1 + 0x6b) != (char *)0x0) {
    iVar2 = -1;
    pcVar5 = *(char **)(param_1 + 0x6b);
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    sVar4 = sVar4 + (~(ushort)iVar2 - 1);
  }
  if (*(char **)(param_1 + 0x6f) != (char *)0x0) {
    iVar2 = -1;
    pcVar5 = *(char **)(param_1 + 0x6f);
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    sVar4 = sVar4 + (~(ushort)iVar2 - 1);
  }
  if (*(char **)(param_1 + 0x73) != (char *)0x0) {
    iVar2 = -1;
    pcVar5 = *(char **)(param_1 + 0x73);
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    sVar4 = sVar4 + (~(ushort)iVar2 - 1);
  }
  iVar2 = -1;
  pcVar5 = (char *)(param_1 + 0x44);
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar3 = -1;
  pcVar5 = (char *)(param_1 + 0x49);
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  return sVar4 + ~(ushort)iVar2 + (~(ushort)iVar3 - 2);
}


