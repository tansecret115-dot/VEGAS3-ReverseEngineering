/* Module: oggplug.dll
   Function: FUN_00409a90
   Address: 00409a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00409a90(int param_1,HMODULE param_2,uchar *param_3,DWORD param_4)

{
  int iVar1;
  
  iVar1 = FUN_00409660(param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    FUN_004099e0(param_1,param_2,param_3,param_4);
  }
  return;
}


