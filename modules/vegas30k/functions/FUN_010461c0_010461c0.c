/* Module: vegas30k.dll
   Function: FUN_010461c0
   Address: 010461c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010461c0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EBP;
  int iVar4;
  
  piVar2 = param_1;
  *param_3 = 0;
  if ((int *)param_1[0x13] == (int *)0x0) {
    return 0x8004e016;
  }
  iVar1 = *(int *)param_1[0x13];
  iVar4 = 0;
  if (iVar1 < 1) {
    return 0x8004e016;
  }
  do {
    iVar3 = *(int *)(*(int *)(piVar2[0x13] + 8) + iVar4 * 4);
    if (((iVar3 != 0) && (iVar3 = FUN_01044170(iVar3,&param_1), -1 < iVar3)) &&
       (param_1 != (int *)0x0)) {
      iVar3 = (**(code **)(*param_1 + 0x34))(param_1,param_2);
      if (-1 < iVar3) {
        *param_1 = (int)unaff_EBP;
        return 0;
      }
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar1);
  return 0x8004e016;
}


