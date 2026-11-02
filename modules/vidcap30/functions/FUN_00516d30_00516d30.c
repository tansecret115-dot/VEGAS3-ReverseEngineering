/* Module: vidcap30.exe
   Function: FUN_00516d30
   Address: 00516d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00516d30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = ftol();
  iVar2 = ftol();
  if (iVar1 < 0) {
    if (iVar2 < 0) {
      iVar2 = -iVar2;
      iVar1 = -iVar1;
      uVar3 = _SfGetString2_8(DAT_005c16d8,0x1059);
      SfPrintF(param_2,uVar3,iVar1,iVar2);
      return;
    }
    if (iVar2 < 1) {
      iVar1 = -iVar1;
      uVar3 = 0x105b;
LAB_00516da0:
      uVar3 = _SfGetString2_8(DAT_005c16d8,uVar3);
      SfPrintF(param_2,uVar3,iVar1);
      return;
    }
    iVar1 = -iVar1;
    uVar3 = 0x105a;
  }
  else {
    if (iVar1 < 1) {
      if (iVar2 < 0) {
        iVar2 = -iVar2;
        uVar3 = _SfGetString2_8(DAT_005c16d8,0x105f);
        SfPrintF(param_2,uVar3,iVar2);
        return;
      }
      if (0 < iVar2) {
        uVar3 = _SfGetString2_8(DAT_005c16d8,0x1060);
        SfPrintF(param_2,uVar3,iVar2);
        return;
      }
      uVar3 = _SfGetString2_8(DAT_005c16d8,0x1061);
      SfPrintF(param_2,uVar3);
      return;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
      uVar3 = _SfGetString2_8(DAT_005c16d8,0x105c);
      SfPrintF(param_2,uVar3,iVar1,iVar2);
      return;
    }
    if (iVar2 < 1) {
      uVar3 = 0x105e;
      goto LAB_00516da0;
    }
    uVar3 = 0x105d;
  }
  uVar3 = _SfGetString2_8(DAT_005c16d8,uVar3);
  SfPrintF(param_2,uVar3,iVar1,iVar2);
  return;
}


