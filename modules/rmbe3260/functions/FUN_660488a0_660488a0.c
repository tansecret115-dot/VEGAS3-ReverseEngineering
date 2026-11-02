/* Module: rmbe3260.dll
   Function: FUN_660488a0
   Address: 660488a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_660488a0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0x12;
  if (*(char **)(param_1 + 0x67) != (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar4 = *(char **)(param_1 + 0x67);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = ~uVar2 + 0x11;
  }
  if (*(char **)(param_1 + 0x6b) != (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar4 = *(char **)(param_1 + 0x6b);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = iVar3 + (~uVar2 - 1);
  }
  if (*(char **)(param_1 + 0x6f) != (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar4 = *(char **)(param_1 + 0x6f);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = iVar3 + (~uVar2 - 1);
  }
  if (*(char **)(param_1 + 0x73) != (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar4 = *(char **)(param_1 + 0x73);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = iVar3 + (~uVar2 - 1);
  }
  uVar2 = 0xffffffff;
  pcVar4 = (char *)(param_1 + 0x44);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  return iVar3 + ~uVar2 + 5;
}


