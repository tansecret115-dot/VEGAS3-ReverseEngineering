/* Module: vidpcore.dll
   Function: FUN_5df0b4c0
   Address: 5df0b4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df0b4c0(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    param_3 = 5;
  }
  *param_2 = 0;
  iVar1 = FUN_5df0b5d0(param_1);
  if (iVar1 < 0) {
    *param_1 = param_3;
    uVar2 = FUN_5df0b5b0(param_3);
    return uVar2;
  }
  if (*param_1 < 1) {
    *param_2 = 1;
  }
  return 0;
}


