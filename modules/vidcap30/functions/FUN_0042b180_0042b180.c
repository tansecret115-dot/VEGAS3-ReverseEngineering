/* Module: vidcap30.exe
   Function: FUN_0042b180
   Address: 0042b180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042b180(int *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (*param_1 == 8) {
    uVar2 = __aullshr();
    if ((uVar2 & 1) == param_2) {
      return 1;
    }
    uVar1 = FUN_00428e50(param_1,param_2,param_2);
  }
  return uVar1;
}


