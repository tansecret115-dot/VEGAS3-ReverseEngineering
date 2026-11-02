/* Module: vegas30.exe
   Function: FUN_00422110
   Address: 00422110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422110(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_154 [10];
  undefined1 local_12c [260];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  tagRECT tStack_18;
  
  puVar2 = local_154;
  for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if ((*(undefined4 **)(param_1 + 0x80) != (undefined4 *)0x0) && (param_2 != 0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x80))();
    local_154[0] = *(undefined4 *)(param_1 + 0x80);
  }
  if ((*(byte *)(param_1 + 0xc) & 4) != 0) {
    local_154[3] = DAT_0064b138;
    local_154[1] = 0;
    local_20 = 0;
    local_154[2] = 1;
    local_1c = DAT_00647624;
    _SfLoadString_16(DAT_00647204,0x50d9,local_12c,0x104);
    uStack_28 = 0;
    uStack_24 = 0;
    SetRectEmpty(&tStack_18);
    FUN_00420a20(param_1,local_154);
    return;
  }
  DestroyWindow(*(HWND *)(param_1 + 8));
  return;
}


