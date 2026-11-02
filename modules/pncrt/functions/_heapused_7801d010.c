/* Module: pncrt.dll
   Function: _heapused
   Address: 7801d010
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl _heapused(size_t *_Used,size_t *_Commit)

{
  int *piVar1;
  
                    /* 0x1d010  276  _heapused */
  piVar1 = _errno();
  *piVar1 = 0x28;
  return 0;
}


