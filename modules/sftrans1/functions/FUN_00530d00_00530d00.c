/* Module: sftrans1.dll
   Function: FUN_00530d00
   Address: 00530d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00530d00(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    param_3 = 5;
  }
  *param_2 = 0;
  iVar1 = FUN_00530e10(param_1);
  if (iVar1 < 0) {
    *param_1 = param_3;
    uVar2 = FUN_00530df0(param_3);
    return uVar2;
  }
  if (*param_1 < 1) {
    *param_2 = 1;
  }
  return 0;
}


