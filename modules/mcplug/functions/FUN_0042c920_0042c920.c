/* Module: mcplug.dll
   Function: FUN_0042c920
   Address: 0042c920
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042c920(uchar *param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

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
  
  uVar1 = FUN_0042d600(param_1,local_104,0x104,1);
  if (-1 < (int)uVar1) {
    DeleteFileA((LPCSTR)local_104);
    if (param_3 == 0) {
      hObject = CreateFileA((LPCSTR)param_1,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                            (HANDLE)0x0);
      if (hObject != (HANDLE)0xffffffff) {
        if (param_2 == 0) {
          uVar1 = FUN_00465210((uint)hObject,0x20657563,(DWORD)&local_10c,0,unaff_EDI);
          if (((int)uVar1 < 0) && (uVar1 != 0x8004e00a)) {
            CloseHandle(hObject);
            return uVar1;
          }
          uVar1 = FUN_00465210((uint)hObject,0x6c746461,(DWORD)&local_10c,1,unaff_EDI);
          if (((int)uVar1 < 0) && (uVar1 != 0x8004e00a)) {
            CloseHandle(hObject);
            return uVar1;
          }
          uVar1 = FUN_00465210((uint)hObject,0x4f464e49,(DWORD)&local_10c,1,unaff_EDI);
          if (((int)uVar1 < 0) && (uVar1 != 0x8004e00a)) {
            CloseHandle(hObject);
            return uVar1;
          }
        }
        goto LAB_0042ca9f;
      }
    }
    else {
      if (param_5 == (int *)0x0) {
        return 0;
      }
      hObject = CreateFileA((LPCSTR)local_104,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                            (HANDLE)0x0);
      if (hObject != (HANDLE)0xffffffff) {
        uVar1 = FUN_00464c90(hObject,0x4c504653,4);
        if ((int)uVar1 < 0) {
          CloseHandle(hObject);
          return uVar1;
        }
LAB_0042ca9f:
        uVar1 = 0;
        if (param_5 != (int *)0x0) {
          local_108 = 0;
          iVar2 = (**(code **)(*param_5 + 0xc))(param_5,&local_108);
          if ((-1 < iVar2) && (unaff_EBX != (int *)0x0)) {
            uVar1 = FUN_0042cde0(hObject,unaff_EBX);
            if ((int)uVar1 < 0) {
              CloseHandle(hObject);
              (**(code **)(*unaff_EBX + 8))(unaff_EBX);
              return uVar1;
            }
            (**(code **)(*unaff_EBX + 8))(unaff_EBX);
          }
          uVar1 = (**(code **)(*param_5 + 0x1c))(param_5,&stack0xfffffeec);
          if ((-1 < (int)uVar1) && (local_10c != (int *)0x0)) {
            uVar1 = FUN_0042cb80(hObject,local_10c);
            (**(code **)(*local_10c + 8))(local_10c);
          }
          if (param_3 != 0) {
            uVar1 = FUN_0042c790(hObject,(LPCSTR)param_1);
          }
        }
        CloseHandle(hObject);
        return uVar1;
      }
    }
    DVar3 = GetLastError();
    uVar1 = FUN_0041e1b0(DVar3);
  }
  return uVar1;
}


