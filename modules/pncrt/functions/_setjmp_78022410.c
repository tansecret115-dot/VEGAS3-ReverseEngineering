/* Module: pncrt.dll
   Function: _setjmp
   Address: 78022410
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _setjmp(int *_Buf)

{
  void *pvVar1;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int unaff_retaddr;
  
                    /* 0x22410  433  _setjmp */
  *_Buf = unaff_EBP;
  _Buf[1] = unaff_EBX;
  _Buf[2] = unaff_EDI;
  _Buf[3] = unaff_ESI;
  _Buf[4] = (int)register0x00000010;
  _Buf[5] = unaff_retaddr;
  pvVar1 = ExceptionList;
  _Buf[6] = (int)ExceptionList;
  if (pvVar1 == (void *)0xffffffff) {
    _Buf[7] = -1;
  }
  else {
    _Buf[7] = *(int *)((int)pvVar1 + 0xc);
  }
  return 0;
}


