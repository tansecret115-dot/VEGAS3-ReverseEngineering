/* Module: sftrkfx1.dll
   Function: FUN_5cbf0056
   Address: 5cbf0056
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbf0056(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = &DAT_5cc0ad20;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 0x10;
    bVar4 = true;
    pcVar2 = param_2;
    pcVar3 = "\f\x01";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      FUN_5cbf4196(param_1,param_2,param_3);
      return;
    }
  }
  FUN_5cbf422c((int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 3)),param_3);
  return;
}


