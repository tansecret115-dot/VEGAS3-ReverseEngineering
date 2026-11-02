/* Module: sfcdi.dll
   Function: AutoInsert_IsHotAvailable
   Address: 5bf0edf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall AutoInsert_IsHotAvailable(void) */

int AutoInsert_IsHotAvailable(void)

{
                    /* 0xedf0  5  ?AutoInsert_IsHotAvailable@@YGHXZ */
  return (uint)(DAT_5bf65fc8 != 0);
}


