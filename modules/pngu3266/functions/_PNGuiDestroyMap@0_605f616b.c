/* Module: pngu3266.dll
   Function: _PNGuiDestroyMap@0
   Address: 605f616b
   Source: Ghidra pseudocode (Stage 10 batch) */


void _PNGuiDestroyMap_0(void)

{
  void *pvVar1;
  
                    /* 0x616b  2219  _PNGuiDestroyMap@0 */
  pvVar1 = DAT_60649968;
  if (DAT_60649968 != (void *)0x0) {
    FUN_60619d20(DAT_60649968);
    operator_delete(pvVar1);
    DAT_60649968 = (void *)0x0;
  }
  return;
}


