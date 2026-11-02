/* Module: vegas30.exe
   Function: FUN_0052a8d0
   Address: 0052a8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052a8d0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2 + -1;
  if (-1 < iVar1) {
    piVar2 = (int *)(param_2[2] + iVar1 * 4);
    while (*(int *)(*piVar2 + 0x208) != 9) {
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
      if (iVar1 < 0) {
        return;
      }
    }
    FUN_00526490(param_1,*(undefined4 *)(*(int *)(*piVar2 + 0x20c) + 4));
    FUN_00524880(param_1);
    FUN_00525770(param_1,*(int *)(*(int *)(param_1 + 0x84) + 4) + -1);
    FUN_00524ad0(param_1);
  }
  return;
}


