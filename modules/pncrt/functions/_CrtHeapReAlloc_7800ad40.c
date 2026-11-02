/* Module: pncrt.dll
   Function: _CrtHeapReAlloc
   Address: 7800ad40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _CrtHeapReAlloc(LPVOID param_1,SIZE_T param_2)

{
                    /* 0xad40  75  _CrtHeapReAlloc */
  HeapReAlloc(DAT_78042734,0,param_1,param_2);
  return;
}


