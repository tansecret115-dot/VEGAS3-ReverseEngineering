/* Module: pncrt.dll
   Function: _fpreset
   Address: 78010340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _fpreset(void)

{
  void *pvVar1;
  uint *puVar2;
  void **ppvVar3;
  
                    /* 0x10340  244  _fpreset */
  ppvVar3 = __pxcptinfoptrs();
  pvVar1 = *ppvVar3;
  __setdefaultprecision();
  if ((pvVar1 != (void *)0x0) && (puVar2 = *(uint **)((int)pvVar1 + 4), (*puVar2 & 0x10008) != 0)) {
    puVar2[8] = 0;
    puVar2[9] = 0xffff;
  }
  return;
}


