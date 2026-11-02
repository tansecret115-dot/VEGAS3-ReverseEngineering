/* Module: Setup.exe
   Function: _SfErrorHandler_DetailsInit@0
   Address: 0041f2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfErrorHandler_DetailsInit_0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0044bb40;
                    /* 0x1f2e0  118  _SfErrorHandler_DetailsInit@0 */
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


