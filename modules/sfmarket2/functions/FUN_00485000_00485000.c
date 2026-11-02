/* Module: sfmarket2.dll
   Function: FUN_00485000
   Address: 00485000
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00485000(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + -1 + param_2;
  return iVar1 - iVar1 % param_2;
}


