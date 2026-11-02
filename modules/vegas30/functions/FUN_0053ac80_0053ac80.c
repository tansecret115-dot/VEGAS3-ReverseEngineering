/* Module: vegas30.exe
   Function: FUN_0053ac80
   Address: 0053ac80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053ac80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  HWND pHVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  tagPOINT *ptVar8;
  undefined4 uVar9;
  undefined4 local_10;
  undefined4 local_c;
  tagPOINT local_8;
  
  uVar3 = FUN_004047d0(0x332,2);
  GetCursorPos(&local_8);
  iVar2 = param_1;
  ptVar8 = &local_8;
  uVar9 = 2;
  local_8.y = local_8.y + 4;
  pHVar4 = GetParent(*(HWND *)(param_1 + 4));
  iVar5 = FUN_00404830(pHVar4,uVar3,ptVar8,uVar9);
  if (iVar5 != 0) {
    iVar1 = iVar2 + 0xe80;
    FUN_005387c0(iVar1,0xffffffff,*(undefined4 *)(iVar2 + 0xcf8),&param_1,&local_10,0,0);
    if (iVar5 == 0x2261) {
      FUN_00538db0(iVar2,param_2,param_3,local_10,local_c,1,0,0,0,1,0);
      uVar6 = 0xffffffffffffffff;
      uVar7 = 0xffffffffffffffff;
    }
    else if (iVar5 == 0x226e) {
      FUN_00538db0(iVar2,param_2,param_3,local_10,local_c,1,0,0,0,1,0);
      uVar6 = FUN_00538780(iVar1);
      uVar7 = FUN_005383a0(iVar1);
      FUN_00538b20(iVar1,uVar7,uVar6);
      FUN_00539d30(iVar2);
      uVar6 = FUN_00538780(iVar1);
      uVar7 = FUN_005383a0(iVar1);
    }
    else {
      FUN_00539d30(iVar2);
      uVar6 = FUN_00538780(iVar1);
      uVar7 = FUN_005383a0(iVar1);
    }
    FUN_00538b20(iVar1,uVar7,uVar6);
    InvalidateRect(*(HWND *)(iVar2 + 4),(RECT *)0x0,0);
    UpdateWindow(*(HWND *)(iVar2 + 4));
  }
  return;
}


