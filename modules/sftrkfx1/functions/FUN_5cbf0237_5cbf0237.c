/* Module: sftrkfx1.dll
   Function: FUN_5cbf0237
   Address: 5cbf0237
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbf0237(int *param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar3 = 0x10;
  bVar6 = true;
  iVar2 = iVar3;
  pcVar4 = param_2;
  pcVar5 = &DAT_5cc0ad30;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *pcVar4 == *pcVar5;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    bVar6 = true;
    iVar2 = iVar3;
    pcVar4 = param_2;
    pcVar5 = &DAT_5cc0ad20;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      bVar6 = true;
      iVar2 = iVar3;
      pcVar4 = param_2;
      pcVar5 = "\f\x01";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (!bVar6) {
        bVar6 = true;
        pcVar4 = param_2;
        pcVar5 = &DAT_5cc0acd0;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (!bVar6) {
          FUN_5cbf4196(param_1,param_2,param_3);
          return;
        }
        piVar1 = param_1 + 4;
        goto LAB_5cbf0297;
      }
    }
  }
  piVar1 = param_1 + 3;
LAB_5cbf0297:
  FUN_5cbf422c((int *)(-(uint)(param_1 != (int *)0x0) & (uint)piVar1),param_3);
  return;
}


