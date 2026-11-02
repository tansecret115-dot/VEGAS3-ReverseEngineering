/* Module: pncrt.dll
   Function: operator_new
   Address: 7800b010
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void * __cdecl operator new(unsigned int) */

void * __cdecl operator_new(uint param_1)

{
  int *piVar1;
  
                    /* 0xb010  15  ??2@YAPAXI@Z */
  piVar1 = FUN_7800ae00(param_1,1);
  return piVar1;
}


