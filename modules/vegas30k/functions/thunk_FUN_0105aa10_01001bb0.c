/* Module: vegas30k.dll
   Function: thunk_FUN_0105aa10
   Address: 01001bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void thunk_FUN_0105aa10(void)

{
  int iVar1;
  int iStack_4;
  
  if (DAT_0120e878 == 0) {
    iVar1 = _SfList_CreateExZ_32(&iStack_4,0xc,0,0,0x80000004,0,0,0);
    if (-1 < iVar1) {
      DAT_0120e878 = iStack_4;
    }
  }
  return;
}


