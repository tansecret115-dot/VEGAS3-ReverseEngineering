/* Module: vegas30.exe
   Function: FUN_00584ae0
   Address: 00584ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00584ae0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  HMENU hMenu;
  HIMAGELIST p_Var3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)FUN_00584830(0);
  _SfMsgBoxSetAppData_12(*(undefined4 *)(DAT_0065a054 + 8),*(undefined4 *)(param_1 + 4),*puVar2);
  uVar1 = *(uint *)(*(int *)(DAT_0065a054 + 4) + 0x18);
  if (uVar1 == 0) {
    hMenu = (HMENU)0x0;
  }
  else {
    hMenu = (HMENU)_SfLoadMenu_8(*(undefined4 *)(DAT_0065a054 + 0x10),uVar1 & 0xffff);
  }
  *(HMENU *)(param_1 + 0x58) = hMenu;
  if (hMenu != (HMENU)0x0) {
    SetMenu(*(HWND *)(param_1 + 4),hMenu);
    p_Var3 = ImageList_LoadImageA
                       (*(HINSTANCE *)(DAT_0065a054 + 8),&DAT_000003eb,0x12,4,0xff00ff,0,0);
    *(HIMAGELIST *)(param_1 + 0x5c) = p_Var3;
    if (p_Var3 != (HIMAGELIST)0x0) {
      uVar4 = FUN_00584bd0();
      return uVar4;
    }
  }
  return 0x8004e00e;
}


