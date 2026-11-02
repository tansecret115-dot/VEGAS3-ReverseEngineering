/* Module: sfcdi.dll
   Function: FUN_5bf0c2e0
   Address: 5bf0c2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0c2e0(int param_1,undefined4 *param_2)

{
  uchar *lpString;
  BOOL BVar1;
  int iVar2;
  uint local_804;
  undefined1 local_800 [2048];
  
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1c),0x4100c,(LPVOID)0x0,0,local_800,0x800,
                          &local_804,(LPOVERLAPPED)0x0);
  if (BVar1 != 0) {
    if (0xb < local_804) {
      FUN_5bf25750((uchar *)(param_2 + 1),(BYTE *)"\\Device\\ScsiPort");
      lpString = (uchar *)(param_2 + 0x11);
      FUN_5bf0c150(*(undefined4 *)(param_1 + 8),(LPSTR)lpString,0x40);
      iVar2 = lstrlenA((LPCSTR)lpString);
      if (iVar2 == 0) {
        FUN_5bf25750(lpString,(BYTE *)"SCSI Device %d");
      }
      *param_2 = 8;
    }
    return 0;
  }
  return 0x80004005;
}


