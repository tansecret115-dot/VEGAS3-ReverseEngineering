/* Module: vegas30.exe
   Function: FUN_005abb50
   Address: 005abb50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005abb50(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_1 == 2) || (param_1 == 3)) {
    if (param_1 != (*(int *)(param_2 + 0xc) != 1) + 2) {
      uVar2 = ftol();
      uVar1 = __alldiv(uVar2,2,0);
      return uVar1;
    }
  }
  return 0;
}


