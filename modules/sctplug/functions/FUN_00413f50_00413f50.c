/* Module: sctplug.dll
   Function: FUN_00413f50
   Address: 00413f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00413f50(HANDLE param_1,LPVOID param_2,uint param_3,uint param_4)

{
  int lDistanceToMove;
  BOOL BVar1;
  uint nNumberOfBytesToRead;
  
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


