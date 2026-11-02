/* Module: pncrt.dll
   Function: _set_new_mode
   Address: 78001090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __cdecl _set_new_mode(int) */

int __cdecl _set_new_mode(int param_1)

{
  int iVar1;
  
                    /* 0x1090  38  ?_set_new_mode@@YAHH@Z */
  if ((param_1 & 1U) != param_1) {
    return -1;
  }
  iVar1 = DAT_780421d0;
  DAT_780421d0 = param_1;
  return iVar1;
}


