/* Module: vidcap30.exe
   Function: riff64_ReadDataBounded
   Address: 004b7360
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_ReadDataBounded,16 */

undefined4 riff64_ReadDataBounded(HANDLE param_1,LPVOID param_2,uint param_3,uint param_4)

{
  int lDistanceToMove;
  BOOL BVar1;
  uint nNumberOfBytesToRead;
  
                    /* 0xb7360  757  _riff64_ReadDataBounded@16 */
  nNumberOfBytesToRead = param_4;
  if (param_3 <= param_4) {
    nNumberOfBytesToRead = param_3;
  }
  lDistanceToMove = ((param_4 & 7) - nNumberOfBytesToRead) + param_3;
  BVar1 = ReadFile(param_1,param_2,nNumberOfBytesToRead,&param_3,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0x8004e008;
  }
  if (nNumberOfBytesToRead != param_3) {
    return 0x8004e008;
  }
  if (lDistanceToMove != 0) {
    SetFilePointer(param_1,lDistanceToMove,(PLONG)0x0,1);
  }
  return 0;
}


