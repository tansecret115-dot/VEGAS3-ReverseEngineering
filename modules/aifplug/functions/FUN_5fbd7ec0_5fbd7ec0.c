/* Module: aifplug.dll
   Function: FUN_5fbd7ec0
   Address: 5fbd7ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5fbd7fde) */

int FUN_5fbd7ec0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  HANDLE hObject;
  DWORD DVar2;
  int iVar3;
  int *unaff_EDI;
  int *piVar4;
  undefined4 local_144 [4];
  undefined1 auStack_134 [36];
  uchar auStack_110 [264];
  uchar *puStack_8;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  piVar4 = &DAT_5fbfebf0;
  local_144[0] = 0;
  iVar1 = (**(code **)*param_2)(param_2,&DAT_5fbfebf0,local_144);
  if ((-1 < iVar1) && (unaff_EDI != (int *)0x0)) {
    auStack_110[0] = '\0';
    iVar1 = FUN_5fbe9d00(puStack_8,auStack_110,0x104,1);
    hObject = CreateFileA((LPCSTR)auStack_110,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,
                          (HANDLE)0x0);
    if (hObject != (HANDLE)0xffffffff) {
      DVar2 = GetLastError();
      if (DVar2 != 0xb7) {
        iVar1 = FUN_5fbe0210(hObject,0x4c504653,4);
        if (iVar1 < 0) {
          CloseHandle(hObject);
          return iVar1;
        }
        FUN_5fbe8e90(hObject,(LPCSTR)puStack_8);
      }
      iVar3 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,local_144);
      if (iVar3 == 0) {
        iVar1 = FUN_5fbd8210(hObject,&stack0xfffffeb4);
      }
      iVar3 = (**(code **)(*piVar4 + 0x10))(piVar4,auStack_134);
      if (iVar3 == 0) {
        (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,&stack0xfffffeb4);
      }
      CloseHandle(hObject);
    }
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    return iVar1;
  }
  return 0;
}


