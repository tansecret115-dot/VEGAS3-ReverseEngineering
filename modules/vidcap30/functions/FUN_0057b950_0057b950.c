/* Module: vidcap30.exe
   Function: FUN_0057b950
   Address: 0057b950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057b950(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1 = FUN_0057b720();
  do {
    if (param_1 == 0) {
      return 1;
    }
    uVar1 = FUN_0057b750(&param_1);
    iVar2 = FUN_0057b870(uVar1);
  } while (iVar2 != 0);
  return 0;
}


