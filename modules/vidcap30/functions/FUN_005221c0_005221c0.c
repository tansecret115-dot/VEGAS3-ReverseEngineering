/* Module: vidcap30.exe
   Function: FUN_005221c0
   Address: 005221c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005221c0(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  iVar1 = 4;
  bVar3 = true;
  *param_4 = 0;
  piVar2 = &DAT_005a5bd8;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_3 == *piVar2;
    param_3 = param_3 + 1;
    piVar2 = piVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    (**(code **)(*(int *)(param_1 + 8) + 4))(param_1 + 8);
    *param_4 = param_1 + 8;
    return 0;
  }
  return 0x80004002;
}


