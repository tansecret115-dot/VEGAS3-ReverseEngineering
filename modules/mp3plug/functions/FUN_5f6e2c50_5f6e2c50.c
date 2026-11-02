/* Module: mp3plug.dll
   Function: FUN_5f6e2c50
   Address: 5f6e2c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e2c50(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_5f6fa3f0(param_1 + 0x4c,*(int *)(param_1 + 0xc),param_2);
  *param_3 = iVar1;
  return;
}


