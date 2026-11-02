/* Module: vegas30.exe
   Function: FUN_005622e0
   Address: 005622e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005622e0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"RegisterDeviceNotificationA");
    *(FARPROC *)(param_1 + 0x24) = pFVar2;
    pFVar2 = GetProcAddress(hModule,"UnregisterDeviceNotification");
    pcVar1 = *(code **)(param_1 + 0x24);
    *(FARPROC *)(param_1 + 0x28) = pFVar2;
    if ((pcVar1 != (code *)0x0) && (pFVar2 != (FARPROC)0x0)) {
      puVar5 = local_20;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      local_20[3] = DAT_00645530;
      local_10 = DAT_00645534;
      local_c = DAT_00645538;
      local_8 = DAT_0064553c;
      local_20[0] = 0x20;
      local_20[1] = 5;
      uVar3 = (*pcVar1)(param_2,local_20,0);
      *(undefined4 *)(param_1 + 0x20) = uVar3;
    }
  }
  return;
}


