/* Module: vidcap30.exe
   Function: FUN_0044a580
   Address: 0044a580
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044a580(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0044e530(param_1,*(undefined4 *)(param_2 + 4),param_3);
  if (-1 < iVar1) {
    FUN_0044a470(param_1,param_2,*param_3,param_4);
  }
  return;
}


