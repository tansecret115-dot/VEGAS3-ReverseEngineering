/* Module: pncrt.dll
   Function: FUN_78024c90
   Address: 78024c90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_78024c90(int *param_1)

{
  uint _C;
  int iVar1;
  
  *param_1 = *param_1 + 1;
  _C = thunk_FUN_7801e440();
  iVar1 = isspace(_C);
  while (iVar1 != 0) {
    *param_1 = *param_1 + 1;
    _C = thunk_FUN_7801e440();
    iVar1 = isspace(_C);
  }
  return _C;
}


