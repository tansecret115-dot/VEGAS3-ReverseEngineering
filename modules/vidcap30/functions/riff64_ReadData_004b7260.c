/* Module: vidcap30.exe
   Function: riff64_ReadData
   Address: 004b7260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_ReadData,16 */

undefined4 riff64_ReadData(HANDLE param_1,LPVOID param_2,LPVOID param_3)

{
  LPVOID pvVar1;
  BOOL BVar2;
  uint uVar3;
  
                    /* 0xb7260  755  _riff64_ReadData@16 */
  pvVar1 = param_3;
  BVar2 = ReadFile(param_1,param_2,(DWORD)param_3,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 0x8004e008;
  }
  if (pvVar1 != param_2) {
    return 0x8004e008;
  }
  uVar3 = (uint)pvVar1 & 7;
  if (uVar3 != 0) {
    SetFilePointer(param_1,8 - uVar3,(PLONG)0x0,1);
  }
  return 0;
}


