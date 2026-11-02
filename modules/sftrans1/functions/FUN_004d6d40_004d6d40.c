/* Module: sftrans1.dll
   Function: FUN_004d6d40
   Address: 004d6d40
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong FUN_004d6d40(LPCSTR param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  LPCSTR lpsz;
  longlong lVar3;
  
  iVar2 = _ismbcspace((int)*param_1);
  while (iVar2 != 0) {
    param_1 = CharNextA(param_1);
    iVar2 = _ismbcspace((int)*param_1);
  }
  FUN_00551640();
  FUN_00551640();
  lstrcpynA(&stack0xffffffe8,param_1,3);
  lstrcpynA(&stack0xffffffe8,"0x",3);
  iVar2 = lstrcmpiA(&stack0xffffffe8,&stack0xffffffe8);
  lpsz = param_1 + 2;
  if (iVar2 != 0) {
    lpsz = param_1;
  }
  lVar3 = 0;
  do {
    cVar1 = *lpsz;
    iVar2 = _ismbcdigit((int)cVar1);
    if (iVar2 == 0) {
      if ((cVar1 < 'A') || ('F' < cVar1)) {
        if ((cVar1 < 'a') || ('f' < cVar1)) {
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = lpsz;
          }
          return lVar3;
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
    lVar3 = __allmul(lVar3,0x10,0);
    lVar3 = lVar3 + (ulonglong)(uint)(cVar1 - iVar2);
    lpsz = CharNextA(lpsz);
  } while( true );
}


