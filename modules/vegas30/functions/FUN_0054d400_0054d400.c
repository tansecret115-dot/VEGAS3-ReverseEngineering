/* Module: vegas30.exe
   Function: FUN_0054d400
   Address: 0054d400
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054d400(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_0054c520(param_1,param_2,param_3);
  if (uVar1 < 0xa7e3) {
    if (uVar1 != 0xa7e2) {
      if (uVar1 < 0x6622) {
        if (uVar1 == 0x6621) {
          puVar3 = (undefined4 *)FUN_0054a530(param_1);
          if (puVar3 != (undefined4 *)0x0) {
            FUN_0054d650(param_1);
            FUN_004339c0(DAT_0064b138,*puVar3,0);
          }
          goto LAB_0054d630;
        }
        if (uVar1 != 0x146b) {
          if (uVar1 == 0x5296) {
            iVar2 = FUN_0054a530(param_1);
            if (iVar2 != 0) {
              FUN_0054d7a0(param_1,iVar2);
            }
          }
          goto LAB_0054d630;
        }
        if (DAT_00647e30 != 1) goto LAB_0054d630;
        iVar2 = FUN_0054d830(param_1);
        if (iVar2 < 0) goto LAB_0054d630;
        FUN_004edbe0(*(undefined4 *)(param_1 + 0xb8),1);
      }
      else {
        if (uVar1 != 0xa7bb) {
          if (uVar1 == 0xa7df) {
            puVar3 = (undefined4 *)FUN_0054a530(param_1);
            if (puVar3 != (undefined4 *)0x0) {
              FUN_0055bac0(*(undefined4 *)(param_1 + 0x98),*puVar3,1);
            }
          }
          goto LAB_0054d630;
        }
        iVar2 = FUN_0054d830(param_1);
        if (iVar2 < 0) goto LAB_0054d630;
        FUN_0054d210(*(undefined4 *)(param_1 + 0xb8));
      }
      FUN_004ec820(*(undefined4 *)(param_1 + 0xb8));
      *(undefined4 *)(param_1 + 0xb8) = 0;
      goto LAB_0054d630;
    }
  }
  else {
    if (0xa7fd < uVar1) {
      if (uVar1 == 0xa7fe) {
        uVar4 = FUN_005bad20(DAT_0064b138);
        FUN_0054cf80(uVar4);
      }
      else if (uVar1 == 0xc87e) {
        iVar2 = FUN_0054d830(param_1);
        if (-1 < iVar2) {
          FUN_0043ef90(*(undefined4 *)(param_1 + 0xb8));
          FUN_004ec820(*(undefined4 *)(param_1 + 0xb8));
          *(undefined4 *)(param_1 + 0xb8) = 0;
        }
      }
      goto LAB_0054d630;
    }
    if (uVar1 == 0xa7fd) {
      FUN_0054d650(param_1);
      FUN_0054ce60(param_1);
      goto LAB_0054d630;
    }
    if (uVar1 == 0xa7f0) {
      FUN_0054d670(param_1,0);
      goto LAB_0054d630;
    }
    if (uVar1 != 0xa7fc) goto LAB_0054d630;
  }
  FUN_0054d650(param_1);
  iVar2 = FUN_0054e120(param_1,uVar1 == 0xa7fc);
  if (iVar2 < 0) {
    if (iVar2 == -0x7ff8fff2) {
      uVar4 = _SfGetString_8(DAT_00647204,0x6e4d);
      SfMsgBox(*(undefined4 *)(param_1 + 0x8c),0x1010,uVar4);
    }
    else {
      uVar4 = _SfGetString_8(DAT_00647204,0x6e4e);
      SfMsgBox(*(undefined4 *)(param_1 + 0x8c),0x10,uVar4);
    }
  }
LAB_0054d630:
  InvalidateRect(*(HWND *)(param_1 + 0xa0),(RECT *)0x0,1);
  return;
}


