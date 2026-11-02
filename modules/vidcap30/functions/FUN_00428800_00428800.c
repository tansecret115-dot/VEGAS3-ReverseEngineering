/* Module: vidcap30.exe
   Function: FUN_00428800
   Address: 00428800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00428800(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  FUN_004287d0(param_1);
  if (DAT_005bb7e8 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00427500(param_1,*(undefined4 *)(param_1 + 0x388),*(undefined4 *)(param_1 + 0x38c),
                         *(undefined4 *)(param_1 + 0x390),*(undefined4 *)(param_1 + 0x394),
                         *(undefined4 *)(param_1 + 0x398),*(undefined4 *)(param_1 + 0x39c),0,0);
    if (-1 < iVar1) {
      *param_2 = 1;
      return 1;
    }
  }
  return iVar1;
}


