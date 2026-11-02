/* Module: vegas30.exe
   Function: FUN_005f36d0
   Address: 005f36d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005f36d0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_0062cc50;
  param_1[1] = &PTR_LAB_0062cbf8;
  param_1[2] = &PTR_LAB_0062cb90;
  if ((HANDLE)param_1[0x22] != (HANDLE)0x0) {
    WaitForSingleObject((HANDLE)param_1[0x22],0xffffffff);
    if (param_1[0x14] != 0) {
      _SfVideoPlugin_DestroyCacheList_4(param_1[0x14]);
      param_1[0x14] = 0;
    }
    ReleaseMutex((HANDLE)param_1[0x22]);
    if ((HANDLE)param_1[0x22] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[0x22]);
    }
    piVar1 = (int *)param_1[0x27];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    if (DAT_0065e158 != (int *)0x0) {
      iVar2 = (**(code **)(*DAT_0065e158 + 8))(DAT_0065e158);
      if (iVar2 < 1) {
        DAT_0065e158 = (int *)0x0;
      }
    }
  }
  return;
}


