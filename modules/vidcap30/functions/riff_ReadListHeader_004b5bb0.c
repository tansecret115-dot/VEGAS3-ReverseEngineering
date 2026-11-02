/* Module: vidcap30.exe
   Function: riff_ReadListHeader
   Address: 004b5bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_ReadListHeader,12 */

uint riff_ReadListHeader(HANDLE param_1,LPVOID param_2,int *param_3)

{
  HANDLE hFile;
  int *piVar1;
  BOOL BVar2;
  int local_4;
  
                    /* 0xb5bb0  788  _riff_ReadListHeader@12 */
  hFile = param_1;
  BVar2 = ReadFile(param_1,&local_4,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  piVar1 = param_3;
  if (BVar2 == 0) {
    return 0x8004e008;
  }
  if (param_1 != (HANDLE)0x4) {
    return 0x8004e008;
  }
  BVar2 = ReadFile(hFile,param_3,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 0x8004e008;
  }
  if (param_1 != (HANDLE)0x4) {
    return 0x8004e008;
  }
  if (local_4 != 0x5453494c) {
    return 0x8004e081;
  }
  *piVar1 = *piVar1 + -4;
  BVar2 = ReadFile(hFile,param_2,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 0x8004e008;
  }
  return -(uint)(param_1 != (HANDLE)0x4) & 0x8004e008;
}


