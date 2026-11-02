/* Module: vegas30.exe
   Function: FUN_0041c5c0
   Address: 0041c5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c5c0(int param_1)

{
  HMENU hMenu;
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong local_120;
  tagPOINT local_11c;
  LONG local_114 [3];
  LONG local_108;
  char local_104 [260];
  
  hMenu = CreatePopupMenu();
  uVar4 = 0;
  local_120 = 0;
  Mixer_GetFXBusAssignment(*(ulong *)(param_1 + 0x88),&local_120);
  lVar1 = Mixer_GetNumFXPortAssigments((ISFMixer *)0x0);
  if (0 < lVar1) {
    do {
      lVar2 = Mixer_GetValidFXPortAssigmentName(local_104,0x100,uVar4,(ISFMixer *)0x0);
      if (-1 < lVar2) {
        AppendMenuA(hMenu,(local_120 != uVar4) - 1 & 8,uVar4 + 0x1970,local_104);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < lVar1);
  }
  SendMessageA(*(HWND *)(param_1 + 0x204),0x433,0x192,(LPARAM)local_114);
  local_11c.x = local_114[0];
  local_11c.y = local_108;
  ClientToScreen(*(HWND *)(param_1 + 0x204),&local_11c);
  iVar3 = FUN_00404830(*(undefined4 *)(param_1 + 8),hMenu,&local_11c,0);
  if ((iVar3 != 0) && (lVar1 != 0)) {
    Mixer_SetFXBusAssignment(*(ulong *)(param_1 + 0x88),iVar3 - 0x1970);
  }
  FUN_00418c70(param_1);
  *(uint *)**(undefined4 **)(param_1 + 700) = *(uint *)**(undefined4 **)(param_1 + 700) | 0x4000;
  InvalidateRect(*(HWND *)(param_1 + 0x204),(RECT *)0x0,1);
  return;
}


