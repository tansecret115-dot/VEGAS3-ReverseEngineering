/* Module: mp3plug.dll
   Function: FUN_5f69c8c0
   Address: 5f69c8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f69c8c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_5f73053c;
  if ((HGDIOBJ)param_1[0x26] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x26]);
    param_1[0x26] = 0;
  }
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    WaitForSingleObject((HANDLE)param_1[2],30000);
    CloseHandle((HANDLE)param_1[2]);
    param_1[2] = 0;
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[5] = 0;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  if ((void *)param_1[0x25] != (void *)0x0) {
    FUN_5f6bce30((void *)param_1[0x25]);
    param_1[0x25] = 0;
  }
  if ((HMODULE)param_1[0x24] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[0x24]);
    param_1[0x24] = 0;
  }
  return;
}


