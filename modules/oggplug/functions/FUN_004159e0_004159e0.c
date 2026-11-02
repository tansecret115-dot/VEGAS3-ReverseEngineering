/* Module: oggplug.dll
   Function: FUN_004159e0
   Address: 004159e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004159e0(uchar *param_1,int param_2,undefined4 param_3,int *param_4,uint param_5)

{
  int iVar1;
  HANDLE hObject;
  DWORD DVar2;
  int *local_108;
  uchar local_104 [260];
  
  FUN_00415940(param_1,local_104,0x104,0);
  iVar1 = FUN_00415850((LPCSTR)param_1,(LPCSTR)local_104);
  if (iVar1 != 0) {
    DeleteFileA((LPCSTR)local_104);
  }
  FUN_00415940(param_1,local_104,0x104,1);
  iVar1 = FUN_00415850((LPCSTR)param_1,(LPCSTR)local_104);
  if (iVar1 != 0) {
    DeleteFileA((LPCSTR)local_104);
  }
  iVar1 = FUN_00415be0(param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    hObject = CreateFileA((LPCSTR)param_1,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0
                         );
  }
  else {
    hObject = CreateFileA((LPCSTR)local_104,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                          (HANDLE)0x0);
    if (hObject == (HANDLE)0xffffffff) goto LAB_00415bc0;
    iVar1 = FUN_00422880(hObject,0x4c504653,4);
    if (iVar1 < 0) {
      CloseHandle(hObject);
      return iVar1;
    }
  }
  if (hObject != (HANDLE)0xffffffff) {
    iVar1 = 0;
    if (param_4 != (int *)0x0) {
      if ((param_5 & 4) != 0) {
        local_108 = (int *)0x0;
        iVar1 = (**(code **)(*param_4 + 0xc))(param_4,&local_108);
        if ((-1 < iVar1) && (local_108 != (int *)0x0)) {
          iVar1 = FUN_00415120(hObject,local_108);
          if (iVar1 < 0) {
            CloseHandle(hObject);
            (**(code **)(*local_108 + 8))(local_108);
            return iVar1;
          }
          (**(code **)(*local_108 + 8))(local_108);
        }
      }
      if ((param_5 & 1) != 0) {
        local_108 = (int *)0x0;
        iVar1 = (**(code **)(*param_4 + 0x1c))(param_4,&local_108);
        if ((-1 < iVar1) && (local_108 != (int *)0x0)) {
          iVar1 = FUN_00414ec0(hObject,local_108);
          (**(code **)(*local_108 + 8))(local_108);
        }
      }
      if (param_2 != 0) {
        iVar1 = FUN_00414ad0(hObject,(LPCSTR)param_1);
      }
    }
    CloseHandle(hObject);
    return iVar1;
  }
LAB_00415bc0:
  DVar2 = GetLastError();
  iVar1 = FUN_00424200(DVar2);
  return iVar1;
}


