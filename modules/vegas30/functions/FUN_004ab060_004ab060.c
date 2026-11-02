/* Module: vegas30.exe
   Function: FUN_004ab060
   Address: 004ab060
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ab060(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_004aafe0(param_1,param_2,0);
    while (iVar1 != 0) {
      iVar2 = iVar2 + 1;
      iVar1 = FUN_004aafe0(param_1,param_2,iVar2);
    }
  }
  return iVar2;
}


