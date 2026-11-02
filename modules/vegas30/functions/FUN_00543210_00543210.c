/* Module: vegas30.exe
   Function: FUN_00543210
   Address: 00543210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00543210(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_006575dc != (HANDLE)0x0) {
    FUN_00542e40(&DAT_006575d0,2);
    WaitForSingleObject(DAT_006575dc,0xffffffff);
    CloseHandle(DAT_006575dc);
  }
  if (DAT_006575d0 != 0) {
    _SfList_Destroy_4(DAT_006575d0);
  }
  if (DAT_006575e4 != 0) {
    _SfList_Destroy_4(DAT_006575e4);
  }
  if (DAT_006575d8 != (HANDLE)0x0) {
    CloseHandle(DAT_006575d8);
  }
  if (DAT_006575e8 != (HANDLE)0x0) {
    CloseHandle(DAT_006575e8);
  }
  puVar2 = &DAT_006575d0;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


