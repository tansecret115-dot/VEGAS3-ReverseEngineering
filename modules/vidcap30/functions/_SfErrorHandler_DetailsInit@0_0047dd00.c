/* Module: vidcap30.exe
   Function: _SfErrorHandler_DetailsInit@0
   Address: 0047dd00
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfErrorHandler_DetailsInit_0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_005bec90;
                    /* 0x7dd00  369  _SfErrorHandler_DetailsInit@0 */
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


