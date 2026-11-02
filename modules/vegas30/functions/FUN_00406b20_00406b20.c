/* Module: vegas30.exe
   Function: FUN_00406b20
   Address: 00406b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00406b20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar1 + 1;
  *(int *)(param_1 + 4) = iVar1;
  return 0;
}


