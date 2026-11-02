/* Module: vegas30k.dll
   Function: FUN_01015390
   Address: 01015390
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01015390(HANDLE param_1,int *param_2,int *param_3)

{
  HANDLE hFile;
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  int local_c;
  DWORD local_8;
  undefined4 local_4;
  
  piVar1 = param_2;
  hFile = param_1;
  iVar3 = 0;
  iVar4 = 0;
  local_c = 0;
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    local_c = 4;
    iVar4 = riff_WriteListHeader(param_1,0x74736c72,0);
    if (-1 < iVar4) {
      riff_SaveLocation(hFile,&param_2);
      param_2 = param_2 + -2;
      for (; iVar3 < *piVar1; iVar3 = iVar3 + 1) {
        iVar4 = FUN_01015290(hFile,*(undefined4 *)(piVar1[2] + iVar3 * 4),&param_1);
        if (iVar4 < 0) goto LAB_01015465;
        local_c = local_c + (int)param_1;
      }
      if (-1 < iVar4) {
        riff_SaveLocation(hFile,&local_4);
        riff_RestoreLocation(hFile,param_2);
        BVar2 = WriteFile(hFile,&local_c,4,&local_8,(LPOVERLAPPED)0x0);
        if ((BVar2 == 0) || (local_8 != 4)) {
          iVar4 = -0x7ffb1ff7;
        }
        else {
          riff_RestoreLocation(hFile,local_4);
          local_c = local_c + 8;
        }
      }
    }
  }
LAB_01015465:
  if (param_3 != (int *)0x0) {
    *param_3 = local_c;
  }
  return iVar4;
}


