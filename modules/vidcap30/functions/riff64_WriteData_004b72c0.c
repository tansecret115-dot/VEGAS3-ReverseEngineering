/* Module: vidcap30.exe
   Function: riff64_WriteData
   Address: 004b72c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_WriteData,20 */

undefined4
riff64_WriteData(HANDLE param_1,LPCVOID param_2,DWORD param_3,undefined4 param_4,int *param_5)

{
  HANDLE hFile;
  BOOL BVar1;
  uint3 in_ECX;
  int iVar2;
  int iVar3;
  undefined4 uStack_4;
  
                    /* 0xb72c0  771  _riff64_WriteData@20 */
  hFile = param_1;
  uStack_4 = (uint)in_ECX;
  BVar1 = WriteFile(param_1,param_2,param_3,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0x8004e009;
  }
  if (((uint)param_2 & 7) != 0) {
    iVar3 = 0;
    iVar2 = 8 - ((uint)param_2 & 7);
    if (0 < iVar2) {
      do {
        BVar1 = WriteFile(hFile,(LPCVOID)((int)&uStack_4 + 3),1,(LPDWORD)&param_1,(LPOVERLAPPED)0x0)
        ;
        if (BVar1 == 0) {
          return 0x8004e009;
        }
        param_2 = (LPCVOID)((int)param_2 + 1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  if (param_5 != (int *)0x0) {
    *param_5 = (int)param_2;
    param_5[1] = 0;
  }
  return 0;
}


