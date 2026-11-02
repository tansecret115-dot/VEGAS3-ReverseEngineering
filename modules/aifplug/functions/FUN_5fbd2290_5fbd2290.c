/* Module: aifplug.dll
   Function: FUN_5fbd2290
   Address: 5fbd2290
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd2290(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = -0x7fffbffb;
  if (*(int *)(param_1 + 0x220) == 0) {
    iVar1 = FUN_5fbd1fd0(param_1);
  }
  if ((*(int *)(param_1 + 0x220) != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x220) + 4);
    iVar1 = 0;
  }
  return iVar1;
}


