/* Module: sfcdi.dll
   Function: prn_GetInterface
   Address: 5bf08730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tPRN_INTERFACE * __stdcall prn_GetInterface(int) */

tPRN_INTERFACE * prn_GetInterface(int param_1)

{
                    /* 0x8730  253  ?prn_GetInterface@@YGPAUtPRN_INTERFACE@@H@Z */
  if ((param_1 <= DAT_5bf6663c) && (-1 < param_1)) {
    return (tPRN_INTERFACE *)(DAT_5bf66640 + param_1 * 0x44);
  }
  return (tPRN_INTERFACE *)0x0;
}


