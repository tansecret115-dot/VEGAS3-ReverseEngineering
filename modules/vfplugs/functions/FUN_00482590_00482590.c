/* Module: vfplugs.dll
   Function: FUN_00482590
   Address: 00482590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00482590(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = &DAT_004866a0;
  piVar3 = param_2;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    *param_3 = (int)param_1;
    (**(code **)(*param_1 + 4))(param_1);
    return 0;
  }
  iVar1 = 4;
  bVar4 = true;
  piVar2 = &DAT_00490c38;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *param_2;
    piVar2 = piVar2 + 1;
    param_2 = param_2 + 1;
  } while (bVar4);
  if (!bVar4) {
    return 0x80004002;
  }
  if (param_1 != (int *)0x0) {
    *param_3 = (int)(param_1 + 1);
    (**(code **)(*param_1 + 4))(param_1);
    return 0;
  }
  *param_3 = 0;
  (**(code **)(iRam00000000 + 4))(0);
  return 0;
}


