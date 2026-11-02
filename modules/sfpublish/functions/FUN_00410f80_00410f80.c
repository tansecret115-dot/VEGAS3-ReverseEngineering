/* Module: sfpublish.dll
   Function: FUN_00410f80
   Address: 00410f80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_00410f80(undefined4 *param_1)

{
  HANDLE hHandle;
  HCURSOR pHVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  BYTE *pBVar5;
  
  uVar4 = 0;
  hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"Sonic Foundry Publishing Provider Guard");
  if (hHandle != (HANDLE)0x0) {
    pHVar1 = (HCURSOR)FUN_00423b10(0x7f02);
    pHVar1 = SetCursor(pHVar1);
    DVar2 = WaitForSingleObject(hHandle,3000);
    if (DVar2 != 0x102) {
      pBVar5 = (BYTE *)*param_1;
      uVar4 = 1;
      iVar3 = FUN_00401310();
      uVar4 = FUN_0041f940(iVar3,uVar4,pBVar5);
      ReleaseMutex(hHandle);
    }
    SetCursor(pHVar1);
    CloseHandle(hHandle);
    return uVar4;
  }
  return 0;
}


