/* Module: vegas30.exe
   Function: FUN_00580c90
   Address: 00580c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00580c90(undefined4 param_1,LPCSTR param_2)

{
  int iVar1;
  
  if (param_2 == (LPCSTR)0x0) {
    FUN_00580bf0(0,0);
    return param_1;
  }
  iVar1 = lstrlenA(param_2);
  FUN_00580bf0(iVar1,param_2);
  return param_1;
}


