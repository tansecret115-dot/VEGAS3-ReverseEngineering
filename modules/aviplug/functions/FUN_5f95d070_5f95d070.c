/* Module: aviplug.dll
   Function: FUN_5f95d070
   Address: 5f95d070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f95d070(void *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  HWND hWnd;
  HWND hWnd_00;
  int iVar3;
  WPARAM WVar4;
  uint uVar5;
  int local_8;
  
  if ((*(int *)((int)param_1 + 0x34) != 0) &&
     (puVar2 = *(ushort **)(*(int *)((int)param_1 + 0x34) + 0x424), puVar2 != (ushort *)0x0)) {
    uVar1 = *puVar2;
    if (uVar1 < 4) {
      if ((uVar1 != 3) && (uVar1 != 1)) {
        return;
      }
    }
    else {
      if (uVar1 < 0xfe00) {
        return;
      }
      if (0xfe02 < uVar1) {
        return;
      }
    }
    if ((uint)puVar2[6] == (uint)(puVar2[7] >> 3) * (uint)puVar2[1]) {
      hWnd = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7d4);
      hWnd_00 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7d5);
      iVar3 = FUN_5f95c930(param_1,*(int *)((int)param_1 + 0x34));
      local_8 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 4);
      WVar4 = SendMessageA(hWnd,0x147,0,0);
      if (WVar4 != 0xffffffff) {
        local_8 = SendMessageA(hWnd,0x150,WVar4,0);
      }
      uVar5 = (uint)*(ushort *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0xe);
      WVar4 = SendMessageA(hWnd_00,0x147,0,0);
      if (WVar4 != 0xffffffff) {
        uVar5 = SendMessageA(hWnd_00,0x150,WVar4,0);
      }
      FUN_5f95d1b0(hWnd_00,0,(uint)(**(short **)(*(int *)((int)param_1 + 0x34) + 0x424) == 3),iVar3,
                   local_8,uVar5);
    }
  }
  return;
}


