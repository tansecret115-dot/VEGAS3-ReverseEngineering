/* Module: vegas30.exe
   Function: FUN_00546f40
   Address: 00546f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00546f40(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x74))(0);
  FUN_00544840(7);
  iVar1 = FUN_005446f0(7,0,0,0,0,0,0);
  if (iVar1 != 0) {
    ResetEvent((HANDLE)param_1[3]);
  }
  return 0;
}


