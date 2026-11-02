/* Module: vidcap30.exe
   Function: FUN_00446050
   Address: 00446050
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00446050(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (DAT_005ba4c0 == 0) {
    return false;
  }
  iVar2 = *(int *)(DAT_005ba4c0 + 0x70);
  if (iVar2 == 0) {
    uVar5 = 0x28c;
    uVar4 = 1;
    puVar3 = &DAT_005b5d60;
    iVar6 = iVar2;
    uVar1 = _SfGetString_8(DAT_005ba2a0,0xc4fd);
    iVar2 = FUN_00408c00(1,0,&PTR_FUN_005b5d40,uVar1,puVar3,uVar4,iVar2,uVar5,iVar6);
    return iVar2 != 0;
  }
  if (param_2 != 0) {
    DestroyWindow(*(HWND *)(iVar2 + 8));
    return true;
  }
  FUN_00406010(iVar2);
  SetFocus(*(HWND *)(*(int *)(DAT_005ba4c0 + 0x70) + 8));
  return true;
}


