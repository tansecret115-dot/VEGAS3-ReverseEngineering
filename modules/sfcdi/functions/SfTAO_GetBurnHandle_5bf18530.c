/* Module: sfcdi.dll
   Function: SfTAO_GetBurnHandle
   Address: 5bf18530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct HSFBURN__ * __stdcall SfTAO_GetBurnHandle(void *) */

HSFBURN__ * SfTAO_GetBurnHandle(void *param_1)

{
                    /* 0x18530  136  ?SfTAO_GetBurnHandle@@YGPAUHSFBURN__@@PAX@Z */
  if (param_1 == (void *)0x0) {
    return (HSFBURN__ *)0x0;
  }
  return *(HSFBURN__ **)((int)param_1 + 0x94);
}


