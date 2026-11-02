/* Module: vegas30.exe
   Function: FUN_00534c20
   Address: 00534c20
   Source: Ghidra pseudocode (Stage 10 batch) */


byte FUN_00534c20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ftol();
  FUN_004e7320(iVar1,param_2 - iVar2);
  return ~(byte)*(undefined4 *)(iVar1 + 0x1c) & 1;
}


