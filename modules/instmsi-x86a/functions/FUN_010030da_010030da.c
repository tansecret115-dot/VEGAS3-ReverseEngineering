/* Module: InstMsi-x86a.exe
   Function: FUN_010030da
   Address: 010030da
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010030da(void)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  tagMSG local_24;
  int local_8;
  
  local_8 = 0;
  do {
    DVar2 = MsgWaitForMultipleObjects(1,(HANDLE *)&stack0x00000004,0,0xffffffff,0xff);
    iVar1 = local_8;
    if (DVar2 == 0) {
      local_8 = 1;
    }
    else {
      while (local_8 = iVar1, BVar3 = PeekMessageA(&local_24,(HWND)0x0,0,0,1), BVar3 != 0) {
        iVar1 = 1;
        if (local_24.message != 0x12) {
          DispatchMessageA(&local_24);
          iVar1 = local_8;
        }
      }
    }
  } while (local_8 == 0);
  return;
}


