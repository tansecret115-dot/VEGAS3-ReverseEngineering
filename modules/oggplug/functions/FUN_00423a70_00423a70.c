/* Module: oggplug.dll
   Function: FUN_00423a70
   Address: 00423a70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00423a70(HANDLE param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  LPCSTR lpString;
  HANDLE hFile;
  int iVar2;
  int iVar3;
  uchar *_Dest;
  BOOL BVar4;
  uint _Size;
  int *piVar5;
  uint *puVar6;
  int local_10;
  DWORD local_c;
  DWORD local_8;
  DWORD local_4;
  
  piVar5 = param_3;
  puVar6 = param_2;
  hFile = param_1;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (*param_2 != 0) {
    uVar1 = param_2[1];
    local_10 = 4;
    iVar2 = FUN_00422840(param_1,0x4f464e49,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_00422430(hFile,&local_c);
    param_1 = (HANDLE)0x0;
    local_c = local_c - 8;
    if (*puVar6 != 0) {
      do {
        lpString = *(LPCSTR *)(uVar1 + 4 + (int)param_1 * 8);
        if (lpString != (LPCSTR)0x0) {
          iVar2 = lstrlenA(lpString);
          _Size = iVar2 + 1;
          iVar3 = FUN_00422770(hFile);
          if (iVar3 < 0) {
            return iVar3;
          }
          _Dest = calloc(1,_Size);
          if (_Dest == (uchar *)0x0) {
            return -0x7ff8fff2;
          }
          _mbscpy(_Dest,*(uchar **)(uVar1 + 4 + (int)param_1 * 8));
          BVar4 = WriteFile(hFile,_Dest,_Size,&local_8,(LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            free(_Dest);
            return -0x7ffb1ff7;
          }
          free(_Dest);
          if ((_Size & 1) != 0) {
            BVar4 = WriteFile(hFile,&param_1,1,&local_8,(LPOVERLAPPED)0x0);
            if (BVar4 == 0) {
              return -0x7ffb1ff7;
            }
            _Size = iVar2 + 2;
          }
          local_10 = local_10 + 8 + _Size;
          piVar5 = param_3;
          puVar6 = param_2;
        }
        param_1 = (HANDLE)((int)param_1 + 1);
      } while (param_1 < (HANDLE)*puVar6);
    }
    FUN_00422430(hFile,&local_4);
    FUN_00422450(hFile,local_c);
    BVar4 = WriteFile(hFile,&local_10,4,&local_8,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      return -0x7ffb1ff7;
    }
    FUN_00422450(hFile,local_4);
    if (piVar5 != (int *)0x0) {
      *piVar5 = local_10 + 8;
    }
  }
  return 0;
}


