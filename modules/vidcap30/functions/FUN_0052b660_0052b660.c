/* Module: vidcap30.exe
   Function: FUN_0052b660
   Address: 0052b660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052b660(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
  }
  if ((param_2 != (int *)0x0) && (iVar1 = *param_2, iVar1 != 0)) {
    FUN_005494b0(iVar2,*(undefined4 *)(iVar1 + 0x35));
    FUN_00549450(iVar1);
    *param_2 = 0;
  }
  if (iVar2 != 0) {
    FUN_0052b6c0(iVar2);
    FUN_00549450(iVar2);
    *param_1 = 0;
  }
  return;
}


