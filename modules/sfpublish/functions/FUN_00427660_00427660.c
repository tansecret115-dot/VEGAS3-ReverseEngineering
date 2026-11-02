/* Module: sfpublish.dll
   Function: FUN_00427660
   Address: 00427660
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong FUN_00427660(LPCSTR param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  LPCSTR lpsz;
  undefined8 local_c;
  
  iVar2 = _ismbcspace((int)*param_1);
  while (iVar2 != 0) {
    param_1 = CharNextA(param_1);
    iVar2 = _ismbcspace((int)*param_1);
  }
  FUN_004328f0();
  FUN_004328f0();
  lstrcpynA(&stack0xffffffe8,param_1,3);
  lstrcpynA(&stack0xffffffe8,"0x",3);
  iVar2 = lstrcmpiA(&stack0xffffffe8,&stack0xffffffe8);
  lpsz = param_1 + 2;
  if (iVar2 != 0) {
    lpsz = param_1;
  }
  local_c = 0;
  do {
    cVar1 = *lpsz;
    iVar2 = _ismbcdigit((int)cVar1);
    if (iVar2 == 0) {
      if ((cVar1 < 'A') || ('F' < cVar1)) {
        if ((cVar1 < 'a') || ('f' < cVar1)) {
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = lpsz;
          }
          return local_c;
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
    local_c = __allmul((uint)local_c,local_c._4_4_,0x10,0);
    local_c = local_c + (ulonglong)(uint)(cVar1 - iVar2);
    lpsz = CharNextA(lpsz);
  } while( true );
}


