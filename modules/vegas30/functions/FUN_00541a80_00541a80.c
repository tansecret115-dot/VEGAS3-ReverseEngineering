/* Module: vegas30.exe
   Function: FUN_00541a80
   Address: 00541a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00541a80(HWND param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  puVar1 = (uint *)GetWindowLongA(param_1,-0x15);
  if (puVar1 == (uint *)0x0) {
    if (param_2 == 0x110) {
      uVar2 = FUN_00541b70(param_1,param_3,param_4);
      return uVar2;
    }
  }
  else {
    if (param_2 < 0x54) {
      if (param_2 == 0x53) {
        _SfHelp_ContextPopupHelp_24(0,param_1,0,*(undefined4 *)(param_4 + 8),&DAT_00644c50,0);
      }
      else if (param_2 != 2) {
        if (param_2 != 6) {
          return 0;
        }
        FUN_00404790(-(uint)((short)param_3 != 0) & (uint)param_1);
        return 0;
      }
      return 1;
    }
    if (param_2 == 0x111) {
      uVar3 = param_3 & 0xffff;
      if (uVar3 < 0x470) {
        if (uVar3 < 0x46e) {
          if (uVar3 == 0) {
            return 0;
          }
          if (2 < uVar3) {
            return 0;
          }
          if ((short)(param_3 >> 0x10) != 0) {
            return 0;
          }
          FUN_004043e0(param_1,uVar3);
          return 1;
        }
      }
      else if (uVar3 != 0x5ee) {
        return 0;
      }
      *puVar1 = uVar3;
    }
  }
  return 0;
}


