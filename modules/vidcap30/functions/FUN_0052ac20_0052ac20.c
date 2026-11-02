/* Module: vidcap30.exe
   Function: FUN_0052ac20
   Address: 0052ac20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052ac20(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x35) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 0x2d)) {
      iVar1 = 0;
      do {
        FUN_005494b0(param_1,*(undefined4 *)(iVar1 + 4 + *(int *)(param_2 + 0x35)));
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x10;
      } while (iVar2 < *(int *)(param_2 + 0x2d));
    }
    FUN_005494b0(param_1,*(undefined4 *)(param_2 + 0x35));
  }
  FUN_0052ac00(param_2);
  return;
}


