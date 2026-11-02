/* Module: vegas30.exe
   Function: FUN_005084b0
   Address: 005084b0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005084b0(undefined4 param_1,int param_2)

{
  int iVar1;
  SHORT SVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  
  if (DAT_0064762c == 0) {
    return false;
  }
  iVar1 = *(int *)(DAT_0064762c + 0x90);
  if (iVar1 == 0) {
    SVar2 = GetAsyncKeyState(0x10);
    if (SVar2 < 0) {
      SVar2 = GetAsyncKeyState(0x11);
      if (SVar2 < 0) {
        uVar3 = FUN_00509ea0(1);
        FUN_00509da0(uVar3);
        FUN_00508c50(uVar3);
      }
    }
    puVar10 = &param_2;
    puVar9 = &DAT_00644778;
    uVar8 = 0;
    uVar7 = 10;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 7;
    uVar3 = _SfGetString_8(DAT_00647204,0x4f8c);
    FUN_0052aef0(param_1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,puVar9,puVar10);
    if (param_2 != 0) {
      *(int *)(DAT_0064762c + 0x90) = param_2;
    }
    return param_2 != 0;
  }
  if (param_2 != 0) {
    DestroyWindow(*(HWND *)(iVar1 + 8));
    return true;
  }
  FUN_0040d4a0(iVar1);
  return true;
}


