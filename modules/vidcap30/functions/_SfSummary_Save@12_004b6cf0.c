/* Module: vidcap30.exe
   Function: _SfSummary_Save@12
   Address: 004b6cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfSummary_Save_12(HANDLE param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  LPCSTR lpString;
  undefined4 uVar2;
  HANDLE hFile;
  int iVar3;
  int iVar4;
  uchar *_Dest;
  BOOL BVar5;
  uint _Size;
  int *piVar6;
  uint *puVar7;
  int local_10;
  int local_c;
  DWORD local_8;
  undefined4 local_4;
  
  piVar6 = param_3;
  puVar7 = param_2;
                    /* 0xb6cf0  633  _SfSummary_Save@12 */
  hFile = param_1;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (*param_2 != 0) {
    uVar1 = param_2[1];
    local_10 = 4;
    iVar3 = riff_WriteListHeader(param_1,0x4f464e49,0);
    if (iVar3 != 0) {
      return iVar3;
    }
    riff_SaveLocation(hFile,&local_c);
    param_1 = (HANDLE)0x0;
    local_c = local_c + -8;
    if (*puVar7 != 0) {
      do {
        lpString = *(LPCSTR *)(uVar1 + 4 + (int)param_1 * 8);
        if (lpString != (LPCSTR)0x0) {
          uVar2 = *(undefined4 *)(uVar1 + (int)param_1 * 8);
          iVar3 = lstrlenA(lpString);
          _Size = iVar3 + 1;
          iVar4 = riff_WriteChunkHeader(hFile,uVar2,_Size);
          if (iVar4 < 0) {
            return iVar4;
          }
          _Dest = calloc(1,_Size);
          if (_Dest == (uchar *)0x0) {
            return -0x7ff8fff2;
          }
          _mbscpy(_Dest,*(uchar **)(uVar1 + 4 + (int)param_1 * 8));
          BVar5 = WriteFile(hFile,_Dest,_Size,&local_8,(LPOVERLAPPED)0x0);
          if (BVar5 == 0) {
            free(_Dest);
            return -0x7ffb1ff7;
          }
          free(_Dest);
          if ((_Size & 1) != 0) {
            BVar5 = WriteFile(hFile,&param_1,1,&local_8,(LPOVERLAPPED)0x0);
            if (BVar5 == 0) {
              return -0x7ffb1ff7;
            }
            _Size = iVar3 + 2;
          }
          local_10 = local_10 + 8 + _Size;
          piVar6 = param_3;
          puVar7 = param_2;
        }
        param_1 = (HANDLE)((int)param_1 + 1);
      } while (param_1 < *puVar7);
    }
    riff_SaveLocation(hFile,&local_4);
    riff_RestoreLocation(hFile,local_c);
    BVar5 = WriteFile(hFile,&local_10,4,&local_8,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) {
      return -0x7ffb1ff7;
    }
    riff_RestoreLocation(hFile,local_4);
    if (piVar6 != (int *)0x0) {
      *piVar6 = local_10 + 8;
    }
  }
  return 0;
}


