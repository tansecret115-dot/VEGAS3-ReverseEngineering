/* Module: vegas30.exe
   Function: FUN_004e6b30
   Address: 004e6b30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004e6b3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004e6b30(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_30 [12];
  
  _DAT_0064cde4 = 1;
  if (DAT_0064ce0c != (HANDLE)0x0) {
    puVar1 = local_30;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    local_30[3] = 0xffffffff;
    _SfQueueInsert_8(&DAT_0064cd88,local_30);
    WaitForSingleObject(DAT_0064ce0c,0xffffffff);
    CloseHandle(DAT_0064ce0c);
    DAT_0064ce0c = (HANDLE)0x0;
  }
  if (DAT_0064cdcc != 0) {
    iVar2 = _SfQueueRemove_8(&DAT_0064cdac,0);
    while (iVar2 != 0) {
      FUN_004e6ce0(iVar2);
      iVar2 = _SfQueueRemove_8(&DAT_0064cdac,0);
    }
    _SfQueueDelete_4(&DAT_0064cdac);
  }
  if (DAT_0064cda8 != 0) {
    iVar2 = _SfQueueRemove_8(&DAT_0064cd88,0);
    while (iVar2 != 0) {
      FUN_004e6ce0(iVar2);
      iVar2 = _SfQueueRemove_8(&DAT_0064cd88,0);
    }
    _SfQueueDelete_4(&DAT_0064cd88);
  }
  return 0;
}


