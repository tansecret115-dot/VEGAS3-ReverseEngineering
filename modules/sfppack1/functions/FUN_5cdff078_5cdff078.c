/* Module: sfppack1.dll
   Function: FUN_5cdff078
   Address: 5cdff078
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdff078(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = &DAT_5ce1aa58;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    FUN_5ce004df((int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 3)),param_3);
  }
  else {
    FUN_5ce00449(param_1,param_2,param_3);
  }
  return;
}


