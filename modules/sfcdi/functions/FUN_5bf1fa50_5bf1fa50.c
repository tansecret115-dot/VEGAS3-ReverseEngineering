/* Module: sfcdi.dll
   Function: FUN_5bf1fa50
   Address: 5bf1fa50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5bf1fa50(void *this,int *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  int unaff_EDI;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint local_40 [2];
  undefined4 auStack_38 [4];
  int iStack_28;
  DWORD DStack_14;
  
  if (*(int *)((int)this + 0x1e54) != 0) {
    return 0;
  }
  puVar4 = local_40;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  (**(code **)(*param_1 + 0xc))();
  iVar3 = *param_1;
  FUN_5bf283e0(DAT_5bf65fc4,0x8de);
  (**(code **)(iVar3 + 0x10))(param_1);
  uStack_48 = 1;
  uStack_4c = 0;
  cdr_CloseSession(*(HSFCD__ **)((int)this + 0x1de4),(tCDRPARAMS_CLOSESESSION *)&uStack_4c);
  (**(code **)(*param_1 + 0x14))(param_1,auStack_38[0],0);
  DStack_14 = timeGetTime();
  uStack_54 = 1;
  uStack_58 = 1;
  if ((*(int *)((int)this + 0x1e58) == 1) || (*(int *)((int)this + 0x1e58) == 0)) {
    local_40[1] = local_40[1] | 1;
  }
  cdr_CloseSession(*(HSFCD__ **)((int)this + 0x1de4),(tCDRPARAMS_CLOSESESSION *)&uStack_58);
  puVar5 = auStack_38;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iStack_28 = 1;
  do {
    BVar1 = PeekMessageA((LPMSG)&stack0xffffff8c,(HWND)0x0,0,0,1);
    if (BVar1 == 0) {
      iVar3 = *param_1;
      DVar2 = timeGetTime();
      (**(code **)(iVar3 + 0x18))(param_1,DVar2 - DStack_14,0);
      auStack_38[1] = 1;
      auStack_38[0] = 2;
      cdr_CloseSession(*(HSFCD__ **)((int)this + 0x1de4),(tCDRPARAMS_CLOSESESSION *)auStack_38);
    }
    else {
      if (param_1 == (int *)0x12) {
        PostQuitMessage(unaff_EDI);
        break;
      }
      TranslateMessage((MSG *)&stack0xffffff8c);
      DispatchMessageA((MSG *)&stack0xffffff8c);
    }
  } while (iStack_28 == 1);
  (**(code **)(*param_1 + 0x2c))(param_1,0);
  return 0;
}


