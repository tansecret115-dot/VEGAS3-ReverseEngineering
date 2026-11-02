/* Module: pncrt.dll
   Function: _CrtHeapAlloc
   Address: 7800ad20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _CrtHeapAlloc(SIZE_T param_1)

{
                    /* 0xad20  72  _CrtHeapAlloc */
  HeapAlloc(DAT_78042734,0,param_1);
  return;
}


