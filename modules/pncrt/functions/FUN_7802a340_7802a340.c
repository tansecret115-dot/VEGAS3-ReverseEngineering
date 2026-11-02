/* Module: pncrt.dll
   Function: FUN_7802a340
   Address: 7802a340
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_7802a340(FILE *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1->_cnt + -1;
  param_1->_cnt = iVar2;
  if (-1 < iVar2) {
    bVar1 = *param_1->_ptr;
    param_1->_ptr = param_1->_ptr + 1;
    return (uint)bVar1;
  }
  uVar3 = _filbuf(param_1);
  return uVar3;
}


