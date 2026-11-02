/* Module: vidcap30.exe
   Function: FUN_00416450
   Address: 00416450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0041645c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00416450(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_2c [11];
  
  _DAT_005bc25c = 1;
  if (DAT_005bc280 != (HANDLE)0x0) {
    puVar1 = local_2c;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    local_2c[3] = 0xffffffff;
    _SfQueueInsert_8(&DAT_005bc200,local_2c);
    WaitForSingleObject(DAT_005bc280,0xffffffff);
    CloseHandle(DAT_005bc280);
    DAT_005bc280 = (HANDLE)0x0;
  }
  if (DAT_005bc244 != 0) {
    iVar2 = _SfQueueRemove_8(&DAT_005bc224,0);
    while (iVar2 != 0) {
      FUN_00416600(iVar2);
      iVar2 = _SfQueueRemove_8(&DAT_005bc224,0);
    }
    _SfQueueDelete_4(&DAT_005bc224);
  }
  if (DAT_005bc220 != 0) {
    iVar2 = _SfQueueRemove_8(&DAT_005bc200,0);
    while (iVar2 != 0) {
      FUN_00416600(iVar2);
      iVar2 = _SfQueueRemove_8(&DAT_005bc200,0);
    }
    _SfQueueDelete_4(&DAT_005bc200);
  }
  return 0;
}


