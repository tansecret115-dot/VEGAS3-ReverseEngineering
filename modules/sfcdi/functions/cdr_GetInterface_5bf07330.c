/* Module: sfcdi.dll
   Function: cdr_GetInterface
   Address: 5bf07330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tCDR_INTERFACE * __stdcall cdr_GetInterface(int) */

tCDR_INTERFACE * cdr_GetInterface(int param_1)

{
                    /* 0x7330  178  ?cdr_GetInterface@@YGPAUtCDR_INTERFACE@@H@Z */
  if ((param_1 < DAT_5bf66624) && (-1 < param_1)) {
    return (tCDR_INTERFACE *)(DAT_5bf66628 + param_1 * 0x6c);
  }
  return (tCDR_INTERFACE *)0x0;
}


