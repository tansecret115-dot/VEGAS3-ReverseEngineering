/* Module: vegas30.exe
   Function: FUN_00551f00
   Address: 00551f00
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00551f00(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  bVar1 = false;
  if (DAT_0064762c != 0) {
    iVar3 = *(int *)(DAT_0064762c + 0x7c);
    if (iVar3 == 0) {
      uVar6 = 0x50c;
      uVar5 = 5;
      puVar4 = &DAT_006451b8;
      iVar7 = iVar3;
      uVar2 = _SfGetString_8(DAT_00647204,0x65f5);
      iVar3 = FUN_00411360(0x80301,0,&PTR_LAB_00645198,uVar2,puVar4,uVar5,iVar3,uVar6,iVar7);
      if (iVar3 != 0) {
        *(int *)(DAT_0064762c + 0x7c) = iVar3;
      }
      return iVar3 != 0;
    }
    if (param_2 != 0) {
      DestroyWindow(*(HWND *)(iVar3 + 8));
      return true;
    }
    FUN_0040d4a0(iVar3);
    bVar1 = true;
  }
  return bVar1;
}


