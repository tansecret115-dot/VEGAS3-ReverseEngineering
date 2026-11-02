/* Module: vegas30.exe
   Function: FUN_00580f10
   Address: 00580f10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00580f10(undefined4 param_1,LPCSTR param_2)

{
  int iVar1;
  
  if (param_2 == (LPCSTR)0x0) {
    FUN_00580e90(0,0);
    return param_1;
  }
  iVar1 = lstrlenA(param_2);
  FUN_00580e90(iVar1,param_2);
  return param_1;
}


