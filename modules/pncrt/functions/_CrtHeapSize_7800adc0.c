/* Module: pncrt.dll
   Function: _CrtHeapSize
   Address: 7800adc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _CrtHeapSize(LPCVOID param_1)

{
                    /* 0xadc0  76  _CrtHeapSize */
  HeapSize(DAT_78042734,0,param_1);
  return;
}


