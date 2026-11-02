/* Module: InstMsi-x86w.exe
   Function: FUN_01002c71
   Address: 01002c71
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01002c71(LPCSTR param_1)

{
  int iVar1;
  
  if (((param_1 != (LPCSTR)0x0) && (iVar1 = lstrlenA(param_1), 2 < iVar1)) &&
     ((param_1[1] == ':' || ((*param_1 == '\\' && (param_1[1] == '\\')))))) {
    return 1;
  }
  return 0;
}


