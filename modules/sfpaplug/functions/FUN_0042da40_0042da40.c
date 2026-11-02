/* Module: sfpaplug.dll
   Function: FUN_0042da40
   Address: 0042da40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042da40(uchar *param_1,int param_2,undefined4 param_3,int *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  DWORD DVar3;
  uint uVar4;
  uchar *lpFileName;
  int *local_10c;
  int local_108;
  uchar local_104 [260];
  
  uVar4 = 0;
  local_108 = 0;
  iVar1 = FUN_0042d8d0(param_4,param_5);
  if (param_2 == 0) {
    FUN_0042d630(param_1,local_104,0x104,1);
    iVar2 = FUN_0042d540((LPCSTR)param_1,(LPCSTR)local_104);
    if (iVar2 == 0) {
      FUN_0042d630(param_1,local_104,0x104,0);
      iVar2 = FUN_0042d540((LPCSTR)param_1,(LPCSTR)local_104);
      if (iVar2 != 0) goto LAB_0042db8e;
    }
    else {
LAB_0042db8e:
      uVar4 = FUN_0042d9b0((LPCSTR)local_104);
    }
    FUN_0042d9b0((LPCSTR)param_1);
    lpFileName = param_1;
    if (iVar1 == 0) {
      return uVar4;
    }
  }
  else {
    FUN_0042d630(param_1,local_104,0x104,0);
    iVar2 = FUN_0042d540((LPCSTR)param_1,(LPCSTR)local_104);
    if (iVar2 == 0) {
      FUN_0042d630(param_1,local_104,0x104,1);
      iVar2 = FUN_0042d540((LPCSTR)param_1,(LPCSTR)local_104);
      if (iVar2 == 0) {
        if (iVar1 == 0) {
          return 0;
        }
        hObject = CreateFileA((LPCSTR)local_104,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                              (HANDLE)0x0);
        local_108 = 1;
        uVar4 = FUN_00425270(hObject,0x4c504653,4);
        if ((int)uVar4 < 0) {
          CloseHandle(hObject);
          return uVar4;
        }
        goto LAB_0042dbc3;
      }
    }
    FUN_0042d9b0((LPCSTR)local_104);
    if (iVar1 == 0) {
      return 0;
    }
    lpFileName = local_104;
  }
  hObject = CreateFileA((LPCSTR)lpFileName,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                        (HANDLE)0x0);
LAB_0042dbc3:
  if (hObject == (HANDLE)0xffffffff) {
    DVar3 = GetLastError();
    uVar4 = FUN_00429570(DVar3);
    return uVar4;
  }
  uVar4 = 0;
  if (param_4 != (int *)0x0) {
    if ((param_5 & 4) != 0) {
      local_10c = (int *)0x0;
      uVar4 = (**(code **)(*param_4 + 0xc))(param_4,&local_10c);
      if ((-1 < (int)uVar4) && (local_10c != (int *)0x0)) {
        uVar4 = FUN_0042ce10(hObject,local_10c);
        if ((int)uVar4 < 0) {
          CloseHandle(hObject);
          (**(code **)(*local_10c + 8))(local_10c);
          return uVar4;
        }
        (**(code **)(*local_10c + 8))(local_10c);
      }
    }
    if ((param_5 & 1) != 0) {
      local_10c = (int *)0x0;
      uVar4 = (**(code **)(*param_4 + 0x1c))(param_4,&local_10c);
      if ((-1 < (int)uVar4) && (local_10c != (int *)0x0)) {
        uVar4 = FUN_0042cbb0(hObject,local_10c);
        (**(code **)(*local_10c + 8))(local_10c);
      }
    }
    if (local_108 != 0) {
      uVar4 = FUN_0042c7c0(hObject,(LPCSTR)param_1);
    }
  }
  CloseHandle(hObject);
  return uVar4;
}


