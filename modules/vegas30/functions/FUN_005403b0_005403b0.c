/* Module: vegas30.exe
   Function: FUN_005403b0
   Address: 005403b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005403b0(void *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00540110(param_1,param_2);
  if (-1 < iVar1) {
    free(param_1);
  }
  return iVar1;
}


