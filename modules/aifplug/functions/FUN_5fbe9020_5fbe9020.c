/* Module: aifplug.dll
   Function: FUN_5fbe9020
   Address: 5fbe9020
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5fbe9020(uchar *param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  HANDLE hObject;
  int iVar2;
  DWORD DVar3;
  int *unaff_EBX;
  int unaff_EDI;
  int *local_10c;
  undefined4 local_108;
  uchar local_104 [260];
  
  uVar1 = FUN_5fbe9d00(param_1,local_104,0x104,1);
  if (-1 < (int)uVar1) {
    DeleteFileA((LPCSTR)local_104);
    if (param_3 == 0) {
      hObject = CreateFileA((LPCSTR)param_1,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                            (HANDLE)0x0);
      if (hObject != (HANDLE)0xffffffff) {
        if (param_2 == 0) {
          uVar1 = FUN_5fbe0790((uint)hObject,0x20657563,(DWORD)&local_10c,0,unaff_EDI);
          if (((int)uVar1 < 0) && (uVar1 != 0x8004e00a)) {
            CloseHandle(hObject);
            return uVar1;
          }
          uVar1 = FUN_5fbe0790((uint)hObject,0x6c746461,(DWORD)&local_10c,1,unaff_EDI);
          if (((int)uVar1 < 0) && (uVar1 != 0x8004e00a)) {
            CloseHandle(hObject);
            return uVar1;
          }
          uVar1 = FUN_5fbe0790((uint)hObject,0x4f464e49,(DWORD)&local_10c,1,unaff_EDI);
          if (((int)uVar1 < 0) && (uVar1 != 0x8004e00a)) {
            CloseHandle(hObject);
            return uVar1;
          }
        }
        goto LAB_5fbe919f;
      }
    }
    else {
      if (param_5 == (int *)0x0) {
        return 0;
      }
      hObject = CreateFileA((LPCSTR)local_104,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                            (HANDLE)0x0);
      if (hObject != (HANDLE)0xffffffff) {
        uVar1 = FUN_5fbe0210(hObject,0x4c504653,4);
        if ((int)uVar1 < 0) {
          CloseHandle(hObject);
          return uVar1;
        }
LAB_5fbe919f:
        uVar1 = 0;
        if (param_5 != (int *)0x0) {
          local_108 = 0;
          iVar2 = (**(code **)(*param_5 + 0xc))(param_5,&local_108);
          if ((-1 < iVar2) && (unaff_EBX != (int *)0x0)) {
            uVar1 = FUN_5fbe94e0(hObject,unaff_EBX);
            if ((int)uVar1 < 0) {
              CloseHandle(hObject);
              (**(code **)(*unaff_EBX + 8))(unaff_EBX);
              return uVar1;
            }
            (**(code **)(*unaff_EBX + 8))(unaff_EBX);
          }
          uVar1 = (**(code **)(*param_5 + 0x1c))(param_5,&stack0xfffffeec);
          if ((-1 < (int)uVar1) && (local_10c != (int *)0x0)) {
            uVar1 = FUN_5fbe9280(hObject,local_10c);
            (**(code **)(*local_10c + 8))(local_10c);
          }
          if (param_3 != 0) {
            uVar1 = FUN_5fbe8e90(hObject,(LPCSTR)param_1);
          }
        }
        CloseHandle(hObject);
        return uVar1;
      }
    }
    DVar3 = GetLastError();
    uVar1 = FUN_5fbdf2c0(DVar3);
  }
  return uVar1;
}


