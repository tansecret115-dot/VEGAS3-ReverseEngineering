/* Module: vegas30.exe
   Function: FUN_0041c240
   Address: 0041c240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c240(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (*(int *)(param_1 + 0x328) != 0) {
    FUN_0041a6c0(param_1);
    InvalidateRect(*(HWND *)(param_1 + 0x328),(RECT *)0x0,1);
  }
  puVar4 = &DAT_0064baf8;
  uVar3 = 0xffffffff;
  puVar2 = &DAT_0064bad8;
  uVar1 = _SfGetUIFont_4(100);
  _SfGetTextExtent_16(uVar1,puVar2,uVar3,puVar4);
  FUN_00418270(param_1);
  return;
}


