/* Module: sfcdi.dll
   Function: FUN_5bf1f8a0
   Address: 5bf1f8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5bf1f8a0(void *this,int *param_1)

{
  int iVar1;
  void *pvVar2;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  void *pvVar6;
  void *unaff_EBX;
  void *pvVar7;
  undefined4 unaff_EBP;
  void *pvVar8;
  void *local_188;
  DWORD DStack_184;
  uint local_180;
  tagMSG local_17c;
  _SFCDI_BURN_STATS a_Stack_160 [28];
  uint uStack_144;
  void *pvStack_130;
  undefined4 uStack_12c;
  void *pvStack_128;
  char acStack_108 [264];
  
  iVar1 = *(int *)((int)this + 0x3d18);
  local_17c.hwnd = (HWND)0x0;
  local_180 = 0;
  (**(code **)(*param_1 + 0xc))(param_1);
  DVar3 = WaitForSingleObject(*(HANDLE *)(iVar1 + 0x5c),0);
  local_188 = this;
  pvVar7 = unaff_EBX;
  pvVar8 = unaff_EBX;
  do {
    if (DVar3 != 0x102) {
LAB_5bf1fa06:
      (**(code **)(*param_1 + 0x2c))(param_1,local_188);
      WaitForSingleObject(*(HANDLE *)(iVar1 + 0x5c),0xffffffff);
      GetExitCodeThread(*(HANDLE *)(iVar1 + 0x5c),(LPDWORD)&stack0xfffffe70);
      CloseHandle(*(HANDLE *)(iVar1 + 0x5c));
      *(undefined4 *)(iVar1 + 0x5c) = 0;
      return unaff_EBP;
    }
    BVar4 = PeekMessageA(&local_17c,(HWND)0x0,0,0,1);
    if (BVar4 == 0) {
      FUN_5bf1f870(unaff_EBX,a_Stack_160);
      pvVar2 = pvStack_128;
      pvVar6 = pvStack_130;
      if (local_180 != uStack_144) {
        (**(code **)(*param_1 + 0x14))(param_1,pvStack_130,0);
        (**(code **)(*param_1 + 0x1c))(param_1,pvStack_130,0);
        local_180 = uStack_144;
        iVar5 = SfCDUI_LoadProcessName(uStack_144,acStack_108,0x104);
        pvVar7 = pvVar2;
        pvVar8 = pvVar6;
        if (iVar5 != 0) {
          (**(code **)(*param_1 + 0x10))(param_1,acStack_108);
        }
      }
      DVar3 = timeGetTime();
      pvVar6 = (void *)(DVar3 - (int)pvVar7);
      if ((int)pvVar6 < 0) {
        pvVar6 = (void *)0x0;
      }
      else if ((int)pvVar8 < (int)pvVar6) {
        pvVar6 = pvVar8;
      }
      if (0xfa < DVar3 - DStack_184) {
        (**(code **)(*param_1 + 0x18))(param_1,pvVar6,(int)pvVar6 >> 0x1f);
        (**(code **)(*param_1 + 0x20))(param_1,uStack_12c,0);
        DStack_184 = DVar3;
      }
      local_188 = (void *)(**(code **)(*param_1 + 0x24))(param_1);
      if ((int)local_188 < 0) {
        FUN_5bf1f890((int)unaff_EBX);
      }
    }
    else {
      if (local_17c.message == 0x12) {
        PostQuitMessage(local_17c.wParam);
        goto LAB_5bf1fa06;
      }
      TranslateMessage(&local_17c);
      DispatchMessageA(&local_17c);
    }
    DVar3 = WaitForSingleObject(*(HANDLE *)(iVar1 + 0x5c),0);
  } while( true );
}


