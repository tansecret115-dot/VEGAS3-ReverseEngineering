/* Module: vidcap30.exe
   Function: FUN_00404f50
   Address: 00404f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404f50(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004177a0(param_2,1,&param_2,1);
  *(undefined4 *)(param_1 + 0xb4) = param_3;
  return 1;
}


