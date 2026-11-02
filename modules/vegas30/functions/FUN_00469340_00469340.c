/* Module: vegas30.exe
   Function: FUN_00469340
   Address: 00469340
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00469340(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0xcd0);
  if (param_2 == 0) {
    FUN_004ca690(param_1);
    FUN_0049d980(param_1);
  }
  else {
    FUN_004ca810(param_1);
    FUN_0049d8d0(param_1);
  }
  if (iVar1 != **(int **)(param_1 + 0xcd0)) {
    FUN_0048f940(*(undefined4 *)(param_1 + 0xbc8),*(int **)(param_1 + 0xcd0),2);
    FUN_005da080(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0));
    DAT_0064767c = DAT_0064767c | 4;
  }
  return;
}


