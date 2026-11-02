/* Module: rmbe3260.dll
   Function: FUN_66042960
   Address: 66042960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66042960(undefined4 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_RA32XXXX_DLL_6606e5d8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_2[7] = (char)param_1;
  param_2[4] = (char)((uint)param_1 >> 0x18);
  param_2[5] = (char)((uint)param_1 >> 0x10);
  param_2[6] = (char)((uint)param_1 >> 8);
  return 1;
}


