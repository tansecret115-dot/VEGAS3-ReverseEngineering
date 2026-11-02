/* Module: vidcap30.exe
   Function: FUN_004261d0
   Address: 004261d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004261d0(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 == 8) {
    if (param_2 != 0) {
      uVar1 = FUN_004262b0(param_1);
      return uVar1;
    }
    uVar1 = FUN_00426200(param_1);
  }
  return uVar1;
}


