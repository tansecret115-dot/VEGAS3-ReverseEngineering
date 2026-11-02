/* Module: vidcap30.exe
   Function: FUN_0042dfe0
   Address: 0042dfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0042dfe0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_4;
  
  local_4 = param_1;
  iVar1 = FUN_0057b770(**(undefined4 **)(param_1 + 0x2c));
  if ((param_2 < (*(int **)(param_1 + 0x2c))[2]) && (param_3 != 0)) {
    local_4 = **(int **)(param_1 + 0x2c);
    if (-1 < param_2) {
      param_2 = param_2 + 1;
      do {
        iVar1 = FUN_0057b750(&local_4);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    iVar1 = FUN_0042de70(param_3,param_4,*(undefined4 *)(iVar1 + 0x1c));
    return (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
  }
  return -0x7fffbffb;
}


