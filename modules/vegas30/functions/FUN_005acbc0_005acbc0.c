/* Module: vegas30.exe
   Function: FUN_005acbc0
   Address: 005acbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005acbc0(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0xc) < *param_2) || (*(int *)(param_1 + 0x10) < param_2[1])) {
    uVar1 = FUN_005a5f00(param_1,param_2);
  }
  return uVar1;
}


