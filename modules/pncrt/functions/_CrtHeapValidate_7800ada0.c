/* Module: pncrt.dll
   Function: _CrtHeapValidate
   Address: 7800ada0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _CrtHeapValidate(LPCVOID param_1)

{
                    /* 0xada0  77  _CrtHeapValidate */
  HeapValidate(DAT_78042734,0,param_1);
  return;
}


