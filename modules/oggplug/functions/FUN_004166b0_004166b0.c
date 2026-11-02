/* Module: oggplug.dll
   Function: FUN_004166b0
   Address: 004166b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004166b0(HANDLE param_1,LPCVOID param_2)

{
  HANDLE hFile;
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  DWORD local_4;
  
  hFile = param_1;
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar1 = FUN_00422a00(hFile,&local_10,&local_14);
  if (-1 < iVar1) {
    FUN_00422430(hFile,&local_4);
    local_c = local_10;
    uVar2 = FUN_00422ab0(hFile,0x64696361,&local_8,&local_c);
    if (-1 < (int)uVar2) {
      if (local_8 == 0x18) {
        BVar3 = WriteFile(hFile,param_2,0x18,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
        return (-(uint)(BVar3 != 0) & 0x7ffb1ff7) + 0x8004e009;
      }
      SetFilePointer(hFile,-8,(PLONG)0x0,1);
      local_14 = 0x4b4e554a;
      BVar3 = WriteFile(hFile,&local_14,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
      if (BVar3 == 0) {
        return -0x7ffb1ff7;
      }
    }
    SetFilePointer(hFile,0,(PLONG)0x0,2);
    iVar1 = FUN_00416260(hFile,param_2,&param_1);
    if (-1 < iVar1) {
      FUN_00422690(hFile,(int)param_1);
      iVar1 = 0;
    }
  }
  return iVar1;
}


