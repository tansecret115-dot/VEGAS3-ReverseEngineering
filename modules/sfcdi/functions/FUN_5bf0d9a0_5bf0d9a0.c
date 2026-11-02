/* Module: sfcdi.dll
   Function: FUN_5bf0d9a0
   Address: 5bf0d9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0d9a0(HANDLE param_1,int *param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    pcVar3 = "--Full TOC MMC--";
  }
  else if (iVar1 == 2) {
    pcVar3 = "--Full TOC--";
  }
  else {
    if (iVar1 != 3) goto LAB_5bf0d9ce;
    pcVar3 = "--Short TOC--";
  }
  FUN_5bf0d7a0(param_1,pcVar3);
LAB_5bf0d9ce:
  if ((uint)param_2[0x58] < 4) {
    FUN_5bf0d820(param_1,param_3,param_2[0x58]);
    return 0;
  }
  FUN_5bf0d890(param_1,(int)param_3,4,4);
  uVar2 = (uint)CONCAT11(*param_3,param_3[1]);
  if (2 < uVar2) {
    uVar2 = uVar2 - 2;
  }
  if ((uint)param_2[0x58] <= uVar2) {
    uVar2 = param_2[0x58];
  }
  if (*param_2 == 3) {
    FUN_5bf0d890(param_1,(int)(param_3 + 4),uVar2,8);
    return 0;
  }
  FUN_5bf0d890(param_1,(int)(param_3 + 4),uVar2,0xb);
  return 0;
}


