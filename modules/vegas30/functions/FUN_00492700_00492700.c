/* Module: vegas30.exe
   Function: FUN_00492700
   Address: 00492700
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00492700(undefined4 param_1,int param_2)

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
  iVar2 = *(int *)(DAT_0064762c + 0x78);
  if (iVar2 == 0) {
    uVar5 = 0xc4;
    uVar4 = 4;
    puVar3 = &DAT_0063e4a8;
    iVar6 = iVar2;
    uVar1 = _SfGetString_8(DAT_00647204,0x5295);
    iVar2 = FUN_00411360(0x301,0,&PTR_LAB_0063e488,uVar1,puVar3,uVar4,iVar2,uVar5,iVar6);
    if (iVar2 != 0) {
      *(int *)(DAT_0064762c + 0x78) = iVar2;
      FUN_0048f940(DAT_0064b138,0,*(undefined4 *)(*(int *)(DAT_0064762c + 0x78) + 0x94));
    }
    return iVar2 != 0;
  }
  if (param_2 != 0) {
    DestroyWindow(*(HWND *)(iVar2 + 8));
    return true;
  }
  FUN_0040d4a0(iVar2);
  return true;
}


