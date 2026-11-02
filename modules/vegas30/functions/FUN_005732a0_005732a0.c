/* Module: vegas30.exe
   Function: FUN_005732a0
   Address: 005732a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005732a0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (DAT_0064762c == 0) {
    return false;
  }
  iVar2 = *(int *)(DAT_0064762c + 0x74);
  if (iVar2 == 0) {
    uVar5 = 4;
    uVar4 = 3;
    puVar3 = &DAT_00645678;
    iVar6 = iVar2;
    uVar1 = _SfGetString_8(DAT_00647204,0x4f67);
    iVar2 = FUN_00411360(0x301,0,&PTR_LAB_00645658,uVar1,puVar3,uVar4,iVar2,uVar5,iVar6);
    if (iVar2 != 0) {
      *(int *)(DAT_0064762c + 0x74) = iVar2;
      SetFocus(*(HWND *)(*(int *)(DAT_0064762c + 0x74) + 8));
      FUN_00422550();
    }
    return iVar2 != 0;
  }
  if (param_2 != 0) {
    DestroyWindow(*(HWND *)(iVar2 + 8));
    return true;
  }
  FUN_0040d4a0(iVar2);
  SetFocus(*(HWND *)(*(int *)(DAT_0064762c + 0x74) + 8));
  return true;
}


