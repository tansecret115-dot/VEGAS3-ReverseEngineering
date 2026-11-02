/* Module: sftrans1.dll
   Function: FUN_00545f80
   Address: 00545f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00545f80(undefined4 param_1,LPCSTR param_2)

{
  int iVar1;
  
  if (param_2 == (LPCSTR)0x0) {
    FUN_00545ee0(0,0);
    return param_1;
  }
  iVar1 = lstrlenA(param_2);
  FUN_00545ee0(iVar1,param_2);
  return param_1;
}


