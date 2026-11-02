/* Module: vegas30k.dll
   Function: ISO9660_achCpyPadSpace
   Address: 01074310
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall ISO9660_achCpyPadSpace(char *,int,char const *) */

void ISO9660_achCpyPadSpace(char *param_1,int param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
                    /* 0x74310  115  ?ISO9660_achCpyPadSpace@@YGXPADHPBD@Z */
  uVar1 = lstrlenA(param_3);
  if (param_2 < (int)uVar1) {
    uVar1 = param_2;
  }
  pcVar4 = param_1;
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)param_3;
    param_3 = param_3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  uVar2 = param_2 - uVar1;
  for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar4 = *param_3;
    param_3 = param_3 + 1;
    pcVar4 = pcVar4 + 1;
  }
  if (uVar2 != 0) {
    uVar3 = uVar2 >> 2;
    pcVar4 = param_1 + uVar1;
    while (uVar3 != 0) {
      uVar3 = uVar3 - 1;
      builtin_strncpy(pcVar4,"    ",4);
      pcVar4 = pcVar4 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar4 = ' ';
      pcVar4 = pcVar4 + 1;
    }
  }
  return;
}


