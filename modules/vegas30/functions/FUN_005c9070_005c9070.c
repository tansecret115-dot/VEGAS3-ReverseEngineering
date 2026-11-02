/* Module: vegas30.exe
   Function: FUN_005c9070
   Address: 005c9070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c9070(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_005b83b0(param_1,1);
  iVar3 = 0;
  iVar1 = *param_2;
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(param_2[2] + iVar3 * 4);
      if (*piVar2 == 0x20) {
        FUN_005cb070(piVar2,param_3,param_4);
      }
      else if (*piVar2 == 0x25) {
        FUN_005c8e80(piVar2,param_3,param_4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_005b84d0(param_1,1);
  return 0;
}


