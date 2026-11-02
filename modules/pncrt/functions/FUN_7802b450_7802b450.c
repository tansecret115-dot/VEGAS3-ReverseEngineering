/* Module: pncrt.dll
   Function: FUN_7802b450
   Address: 7802b450
   Source: Ghidra pseudocode (Stage 10 batch) */


wint_t __thiscall FUN_7802b450(void *this,int *param_1,FILE *param_2)

{
  void *this_00;
  wint_t _C;
  int iVar1;
  void *extraout_ECX;
  void *extraout_ECX_00;
  
  *param_1 = *param_1 + 1;
  _C = FUN_7802b420(this,param_2);
  iVar1 = iswspace(_C);
  this_00 = extraout_ECX;
  while (iVar1 != 0) {
    *param_1 = *param_1 + 1;
    _C = FUN_7802b420(this_00,param_2);
    iVar1 = iswspace(_C);
    this_00 = extraout_ECX_00;
  }
  return _C;
}


