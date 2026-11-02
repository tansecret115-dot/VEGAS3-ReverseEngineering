/* Module: encn3260.dll
   Function: windraw_InitColorConverter
   Address: 664b0060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall windraw_InitColorConverter,0 */

void windraw_InitColorConverter(void)

{
                    /* 0x30060  18  _windraw_InitColorConverter@0 */
  if (DAT_664f0878 != 0) {
    FUN_664b09f0(DAT_664f0878);
    return;
  }
  return;
}


