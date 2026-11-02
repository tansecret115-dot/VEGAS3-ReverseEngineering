/* Module: rmto3260.dll
   Function: FUN_662fb880
   Address: 662fb880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662fb880(void *this,short *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  FUN_662fa210(this,param_1,param_2);
  if (*param_1 == 1) {
    uVar2 = 0xffffffff;
    pcVar4 = &DAT_6630ba10;
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
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


