/* Module: sdpp3260.dll
   Function: CanUnload
   Address: 10001040
   Source: Ghidra pseudocode (Stage 10 batch) */


uint CanUnload(void)

{
                    /* 0x1040  1  CanUnload */
  return -(uint)(DAT_10009740 != 0) & 0x80004005;
}


