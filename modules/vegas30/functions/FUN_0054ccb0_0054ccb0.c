/* Module: vegas30.exe
   Function: FUN_0054ccb0
   Address: 0054ccb0
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_0054ccb0(HANDLE param_1,int param_2)

{
  LPCSTR lpString;
  uint uVar1;
  uint uVar2;
  int iVar3;
  DWORD nNumberOfBytesToWrite;
  BOOL BVar4;
  int iVar5;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_210;
  int local_20c;
  CHAR local_208 [520];
  
  _SfGetFileNameExtensionPtrA_4(param_2 + 0x170);
  local_20c = *(int *)(param_2 + 0x114);
  lpString = *(LPCSTR *)(param_2 + 0x154);
  uVar1 = *(uint *)(param_2 + 0x110);
  uVar2 = *(uint *)(param_2 + 0x120);
  iVar5 = *(int *)(param_2 + 0x124);
  iVar3 = FUN_0054cc50(param_2);
  if ((iVar3 != 0) && (iVar3 = lstrlenA(lpString), iVar3 != 0)) {
    iVar3 = uVar2 - uVar1;
    iVar5 = (iVar5 - local_20c) - (uint)(uVar2 < uVar1);
    if ((iVar5 < 1) && (iVar5 < 0)) {
      iVar3 = 0;
      iVar5 = 0;
    }
    local_210 = 0;
    SfPrintF(local_208,
             "/CAPTURE \"%s\" /CAPTURETAPENAME \"%s\" /CAPTURESTART \"%I64d\" /CAPTURELENGTH \"%I64d\" /CAPTUREID \"%d\" "
             ,param_2 + 0x170,lpString,uVar1,local_20c,iVar3,iVar5,*(undefined4 *)(param_2 + 0x164))
    ;
    lpNumberOfBytesWritten = &local_210;
    lpOverlapped = (LPOVERLAPPED)0x0;
    nNumberOfBytesToWrite = lstrlenA(local_208);
    BVar4 = WriteFile(param_1,local_208,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    return BVar4;
  }
  return 0;
}


