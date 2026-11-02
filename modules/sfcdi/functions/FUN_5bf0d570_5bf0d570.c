/* Module: sfcdi.dll
   Function: FUN_5bf0d570
   Address: 5bf0d570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0d570(HANDLE param_1,byte *param_2,uint param_3)

{
  DWORD nNumberOfBytesToWrite;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  uchar local_5c [12];
  uchar local_50 [80];
  
  uVar1 = param_3;
  if (param_3 != 0) {
    do {
      local_50[0] = '\0';
      uVar2 = uVar1;
      uVar3 = uVar1;
      if (uVar1 < 0x21) goto joined_r0x5bf0d5a6;
      uVar2 = 0x20;
      uVar3 = uVar2;
      do {
        FUN_5bf25750(local_5c,"%02x");
        _mbscat(local_50,local_5c);
        uVar2 = uVar2 - 1;
joined_r0x5bf0d5a6:
      } while (uVar2 != 0);
      _mbscat(local_50,"\r\n");
      lpNumberOfBytesWritten = &param_3;
      lpOverlapped = (LPOVERLAPPED)0x0;
      nNumberOfBytesToWrite = lstrlenA((LPCSTR)local_50);
      WriteFile(param_1,local_50,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
      uVar1 = uVar1 - uVar3;
    } while (uVar1 != 0);
    return 0;
  }
  return 0;
}


