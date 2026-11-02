/* Module: pncrt.dll
   Function: FUN_78009c70
   Address: 78009c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78009c70(void)

{
  FUN_78009390();
  if (DAT_7803d248 != 0xffffffff) {
    TlsFree(DAT_7803d248);
    DAT_7803d248 = 0xffffffff;
  }
  return;
}


