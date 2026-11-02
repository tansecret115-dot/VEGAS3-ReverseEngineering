/* Module: vegas30k.dll
   Function: FUN_01023a90
   Address: 01023a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01023a90(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  iVar1 = 4;
  bVar3 = true;
  piVar2 = &DAT_011db798;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_2 == *piVar2;
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    *param_3 = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    return 0;
  }
  return 0x80004002;
}


