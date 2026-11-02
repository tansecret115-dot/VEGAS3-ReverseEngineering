/* Module: vegas30k.dll
   Function: FUN_0105aa10
   Address: 0105aa10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0105aa10(void)

{
  int iVar1;
  int local_4;
  
  if (DAT_0120e878 == 0) {
    iVar1 = _SfList_CreateExZ_32(&local_4,0xc,0,0,0x80000004,0,0,0);
    if (-1 < iVar1) {
      DAT_0120e878 = local_4;
    }
  }
  return;
}


