/* Module: vidcap30.exe
   Function: FUN_0045c5b0
   Address: 0045c5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0045c5b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *lpRootPathName;
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  undefined *puStack_30;
  CHAR local_1c [16];
  int local_c;
  LPCRITICAL_SECTION local_8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  puStack_30 = (undefined *)0x45c5c8;
  local_8 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  FUN_0045c2a0();
  piStack_34 = param_1 + 10;
  puStack_30 = &DAT_0058b7b8;
  uStack_38 = param_3;
  uStack_3c = param_2;
  local_c = (**(code **)(*param_1 + 8))();
  if (-1 < local_c) {
    lpRootPathName = param_1 + 0x4e;
    _SfGetRootPathFromFilePath_12(param_2,lpRootPathName,0x104);
    iVar1 = _SfGetDiskFreeSpace_8(lpRootPathName,0x100000);
    param_1[0x4d] = iVar1;
    GetVolumeInformationA
              ((LPCSTR)lpRootPathName,(LPSTR)0x0,0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,local_1c,
               0x10);
    iVar1 = lstrlenA((LPCSTR)&PTR_LAB_0058c2a8);
    FUN_00579db0();
    FUN_00579db0();
    lstrcpynA((LPSTR)&uStack_3c,local_1c,iVar1 + 1);
    *(undefined1 *)((int)&uStack_3c + iVar1) = 0;
    *(undefined1 *)((int)&uStack_3c + iVar1) = 0;
    lstrcpynA((LPSTR)&uStack_3c,(LPCSTR)&PTR_LAB_0058c2a8,iVar1 + 1);
    *(undefined1 *)((int)&uStack_3c + iVar1) = 0;
    *(undefined1 *)((int)&uStack_3c + iVar1) = 0;
    iVar1 = lstrcmpA((LPCSTR)&uStack_3c,(LPCSTR)&uStack_3c);
    param_1[0x4c] = (uint)(iVar1 == 0);
    lpCriticalSection = local_8;
  }
  LeaveCriticalSection(lpCriticalSection);
  return local_c;
}


