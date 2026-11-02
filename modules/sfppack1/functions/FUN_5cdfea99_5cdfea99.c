/* Module: sfppack1.dll
   Function: FUN_5cdfea99
   Address: 5cdfea99
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdfea99(int *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = 0x10;
  bVar5 = true;
  pcVar3 = param_2;
  pcVar4 = &DAT_5ce1ab28;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar2 = 0x10;
    bVar5 = true;
    pcVar3 = param_2;
    pcVar4 = &DAT_5ce1ab18;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar2 = 0x10;
      bVar5 = true;
      pcVar3 = "";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *param_2 == *pcVar3;
        param_2 = param_2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar5);
      if (!bVar5) {
        return 0x80004002;
      }
    }
  }
  uVar1 = FUN_5ce004df(param_1,param_3);
  return uVar1;
}


