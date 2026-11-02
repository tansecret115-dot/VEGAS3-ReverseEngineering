/* Module: pncrt.dll
   Function: _CrtHeapCalloc
   Address: 7800ad60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _CrtHeapCalloc(SIZE_T param_1)

{
                    /* 0xad60  73  _CrtHeapCalloc */
  HeapAlloc(DAT_78042734,8,param_1);
  return;
}


