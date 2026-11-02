/* Module: InstMsi-x86a.exe
   Function: FUN_010020bc
   Address: 010020bc
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010020bc(LPCSTR param_1)

{
  int iVar1;
  
  if (((param_1 != (LPCSTR)0x0) && (iVar1 = lstrlenA(param_1), 2 < iVar1)) &&
     (((param_1[1] == ':' && (param_1[2] == '\\')) || ((*param_1 == '\\' && (param_1[1] == '\\')))))
     ) {
    return 1;
  }
  return 0;
}


