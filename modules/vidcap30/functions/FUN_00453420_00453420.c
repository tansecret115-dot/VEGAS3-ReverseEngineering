/* Module: vidcap30.exe
   Function: FUN_00453420
   Address: 00453420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453420(undefined4 *param_1)

{
  HMODULE hModule;
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_005bc3fc == (FARPROC)0x0) {
    hModule = GetModuleHandleA("USER32");
    if (hModule != (HMODULE)0x0) {
      DAT_005bc3fc = GetProcAddress(hModule,"RegisterDeviceNotificationA");
      DAT_005bc400 = GetProcAddress(hModule,"UnregisterDeviceNotification");
      if ((DAT_005bc3fc != (FARPROC)0x0) && (DAT_005bc400 != (FARPROC)0x0)) {
        puVar2 = local_20;
        for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        local_20[3] = DAT_005a25a8;
        local_10 = DAT_005a25ac;
        local_c = DAT_005a25b0;
        local_8 = DAT_005a25b4;
        local_20[0] = 0x20;
        local_20[1] = 5;
        iVar1 = (*DAT_005bc3fc)(*param_1,local_20,0);
        param_1[0x44] = iVar1;
      }
    }
  }
  return;
}


