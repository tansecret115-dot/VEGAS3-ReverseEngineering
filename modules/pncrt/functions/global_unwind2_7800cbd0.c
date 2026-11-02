/* Module: pncrt.dll
   Function: global_unwind2
   Address: 7800cbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* global_unwind2 */

void __cdecl global_unwind2(PVOID param_1)

{
                    /* 0xcbd0  271  _global_unwind2 */
  RtlUnwind(param_1,(PVOID)0x7800cbe8,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


