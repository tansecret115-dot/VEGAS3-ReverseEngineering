/* Module: vidcap30.exe
   Function: FUN_00422750
   Address: 00422750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422750(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  BOOL BVar4;
  int iVar5;
  UINT *pUVar6;
  tagMSG local_1c;
  
  DVar1 = timeGetTime();
  DVar2 = timeGetTime();
  uVar3 = DVar2 - DVar1;
  while (uVar3 <= param_1) {
    if (param_2 != 0) {
      local_1c.hwnd = (HWND)0x0;
      pUVar6 = &local_1c.message;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pUVar6 = 0;
        pUVar6 = pUVar6 + 1;
      }
      BVar4 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      if (BVar4 != 0) {
        TranslateMessage(&local_1c);
        DispatchMessageA(&local_1c);
      }
    }
    DVar2 = timeGetTime();
    uVar3 = DVar2 - DVar1;
  }
  return;
}


