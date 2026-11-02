/* Module: erv13260.dll
   Function: RGB3toYUV420Free
   Address: 635f1dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RGB3toYUV420Free(void)

{
  void *pvVar1;
  
                    /* 0x1dd0  1  RGB3toYUV420Free */
  pvVar1 = DAT_63606cc0;
  if (DAT_63606cc0 != (void *)0x0) {
    FUN_635f1f30((int)DAT_63606cc0);
    operator_delete(pvVar1);
    DAT_63606cc0 = (void *)0x0;
  }
  return 0;
}


