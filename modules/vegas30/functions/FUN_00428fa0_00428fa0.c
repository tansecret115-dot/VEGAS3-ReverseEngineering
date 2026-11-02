/* Module: vegas30.exe
   Function: FUN_00428fa0
   Address: 00428fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00428fa0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_0064762c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_0064762c + 0x80);
  }
  FUN_00426760(param_1,0,0,0,0,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x80) = param_1;
    FUN_00424100(iVar1,param_2);
  }
  return;
}


