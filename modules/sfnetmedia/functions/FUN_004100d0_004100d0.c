/* Module: sfnetmedia.dll
   Function: FUN_004100d0
   Address: 004100d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_004100d0(int param_1)

{
  HANDLE hHandle;
  HCURSOR pHVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  uchar local_104 [260];
  
  uVar4 = 0;
  _mbscpy(local_104,*(uchar **)(param_1 + 4));
  hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"Sonic Foundry NetMedia Provider Guard");
  if (hHandle != (HANDLE)0x0) {
    pHVar1 = (HCURSOR)FUN_0041b280(0x7f02);
    pHVar1 = SetCursor(pHVar1);
    DVar2 = WaitForSingleObject(hHandle,3000);
    if (DVar2 != 0x102) {
      puVar5 = local_104;
      uVar4 = 1;
      iVar3 = FUN_00401310();
      uVar4 = FUN_0041a5b0(iVar3,uVar4,puVar5);
      ReleaseMutex(hHandle);
    }
    SetCursor(pHVar1);
    CloseHandle(hHandle);
    return uVar4;
  }
  return 0;
}


