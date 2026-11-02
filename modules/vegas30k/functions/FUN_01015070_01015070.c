/* Module: vegas30k.dll
   Function: FUN_01015070
   Address: 01015070
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01015070(HANDLE param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  HANDLE hFile;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  int local_c;
  DWORD local_8;
  undefined4 local_4;
  
  piVar2 = param_2;
  hFile = param_1;
  iVar4 = 0;
  iVar5 = 0;
  local_c = 0;
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    iVar5 = riff_WriteListHeader(param_1,0x74736c78,0);
    if (-1 < iVar5) {
      riff_SaveLocation(hFile,&param_2);
      param_2 = param_2 + -2;
      for (; iVar4 < *piVar2; iVar4 = iVar4 + 1) {
        puVar1 = *(undefined4 **)(piVar2[2] + iVar4 * 4);
        iVar5 = riff_WriteChunk(hFile,puVar1[1],puVar1 + 1,*puVar1,&param_1);
        if (iVar5 < 0) goto LAB_0101515a;
        local_c = local_c + (int)param_1;
      }
      if (-1 < iVar5) {
        riff_SaveLocation(hFile,&local_4);
        riff_RestoreLocation(hFile,param_2);
        local_c = local_c + 4;
        BVar3 = WriteFile(hFile,&local_c,4,&local_8,(LPOVERLAPPED)0x0);
        if ((BVar3 == 0) || (local_8 != 4)) {
          iVar5 = -0x7ffb1ff7;
        }
        else {
          local_c = local_c + 8;
          riff_RestoreLocation(hFile,local_4);
        }
      }
    }
  }
LAB_0101515a:
  if (param_3 != (int *)0x0) {
    *param_3 = local_c;
  }
  return iVar5;
}


