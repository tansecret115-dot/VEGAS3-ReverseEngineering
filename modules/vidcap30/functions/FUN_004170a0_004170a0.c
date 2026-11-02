/* Module: vidcap30.exe
   Function: FUN_004170a0
   Address: 004170a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004170a0(int param_1,int param_2)

{
  HCURSOR pHVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pHVar1 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  pHVar1 = SetCursor(pHVar1);
  uVar4 = 0x8004e016;
  switch(*(undefined4 *)(param_1 + 0x208)) {
  case 2:
  case 3:
    break;
  case 4:
  case 5:
    if (param_2 != 0) {
      FUN_00417050(param_1);
      SetCursor(pHVar1);
      return 0x8004e016;
    }
    iVar2 = FUN_0045b2c0(param_1,DAT_005bba28);
    if (iVar2 != 0) {
      if (((*(uint *)(param_1 + 0x218) & 1) == 0) || ((*(uint *)(param_1 + 0x218) & 2) != 0)) {
        FUN_00441a20();
      }
      uVar4 = FUN_00441600(param_1,0);
      if (((*(uint *)(param_1 + 0x218) & 1) == 0) || ((*(uint *)(param_1 + 0x218) & 4) != 0)) {
        SendMessageA((HWND)*DAT_005ba4c0,0x111,0x19cde,0);
        SetCursor(pHVar1);
        return uVar4;
      }
    }
    break;
  case 6:
    uVar4 = FUN_00450090(param_1,0);
    SetCursor(pHVar1);
    return uVar4;
  default:
    uVar3 = _SfGetString_8(DAT_005ba2a0,0x95);
    SfErrorHandler_DetailsAddString(0x8004e033,uVar3,param_1);
  }
  SetCursor(pHVar1);
  return uVar4;
}


