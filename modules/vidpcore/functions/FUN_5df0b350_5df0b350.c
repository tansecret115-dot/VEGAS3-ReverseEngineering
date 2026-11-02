/* Module: vidpcore.dll
   Function: FUN_5df0b350
   Address: 5df0b350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df0b350(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    param_3 = 7;
  }
  iVar1 = FUN_5df0b490(param_1);
  if (iVar1 < 0) {
    *param_2 = 1;
    *param_1 = param_3;
    uVar2 = FUN_5df0b470(param_3);
    return uVar2;
  }
  if (*param_1 == -1) {
    *param_2 = 0;
    return 0;
  }
  if (*param_1 == 0) {
    *param_2 = 1;
    uVar2 = FUN_5df0b470(param_3);
    return uVar2;
  }
  *param_2 = 0;
  return 0;
}


