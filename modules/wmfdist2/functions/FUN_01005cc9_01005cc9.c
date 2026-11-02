/* Module: wmfdist2.exe
   Function: FUN_01005cc9
   Address: 01005cc9
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01005cc9(LPCSTR param_1,int *param_2)

{
  LPCSTR lpsz;
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  lpsz = param_1;
  do {
    cVar1 = *lpsz;
    if ((cVar1 < '0') || ('9' < cVar1)) {
      if ('`' < cVar1) {
        cVar1 = cVar1 + -0x20;
      }
      iVar2 = cVar1 + -0x37;
      if ((iVar2 < 10) || (0xf < iVar2)) {
        *param_2 = iVar3;
        return lpsz != param_1;
      }
    }
    else {
      iVar3 = iVar3 + -3;
      iVar2 = (int)cVar1;
    }
    iVar3 = iVar3 * 0x10 + iVar2;
    lpsz = CharNextA(lpsz);
  } while( true );
}


