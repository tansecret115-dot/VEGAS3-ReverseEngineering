/* Module: vidcap30.exe
   Function: riff_ReadData
   Address: 004b5720
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_ReadData,12 */

undefined4 riff_ReadData(HANDLE param_1,LPVOID param_2,uint param_3)

{
  uint uVar1;
  BOOL BVar2;
  
                    /* 0xb5720  784  _riff_ReadData@12 */
  uVar1 = param_3;
  BVar2 = ReadFile(param_1,param_2,param_3,&param_3,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 0x8004e008;
  }
  if (uVar1 != param_3) {
    return 0x8004e008;
  }
  if ((uVar1 & 1) != 0) {
    SetFilePointer(param_1,1,(PLONG)0x0,1);
  }
  return 0;
}


