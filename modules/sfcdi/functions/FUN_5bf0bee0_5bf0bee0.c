/* Module: sfcdi.dll
   Function: FUN_5bf0bee0
   Address: 5bf0bee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf0bee0(byte *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  UINT uMode;
  DWORD dwDesiredAccess;
  HANDLE hDevice;
  BOOL BVar2;
  int iVar3;
  DWORD local_44;
  undefined1 local_40 [16];
  undefined4 local_30;
  uchar local_28 [40];
  
  pbVar1 = param_1;
  param_1[0x1c] = 0xff;
  param_1[0x1d] = 0xff;
  param_1[0x1e] = 0xff;
  param_1[0x1f] = 0xff;
  FUN_5bf0b610(local_28,param_2,param_3,&param_1);
  uMode = SetErrorMode(0x8001);
  dwDesiredAccess = 0x80000000;
  if ((DAT_5bf63128 != 0) && (4 < DAT_5bf63130)) {
    dwDesiredAccess = 0xc0000000;
  }
  hDevice = CreateFileA((LPCSTR)local_28,dwDesiredAccess,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                        (HANDLE)0x0);
  SetErrorMode(uMode);
  if (hDevice == (HANDLE)0xffffffff) {
    return -0x7fffbffb;
  }
  BVar2 = DeviceIoControl(hDevice,0x41010,(LPVOID)0x0,0,local_40,0x18,&local_44,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    CloseHandle(hDevice);
    return -0x7fffbffb;
  }
  *(undefined4 *)(pbVar1 + 0x24) = local_30;
  iVar3 = FUN_5bf0bd90(pbVar1);
  if (iVar3 < 0) {
    CloseHandle(hDevice);
    return iVar3;
  }
  *(uint *)(pbVar1 + 8) = param_2;
  *(uint *)(pbVar1 + 0xc) = param_3;
  *(HANDLE *)(pbVar1 + 0x1c) = hDevice;
  return 0;
}


