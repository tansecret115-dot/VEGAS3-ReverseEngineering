/* Module: Setup.exe
   Function: FUN_004109e0
   Address: 004109e0
   Source: Ghidra pseudocode (Stage 10 batch) */


HANDLE __thiscall FUN_004109e0(void *this,uint *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  HANDLE hFile;
  uint uVar4;
  bool bVar5;
  uint local_114;
  uint local_110;
  DWORD local_108;
  uchar local_104 [260];
  
  hFile = (HANDLE)0x0;
  iVar1 = *(int *)((int)this + 0x50);
  uVar4 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(uint *)((int)this + 0x4c);
  if ((iVar1 <= (int)uVar2) && ((iVar1 < (int)uVar2 || (uVar3 <= uVar4)))) {
    local_114 = uVar4 - uVar3;
    local_110 = (uVar2 - iVar1) - (uint)(uVar4 < uVar3);
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    FUN_00410b10(this,(char *)((int)this + 0x468),iVar1 + 1,local_104);
    hFile = CreateFileA((LPCSTR)local_104,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      uVar4 = GetFileSize(hFile,&local_108);
      do {
        if (((int)local_110 < (int)local_108) ||
           (((int)local_110 <= (int)local_108 && (local_114 < uVar4)))) break;
        bVar5 = local_114 < uVar4;
        local_114 = local_114 - uVar4;
        local_110 = (local_110 - local_108) - (uint)bVar5;
        CloseHandle(hFile);
        iVar1 = *param_2;
        *param_2 = iVar1 + 1;
        FUN_00410b10(this,(char *)((int)this + 0x468),iVar1 + 1,local_104);
        hFile = CreateFileA((LPCSTR)local_104,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                            (HANDLE)0x0);
        uVar4 = GetFileSize(hFile,&local_108);
      } while (hFile != (HANDLE)0xffffffff);
    }
    *param_1 = local_114;
    param_1[1] = local_110;
  }
  return hFile;
}


