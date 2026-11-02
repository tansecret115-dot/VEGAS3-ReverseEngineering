/* Module: aviplug.dll
   Function: FUN_5f9a00e0
   Address: 5f9a00e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9a00e0(LPCSTR param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  LPCSTR lpsz;
  
  iVar2 = _ismbcspace((int)*param_1);
  while (iVar2 != 0) {
    param_1 = CharNextA(param_1);
    iVar2 = _ismbcspace((int)*param_1);
  }
  FUN_5f9d5af0();
  FUN_5f9d5af0();
  lstrcpynA(&stack0xfffffff0,param_1,3);
  lstrcpynA(&stack0xfffffff0,"0x",3);
  iVar2 = lstrcmpiA(&stack0xfffffff0,&stack0xfffffff0);
  lpsz = param_1 + 2;
  if (iVar2 != 0) {
    lpsz = param_1;
  }
  param_1 = (LPCSTR)0x0;
  do {
    cVar1 = *lpsz;
    iVar2 = _ismbcdigit((int)cVar1);
    if (iVar2 == 0) {
      if ((cVar1 < 'A') || ('F' < cVar1)) {
        if ((cVar1 < 'a') || ('f' < cVar1)) {
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = lpsz;
          }
          return (int)param_1;
        }
        iVar2 = 0x57;
      }
      else {
        iVar2 = 0x37;
      }
    }
    else {
      iVar2 = 0x30;
    }
    param_1 = (LPCSTR)(((int)param_1 * 0x10 - iVar2) + (int)cVar1);
    lpsz = CharNextA(lpsz);
  } while( true );
}


