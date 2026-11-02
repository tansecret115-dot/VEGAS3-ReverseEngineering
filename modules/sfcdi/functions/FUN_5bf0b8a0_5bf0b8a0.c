/* Module: sfcdi.dll
   Function: FUN_5bf0b8a0
   Address: 5bf0b8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_5bf0b8a0(LPCSTR param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined **ppuVar1;
  UINT uMode;
  DWORD dwDesiredAccess;
  HANDLE hDevice;
  BOOL BVar2;
  undefined4 local_218;
  undefined2 local_214;
  undefined1 uStack_212;
  byte bStack_211;
  uint local_20c;
  CHAR local_208 [8];
  int local_200;
  uchar local_104 [260];
  
  *param_2 = 0xffffffff;
  *param_3 = 0xffffffff;
  *param_4 = 0xffffffff;
  QueryDosDeviceA(param_1,local_208,0x104);
  ppuVar1 = &PTR_s_Harddisk_5bf63090;
  do {
    if (local_200 == *(int *)*ppuVar1) {
      return 0;
    }
    ppuVar1 = ppuVar1 + 1;
  } while (ppuVar1 < s__Scsi_Port__d_5bf6309b + 1);
  FUN_5bf25750(local_104,(BYTE *)"\\\\.\\%s");
  uMode = SetErrorMode(0x8001);
  dwDesiredAccess = 0x80000000;
  if ((DAT_5bf63128 != 0) && (4 < DAT_5bf63130)) {
    dwDesiredAccess = 0xc0000000;
  }
  hDevice = CreateFileA((LPCSTR)local_104,dwDesiredAccess,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                        (HANDLE)0x0);
  SetErrorMode(uMode);
  if (hDevice == (HANDLE)0xffffffff) {
    return 0;
  }
  local_218 = 0;
  local_214 = 0;
  uStack_212 = 0;
  bStack_211 = 0;
  BVar2 = DeviceIoControl(hDevice,0x41018,(LPVOID)0x0,0,&local_218,8,&local_20c,(LPOVERLAPPED)0x0);
  if ((BVar2 == 0) || (local_20c < 8)) {
    BVar2 = 0;
  }
  else {
    *param_2 = CONCAT12(uStack_212,local_214) & 0xff;
    *param_3 = CONCAT11(bStack_211,uStack_212) & 0xff;
    *param_4 = (uint)bStack_211;
  }
  CloseHandle(hDevice);
  return BVar2;
}


