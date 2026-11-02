/* Module: vidcap30.exe
   Function: FUN_0042de10
   Address: 0042de10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0042de10(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int local_4;
  
  local_4 = param_1;
  iVar1 = FUN_0057b770(**(undefined4 **)(param_1 + 0x2c));
  if ((*(int **)(param_1 + 0x2c))[2] <= param_2) {
    return 0x80004005;
  }
  local_4 = **(int **)(param_1 + 0x2c);
  if (-1 < param_2) {
    param_2 = param_2 + 1;
    do {
      iVar1 = FUN_0057b750(&local_4);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *param_3 = *(undefined4 *)(iVar1 + 0x1c);
  return 0;
}


