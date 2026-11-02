/* Module: vegas30k.dll
   Function: riff_ReadDataBounded
   Address: 010fec50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_ReadDataBounded,16 */

undefined4 riff_ReadDataBounded(HANDLE param_1,LPVOID param_2,uint param_3,uint param_4)

{
  int lDistanceToMove;
  BOOL BVar1;
  uint nNumberOfBytesToRead;
  
                    /* 0xfec50  1425  _riff_ReadDataBounded@16 */
  nNumberOfBytesToRead = param_4;
  if (param_3 <= param_4) {
    nNumberOfBytesToRead = param_3;
  }
  lDistanceToMove = param_3 - nNumberOfBytesToRead;
  if ((param_4 & 1) != 0) {
    lDistanceToMove = lDistanceToMove + 1;
  }
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


