/* Module: vegas30.exe
   Function: FUN_005c93d0
   Address: 005c93d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c93d0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00543290();
  FUN_005b83b0(param_1,1);
  iVar3 = 0;
  iVar1 = *param_2;
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(param_2[2] + iVar3 * 4);
      if (*piVar2 == 0x20) {
        if ((*(byte *)(piVar2 + 4) & 8) == 0) {
          FUN_005cb5d0(param_1,piVar2,0);
        }
      }
      else if (((*piVar2 == 0x25) && ((piVar2[4] & 8U) == 0)) && ((piVar2[4] & 0x100000U) == 0)) {
        FUN_005c8d80(param_1,piVar2,0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_005b84d0(param_1,1);
  FUN_005432d0();
  return 0;
}


