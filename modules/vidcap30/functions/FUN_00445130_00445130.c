/* Module: vidcap30.exe
   Function: FUN_00445130
   Address: 00445130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00445130(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  FUN_0042f4b0(iVar1,1);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  **(uint **)(iVar1 + 4) = **(uint **)(iVar1 + 4) | 0x80;
  FUN_0042f5d0(iVar1,1);
  return 0;
}


