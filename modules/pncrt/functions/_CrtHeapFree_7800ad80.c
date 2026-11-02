/* Module: pncrt.dll
   Function: _CrtHeapFree
   Address: 7800ad80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _CrtHeapFree(LPVOID param_1)

{
                    /* 0xad80  74  _CrtHeapFree */
  HeapFree(DAT_78042734,0,param_1);
  return;
}


