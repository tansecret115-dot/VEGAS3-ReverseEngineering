/* Module: vegas30.exe
   Function: FUN_00416140
   Address: 00416140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416140(int param_1,undefined4 *param_2)

{
  HWND pHVar1;
  uint uVar2;
  int iVar3;
  WPARAM WVar4;
  int iVar5;
  undefined4 *puVar6;
  WPARAM local_8;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
  iVar5 = *(int *)(*(int *)(param_1 + 0x8c) + 4) * (int)param_2;
  pHVar1 = *(HWND *)(iVar5 + 0x44 + iVar3);
  iVar5 = iVar5 + iVar3;
  if (pHVar1 != (HWND)0x0) {
    DestroyWindow(pHVar1);
  }
  *(undefined4 *)(iVar5 + 0x44) = 0;
  if (*(int *)(iVar5 + 0x2c) != 0) {
    iVar3 = *(int *)(iVar5 + 0x30);
    FUN_0060ac30();
    puVar6 = (undefined4 *)&stack0xffffffe8;
    for (uVar2 = iVar3 * 0x28 + 0x34U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    WVar4 = 0;
    local_8 = 0;
    if (0 < *(int *)(iVar5 + 0x30)) {
      param_2 = (undefined4 *)&stack0x00000014;
      do {
        puVar6 = *(undefined4 **)(*(int *)(*(int *)(iVar5 + 0x2c) + 8) + WVar4 * 4);
        if (puVar6 == *(undefined4 **)(iVar5 + 0x28)) {
          local_8 = WVar4;
        }
        (**(code **)*puVar6)(puVar6,0xd,0x20,param_2 + -8);
        WVar4 = WVar4 + 1;
        *param_2 = puVar6[5];
        param_2 = param_2 + 10;
      } while ((int)WVar4 < *(int *)(iVar5 + 0x30));
    }
    pHVar1 = CreateWindowExA(4,"SfKrn_TabControl_Class","",0x40000204,0,0,0,0,*(HWND *)(param_1 + 8)
                             ,(HMENU)&DAT_00000060,DAT_006471fc,&stack0xffffffe8);
    *(HWND *)(iVar5 + 0x44) = pHVar1;
    SendMessageA(pHVar1,0x602,local_8,0);
    SendMessageA(*(HWND *)(iVar5 + 0x44),0x60f,1,0);
    SendMessageA(*(HWND *)(iVar5 + 0x44),0x611,0,DAT_0064b530);
    ShowWindow(*(HWND *)(iVar5 + 0x44),8);
  }
  return;
}


