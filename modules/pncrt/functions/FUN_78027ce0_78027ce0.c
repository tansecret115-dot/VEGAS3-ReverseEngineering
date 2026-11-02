/* Module: pncrt.dll
   Function: FUN_78027ce0
   Address: 78027ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_78027ce0(int param_1)

{
  char cVar1;
  char *pcVar2;
  ulong _Val;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar5 = &DAT_78042650;
  if (param_1 != 0) {
    pcVar5 = &DAT_78042660;
  }
  *(undefined2 *)pcVar5 = _DAT_78037988;
  pcVar2 = pcVar5 + 1;
  if ((*pcVar5 != '\\') && (*pcVar5 != '/')) {
    *pcVar2 = '\\';
    pcVar2 = pcVar5 + 2;
  }
  if (param_1 == 0) {
    *pcVar2 = 's';
  }
  else {
    *pcVar2 = 't';
  }
  pcVar2 = pcVar2 + 1;
  iVar7 = 0x20;
  _Val = getpid();
  _ultoa(_Val,pcVar2,iVar7);
  uVar3 = 0xffffffff;
  pcVar2 = ".";
  do {
    pcVar6 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar7 = -1;
  do {
    pcVar2 = pcVar5;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar2 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar2;
  } while (cVar1 != '\0');
  pcVar5 = pcVar6 + -uVar3;
  pcVar2 = pcVar2 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return;
}


