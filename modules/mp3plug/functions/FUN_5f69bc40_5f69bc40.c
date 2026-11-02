/* Module: mp3plug.dll
   Function: FUN_5f69bc40
   Address: 5f69bc40
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_5f69bc40(undefined1 *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 *pMem;
  HGLOBAL pvVar1;
  DWORD DVar2;
  BOOL BVar3;
  DWORD nNumberOfBytesToRead;
  int lDistanceToMove;
  int lDistanceToMove_00;
  DWORD DVar4;
  HANDLE in_stack_00001014;
  int in_stack_00001018;
  
  FUN_5f72a200();
  DVar4 = 0;
  pvVar1 = GlobalAlloc(0x42,0x10000);
  param_3 = GlobalLock(pvVar1);
  if (param_3 == (undefined1 *)0x0) {
    param_1 = &stack0x00000010;
    nNumberOfBytesToRead = 0x1000;
  }
  else {
    nNumberOfBytesToRead = 0x10000;
    param_1 = param_3;
  }
  DVar2 = GetFileSize(in_stack_00001014,(LPDWORD)0x0);
  lDistanceToMove_00 = DVar2 - nNumberOfBytesToRead;
  lDistanceToMove = lDistanceToMove_00 + in_stack_00001018;
  for (; 0 < lDistanceToMove_00; lDistanceToMove_00 = lDistanceToMove_00 - nNumberOfBytesToRead) {
    SetFilePointer(in_stack_00001014,lDistanceToMove_00,(PLONG)0x0,0);
    BVar3 = ReadFile(in_stack_00001014,param_1,nNumberOfBytesToRead,&param_2,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
LAB_5f69bcfe:
      DVar4 = GetLastError();
      break;
    }
    SetFilePointer(in_stack_00001014,lDistanceToMove,(PLONG)0x0,0);
    BVar3 = WriteFile(in_stack_00001014,param_1,nNumberOfBytesToRead,&param_2,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) goto LAB_5f69bcfe;
    lDistanceToMove = lDistanceToMove - nNumberOfBytesToRead;
  }
  DVar2 = lDistanceToMove_00 + nNumberOfBytesToRead;
  if ((0 < (int)DVar2) && (-1 < (int)DVar4)) {
    SetFilePointer(in_stack_00001014,0,(PLONG)0x0,0);
    BVar3 = ReadFile(in_stack_00001014,param_1,DVar2,&param_2,(LPOVERLAPPED)0x0);
    if (BVar3 != 0) {
      SetFilePointer(in_stack_00001014,(lDistanceToMove - DVar2) + nNumberOfBytesToRead,(PLONG)0x0,0
                    );
      BVar3 = WriteFile(in_stack_00001014,param_1,DVar2,&param_2,(LPOVERLAPPED)0x0);
      if (BVar3 != 0) goto LAB_5f69bd6d;
    }
    DVar4 = GetLastError();
  }
LAB_5f69bd6d:
  pMem = param_3;
  if (param_3 != (undefined1 *)0x0) {
    pvVar1 = GlobalHandle(param_3);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  return DVar4;
}


