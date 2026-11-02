/* Module: rmme3260.dll
   Function: FUN_6625bb10
   Address: 6625bb10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_6625bb10(void *this,LPCSTR param_1,uint param_2)

{
  DWORD DVar1;
  HANDLE pvVar2;
  DWORD dwCreationDisposition;
  DWORD flProtect;
  
  if ((param_2 & 8) != 0) {
    return 0x80070057;
  }
  (**(code **)(*(int *)this + 0x18))();
  if ((param_2 & 3) == 0) {
    DVar1 = 0x80000000;
    flProtect = 0x18000002;
  }
  else {
    DVar1 = 0xc0000000;
    flProtect = 0x18000004;
  }
  if ((param_2 & 0x400) == 0) {
    if ((param_2 & 0x100) != 0) {
      dwCreationDisposition = 4;
      goto LAB_6625bb7b;
    }
  }
  else if ((param_2 & 0x100) != 0) {
    dwCreationDisposition = 1;
    goto LAB_6625bb7b;
  }
  dwCreationDisposition = (-(uint)((param_2 & 0x200) != 0) & 2) + 3;
LAB_6625bb7b:
  pvVar2 = CreateFileA(param_1,DVar1,3,(LPSECURITY_ATTRIBUTES)0x0,dwCreationDisposition,0,
                       (HANDLE)0x0);
  *(HANDLE *)((int)this + 0xc) = pvVar2;
  if (pvVar2 != (HANDLE)0xffffffff) {
    DVar1 = GetFileSize(pvVar2,(LPDWORD)((int)this + 0x18));
    *(DWORD *)((int)this + 0x1c) = DVar1;
    pvVar2 = CreateFileMappingA(*(HANDLE *)((int)this + 0xc),(LPSECURITY_ATTRIBUTES)0x0,flProtect,0,
                                0,(LPCSTR)0x0);
    *(HANDLE *)((int)this + 8) = pvVar2;
    if (pvVar2 != (HANDLE)0x0) {
      return 0;
    }
  }
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    return 0;
  }
  DVar1 = GetLastError();
  return DVar1 & 0xffff | 0x80070000;
}


