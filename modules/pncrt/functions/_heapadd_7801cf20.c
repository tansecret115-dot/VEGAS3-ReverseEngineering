/* Module: pncrt.dll
   Function: _heapadd
   Address: 7801cf20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _heapadd(void *_Memory,size_t _Size)

{
  int *piVar1;
  
                    /* 0x1cf20  272  _heapadd */
  piVar1 = _errno();
  *piVar1 = 0x28;
  return -1;
}


