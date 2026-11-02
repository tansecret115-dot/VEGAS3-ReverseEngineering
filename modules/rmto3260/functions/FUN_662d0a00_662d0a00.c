/* Module: rmto3260.dll
   Function: FUN_662d0a00
   Address: 662d0a00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662d0a00(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = 0;
  if (param_1 == (char *)0x0) {
    iVar4 = -0x7ffbfff9;
  }
  else {
    uVar2 = 0xffffffff;
    pcVar5 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (param_3 < ~uVar2) {
      iVar4 = -0x7ffbfff3;
    }
    else {
      uVar2 = 0xffffffff;
      do {
        pcVar5 = param_1;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar5 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar5;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar5 = pcVar5 + -uVar2;
      pcVar6 = param_2;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
  }
  if ((iVar4 != 0) && (param_3 != 0)) {
    *param_2 = '\0';
  }
  return iVar4;
}


