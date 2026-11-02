/* Module: pncrt.dll
   Function: FUN_7802a390
   Address: 7802a390
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_7802a390(int *param_1,FILE *param_2)

{
  uint _C;
  int iVar1;
  
  *param_1 = *param_1 + 1;
  _C = FUN_7802a340(param_2);
  iVar1 = isspace(_C);
  while (iVar1 != 0) {
    *param_1 = *param_1 + 1;
    _C = FUN_7802a340(param_2);
    iVar1 = isspace(_C);
  }
  return _C;
}


