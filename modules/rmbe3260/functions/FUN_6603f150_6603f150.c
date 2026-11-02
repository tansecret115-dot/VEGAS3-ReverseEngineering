/* Module: rmbe3260.dll
   Function: FUN_6603f150
   Address: 6603f150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6603f150(int param_1)

{
  BOOL BVar1;
  int iVar2;
  char *pcVar3;
  _OSVERSIONINFOA local_f8;
  _SYSTEM_INFO local_64;
  int local_40 [3];
  int local_34 [3];
  int local_28 [3];
  int local_1c [3];
  int local_10 [3];
  
  if (*(int *)(*(int *)(param_1 + 4) + -8) != 0) {
    return;
  }
  FUN_6605b650(local_28);
  FUN_6605b650(local_1c);
  FUN_6605b650(local_40);
  FUN_6605b650(local_10);
  FUN_6605b650(local_34);
  local_f8.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_f8);
  if (BVar1 != 0) {
    if (local_f8.dwPlatformId == 1) {
      FUN_6605b970(local_1c,s_Win95_6606e350);
    }
    else if (local_f8.dwPlatformId == 2) {
      FUN_6605b970(local_1c,s_WinNT_6606e348);
    }
    if (*(int *)(local_1c[0] + -8) != 0) {
      FUN_6605bfd0(local_28,s__s__d__d__d_6606e33c);
    }
  }
  GetSystemInfo(&local_64);
  if (local_64.dwProcessorType == 0x182) {
    pcVar3 = s_Intel386_6606e31c;
  }
  else if (local_64.dwProcessorType == 0x1e6) {
    pcVar3 = s_Intel486_6606e328;
  }
  else {
    if (local_64.dwProcessorType != 0x24a) goto LAB_6603f255;
    pcVar3 = s_Pentium_6606e334;
  }
  FUN_6605b970(local_10,pcVar3);
LAB_6603f255:
  iVar2 = FUN_6603f2c0();
  if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 0x34) = 1;
    FUN_6605b970(local_34,&DAT_6606e318);
  }
  FUN_6605bfd0((void *)(param_1 + 4),s__s__s__s__d_6606e30c);
  FUN_6605b770(local_34);
  FUN_6605b770(local_10);
  FUN_6605b770(local_40);
  FUN_6605b770(local_1c);
  FUN_6605b770(local_28);
  return;
}


