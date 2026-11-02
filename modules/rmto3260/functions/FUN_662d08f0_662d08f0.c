/* Module: rmto3260.dll
   Function: FUN_662d08f0
   Address: 662d08f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662d08f0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  
  if (param_2 == (char *)0x0) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0xffffffff;
    pcVar2 = param_2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
  }
  pcVar2 = operator_new(uVar6);
  if (pcVar2 == (char *)0x0) {
    *param_1 = 0;
    return 0x8007000e;
  }
  if (param_2 == (char *)0x0) {
    *pcVar2 = '\0';
    *param_1 = pcVar2;
    return 0;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar4 = param_2;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar4 = pcVar4 + -uVar6;
  pcVar5 = pcVar2;
  for (uVar3 = uVar6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *param_1 = pcVar2;
  return 0;
}


