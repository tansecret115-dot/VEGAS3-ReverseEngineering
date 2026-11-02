/* Module: g2plug.dll
   Function: FUN_5f83f780
   Address: 5f83f780
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f83f780(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5f876f34)(&DAT_5f877f0c);
      FUN_5f83f810((uint *)&DAT_5f877f04);
      uVar1 = FUN_5f83f7f0((uint *)&DAT_5f877f04);
      if ((uint)uVar1 < 0x3e9) {
        DAT_5f877f00 = 1;
      }
    }
  }
  return;
}


