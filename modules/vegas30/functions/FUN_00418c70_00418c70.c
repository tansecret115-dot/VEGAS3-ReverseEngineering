/* Module: vegas30.exe
   Function: FUN_00418c70
   Address: 00418c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418c70(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  EMIXERTYPE EVar4;
  LPARAM lParam;
  LPARAM local_4;
  
  uVar1 = param_1;
  if (*(int *)(param_1 + 0x9c) != 0) {
    iVar3 = FUN_005747a0(*(int *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
    SendMessageA(*(HWND *)(uVar1 + 0x204),0x42b,400,(iVar3 != 0) + 0x40);
    SendMessageA(*(HWND *)(uVar1 + 0x204),0x402,400,iVar3);
    iVar3 = FUN_005747b0(*(undefined4 *)(uVar1 + 0x9c),*(undefined4 *)(uVar1 + 0xa0));
    SendMessageA(*(HWND *)(uVar1 + 0x204),0x42b,0x191,(iVar3 != 0) + 0x42);
    SendMessageA(*(HWND *)(uVar1 + 0x204),0x402,0x191,iVar3);
  }
  EVar4 = Mixer_GetMixerType((ISFMixer *)0x0);
  if (EVar4 == 1) {
    param_1 = 0;
    Mixer_GetFXBusAssignment(*(ulong *)(uVar1 + 0x88),&param_1);
    SendMessageA(*(HWND *)(uVar1 + 0x204),0x42b,0x192,*(int *)(uVar1 + 0x27c) + param_1 & 0xffff);
  }
  lParam = 4;
  param_1 = 4;
  local_4 = 4;
  if (*(int *)(uVar1 + 0x8c) == 1) {
    lParam = 8;
    param_1 = 8;
    local_4 = 8;
  }
  else if (*(int *)(uVar1 + 0x8c) == 5) {
    iVar3 = Transport_IsPreviewPlaying();
    SendMessageA(*(HWND *)(uVar1 + 0x204),0x42b,0x198,(-(uint)(iVar3 != 0) & 2) + 0x2b);
    SendMessageA(*(HWND *)(uVar1 + 0x204),0x402,0x19a,DAT_00649e08 & 0xffff);
    iVar3 = FUN_00418e90(*(undefined4 *)(uVar1 + 0x90));
    SendMessageA(*(HWND *)(uVar1 + 0x204),0x401,0x19b,(uint)(iVar3 != 0));
    SendMessageA(*(HWND *)(uVar1 + 0x204),0x401,0x198,(uint)(iVar3 != 0));
  }
  uVar2 = param_1;
  SendMessageA(*(HWND *)(uVar1 + 0x204),0x411,0x19b,lParam);
  SendMessageA(*(HWND *)(uVar1 + 0x204),0x411,0x193,uVar2 & 0xffff);
  SendMessageA(*(HWND *)(uVar1 + 0x204),0x411,0xc510,local_4);
  return;
}


