/* Module: sfcdi.dll
   Function: ldr_GetInterface
   Address: 5bf082c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tLDR_INTERFACE * __stdcall ldr_GetInterface(int) */

tLDR_INTERFACE * ldr_GetInterface(int param_1)

{
                    /* 0x82c0  240  ?ldr_GetInterface@@YGPAUtLDR_INTERFACE@@H@Z */
  if ((param_1 <= DAT_5bf66630) && (-1 < param_1)) {
    return (tLDR_INTERFACE *)(DAT_5bf66634 + param_1 * 0x4c);
  }
  return (tLDR_INTERFACE *)0x0;
}


