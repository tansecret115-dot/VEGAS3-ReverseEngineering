/* Module: pncrt.dll
   Function: set_sbh_threshold
   Address: 7800b030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* set_sbh_threshold */

undefined4 __cdecl set_sbh_threshold(int param_1)

{
  uint uVar1;
  
                    /* 0xb030  431  _set_sbh_threshold */
  uVar1 = param_1 + 0xfU & 0xfffffff0;
  if (uVar1 < 0x781) {
    DAT_7803f3ec = uVar1;
    return 1;
  }
  return 0;
}


