/* Module: pncrt.dll
   Function: adj_fpatan
   Address: 78031dd5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* adj_fpatan */

undefined1  [10] __cdecl adj_fpatan(void)

{
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  undefined1 auVar1 [10];
  
                    /* 0x31dd5  164  _adj_fpatan */
  auVar1 = (undefined1  [10])fpatan(in_ST1,in_ST0);
  return auVar1;
}


