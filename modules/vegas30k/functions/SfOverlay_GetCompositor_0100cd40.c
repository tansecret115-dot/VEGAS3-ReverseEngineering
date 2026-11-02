/* Module: vegas30k.dll
   Function: SfOverlay_GetCompositor
   Address: 0100cd40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tSFOVERLAY const * __stdcall SfOverlay_GetCompositor(int) */

tSFOVERLAY * SfOverlay_GetCompositor(int param_1)

{
                    /* 0xcd40  470  ?SfOverlay_GetCompositor@@YGPBUtSFOVERLAY@@H@Z */
  if ((-1 < param_1) && ((uint)param_1 < 10)) {
    return (tSFOVERLAY *)(&PTR_LAB_01204020 + param_1 * 3);
  }
  return (tSFOVERLAY *)0x0;
}


