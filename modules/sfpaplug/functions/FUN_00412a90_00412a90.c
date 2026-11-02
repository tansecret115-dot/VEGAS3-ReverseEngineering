/* Module: sfpaplug.dll
   Function: FUN_00412a90
   Address: 00412a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00412a90(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = &DAT_00455500;
  piVar3 = param_2;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_2 = (int)param_1;
    return 0;
  }
  return 0x80004002;
}


