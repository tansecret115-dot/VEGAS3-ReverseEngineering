/* Module: sfs4rw.dll
   Function: FUN_004357b0
   Address: 004357b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004357b0(HANDLE param_1,LONG param_2,LONG param_3,uint param_4,int param_5,HANDLE param_6,
                LONG param_7,LONG param_8)

{
  HGLOBAL pvVar1;
  LPVOID lpBuffer;
  BOOL BVar2;
  int iVar3;
  DWORD nNumberOfBytesToRead;
  void *this;
  bool bVar4;
  DWORD local_28;
  void *local_24;
  LONG local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_4;
  
  local_1c = 0;
  local_28 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_4 = param_5;
  pvVar1 = GlobalAlloc(0x42,0x40000);
  lpBuffer = GlobalLock(pvVar1);
  if (lpBuffer == (LPVOID)0x0) {
    FUN_0043c400(local_24,0xaaaaaaa3,(uchar *)"Block Copy",(uchar *)0x0);
    return -0x7ff8fff2;
  }
  local_20 = param_3;
  SetFilePointer(param_1,param_2,&local_20,0);
  local_20 = param_8;
  SetFilePointer(param_6,param_7,&local_20,0);
  if ((-1 < param_5) && ((0 < param_5 || (param_4 != 0)))) {
    while (iVar3 = local_4, this = local_24, -1 < local_1c) {
      if ((0 < local_4) || ((nNumberOfBytesToRead = param_4, -1 < local_4 && (0x3ffff < param_4))))
      {
        nNumberOfBytesToRead = 0x40000;
      }
      BVar2 = ReadFile(param_1,lpBuffer,nNumberOfBytesToRead,&local_28,(LPOVERLAPPED)0x0);
      if (BVar2 != 0) {
        bVar4 = param_4 < local_28;
        param_4 = param_4 - local_28;
        iVar3 = iVar3 - (uint)bVar4;
        bVar4 = CARRY4(local_18,local_28);
        local_18 = local_18 + local_28;
        local_14 = local_14 + (uint)bVar4;
        local_4 = iVar3;
        BVar2 = WriteFile(param_6,lpBuffer,nNumberOfBytesToRead,&local_28,(LPOVERLAPPED)0x0);
        this = local_24;
        if (BVar2 != 0) {
          if (*(int **)((int)local_24 + 0x20) != (int *)0x0) {
            (**(code **)(**(int **)((int)local_24 + 0x20) + 0x10))(local_28,0);
            local_1c = FUN_0044dd80(*(int *)((int)this + 0x20));
            if (local_1c == -0x7ffb1ff4) break;
          }
          bVar4 = CARRY4(local_10,local_28);
          local_10 = local_10 + local_28;
          local_c = local_c + (uint)bVar4;
        }
      }
      if ((iVar3 < 1) && ((this = local_24, iVar3 < 0 || (param_4 == 0)))) break;
    }
    if ((local_18 != local_10) || (local_14 != local_c)) {
      FUN_0043c400(this,0xaaaaaaa6,(uchar *)"Block Copy",(uchar *)0x0);
    }
  }
  pvVar1 = GlobalHandle(lpBuffer);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(lpBuffer);
  GlobalFree(pvVar1);
  return local_1c;
}


