/* Module: vegas30.exe
   Function: FUN_0043ffe0
   Address: 0043ffe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043ffe0(HWND param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  puVar1 = (undefined4 *)GetWindowLongA(param_1,-0x15);
  if (puVar1 == (undefined4 *)0x0) {
    if (param_2 == 0x110) {
      uVar2 = FUN_004400d0(param_1,param_3,param_4);
      return uVar2;
    }
  }
  else if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      _SfHelp_ContextPopupHelp_24(0,param_1,0,*(undefined4 *)(param_4 + 8),&DAT_0063dda0,0);
      return 1;
    }
    if (param_2 == 2) {
      *puVar1 = 0;
      return 1;
    }
    if (param_2 == 6) {
      FUN_00404790(-(uint)((short)param_3 != 0) & (uint)param_1);
      return 0;
    }
  }
  else if (param_2 == 0x111) {
    uVar3 = param_3 & 0xffff;
    if (((uVar3 != 0) && (uVar3 < 3)) && ((short)(param_3 >> 0x10) == 0)) {
      FUN_00440210(puVar1);
      FUN_004043e0(param_1,uVar3);
      uVar2 = 1;
    }
  }
  return uVar2;
}


