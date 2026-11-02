/* Module: stl2plg.dll
   Function: FUN_00402100
   Address: 00402100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00402100(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004020f0((int)param_1);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  param_1[0x6c] = 1;
  return 0;
}


