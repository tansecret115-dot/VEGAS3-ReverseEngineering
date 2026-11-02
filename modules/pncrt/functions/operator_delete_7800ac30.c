/* Module: pncrt.dll
   Function: operator_delete
   Address: 7800ac30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __cdecl operator delete(void *) */

void __cdecl operator_delete(void *param_1)

{
                    /* 0xac30  16  ??3@YAXPAX@Z */
  free(param_1);
  return;
}


