/* Module: pncrt.dll
   Function: FUN_7800f340
   Address: 7800f340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_7800f340(uint param_1,FILE *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2->_cnt + -1;
  param_2->_cnt = iVar1;
  if (iVar1 < 0) {
    uVar2 = _flsbuf(param_1,param_2);
  }
  else {
    *param_2->_ptr = (char)param_1;
    uVar2 = param_1 & 0xff;
    param_2->_ptr = param_2->_ptr + 1;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}


