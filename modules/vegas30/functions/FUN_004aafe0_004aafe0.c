/* Module: vegas30.exe
   Function: FUN_004aafe0
   Address: 004aafe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004aafe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_005f1460(param_2,param_3);
    if ((iVar1 == 0) || ((*(byte *)(iVar1 + 0x8c) & 2) != 0)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


