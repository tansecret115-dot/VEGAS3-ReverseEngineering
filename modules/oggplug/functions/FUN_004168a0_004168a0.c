/* Module: oggplug.dll
   Function: FUN_004168a0
   Address: 004168a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004169da) */

int FUN_004168a0(uchar *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  HANDLE hObject;
  DWORD DVar2;
  int iVar3;
  int *unaff_ESI;
  uchar *lpFileName;
  int *piVar4;
  int local_144 [4];
  undefined1 auStack_134 [48];
  uchar local_104 [260];
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  lpFileName = param_1;
  if (param_3 != 0) {
    iVar1 = FUN_00415940(param_1,local_104,0x104,1);
    if (iVar1 < 0) {
      return iVar1;
    }
    lpFileName = local_104;
  }
  piVar4 = local_144;
  local_144[0] = 0;
  iVar1 = (**(code **)*param_2)(param_2,&DAT_00446c60);
  if ((-1 < iVar1) && (unaff_ESI != (int *)0x0)) {
    hObject = CreateFileA((LPCSTR)lpFileName,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,
                          (HANDLE)0x0);
    if (hObject != (HANDLE)0xffffffff) {
      if ((param_3 != 0) && (DVar2 = GetLastError(), DVar2 != 0xb7)) {
        iVar1 = FUN_00422880(hObject,0x4c504653,4);
        if (iVar1 < 0) {
          CloseHandle(hObject);
          return iVar1;
        }
        FUN_00414ad0(hObject,(LPCSTR)param_1);
      }
      iVar3 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,local_144);
      if (iVar3 == 0) {
        iVar1 = FUN_004166b0(hObject,&stack0xfffffeb4);
      }
      iVar3 = (**(code **)(*piVar4 + 0x10))(piVar4,auStack_134);
      if (iVar3 == 0) {
        (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,&stack0xfffffeb4);
      }
      CloseHandle(hObject);
    }
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    return iVar1;
  }
  return 0;
}


