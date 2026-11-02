/* Module: sctplug.dll
   Function: FUN_0042da20
   Address: 0042da20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042da20(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_0043ca24)(&DAT_00442204);
      FUN_0042dab0((uint *)&DAT_004421fc);
      uVar1 = FUN_0042da90((uint *)&DAT_004421fc);
      if ((uint)uVar1 < 0x3e9) {
        DAT_004421f8 = 1;
      }
    }
  }
  return;
}


