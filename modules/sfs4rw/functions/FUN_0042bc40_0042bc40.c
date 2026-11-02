/* Module: sfs4rw.dll
   Function: FUN_0042bc40
   Address: 0042bc40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042bc40(LPCSTR param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  iVar2 = _ismbcspace((int)*param_1);
  while (iVar2 != 0) {
    param_1 = CharNextA(param_1);
    iVar2 = _ismbcspace((int)*param_1);
  }
  local_8 = 0;
  cVar1 = *param_1;
  iVar2 = DAT_004a9ad8;
  while (DAT_004a9ad8 = iVar2, cVar1 != '\0') {
    FUN_0048b2e0();
    FUN_0048b2e0();
    lstrcpynA(&stack0xffffffe8,&DAT_004a9ad0,iVar2 + 1);
    (&stack0xffffffe8)[iVar2] = 0;
    (&stack0xffffffe8)[iVar2] = 0;
    lstrcpynA(&stack0xffffffe8,param_1,iVar2 + 1);
    (&stack0xffffffe8)[iVar2] = 0;
    (&stack0xffffffe8)[iVar2] = 0;
    iVar3 = lstrcmpA(&stack0xffffffe8,&stack0xffffffe8);
    iVar2 = DAT_004a9ad8;
    if (iVar3 == 0) {
      while (iVar2 + -1 != 0) {
        param_1 = CharNextA(param_1);
        iVar2 = iVar2 + -1;
      }
    }
    else {
      iVar2 = _ismbcdigit((int)*param_1);
      if (iVar2 == 0) break;
      local_8 = *param_1 + -0x30 + local_8 * 10;
    }
    param_1 = CharNextA(param_1);
    iVar2 = DAT_004a9ad8;
    cVar1 = *param_1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  return local_8;
}


