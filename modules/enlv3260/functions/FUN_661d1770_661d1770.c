/* Module: enlv3260.dll
   Function: FUN_661d1770
   Address: 661d1770
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_661d1770(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0xc))(param_1);
  iVar1 = param_1[0x29];
  (**(code **)(*param_1 + 0x10))(param_1);
  return iVar1;
}


