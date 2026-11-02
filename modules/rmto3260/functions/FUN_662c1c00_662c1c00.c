/* Module: rmto3260.dll
   Function: FUN_662c1c00
   Address: 662c1c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c1c00(int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = FUN_662d0a70(param_2);
  *(int *)(param_1 + 0x2c) = iVar1;
  return 0;
}


