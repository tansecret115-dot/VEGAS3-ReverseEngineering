/* Module: vegas30k.dll
   Function: riff_ReadListHeader
   Address: 010ff080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_ReadListHeader,12 */

uint riff_ReadListHeader(undefined1 *param_1,LPVOID param_2,int *param_3)

{
  undefined1 *hFile;
  int *piVar1;
  BOOL BVar2;
  int local_4;
  
                    /* 0xff080  1427  _riff_ReadListHeader@12 */
  hFile = param_1;
  BVar2 = ReadFile(param_1,&local_4,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  piVar1 = param_3;
  if (BVar2 == 0) {
    return 0x8004e008;
  }
  if (param_1 != &DAT_00000004) {
    return 0x8004e008;
  }
  BVar2 = ReadFile(hFile,param_3,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 0x8004e008;
  }
  if (param_1 != &DAT_00000004) {
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
  return -(uint)(param_1 != &DAT_00000004) & 0x8004e008;
}


