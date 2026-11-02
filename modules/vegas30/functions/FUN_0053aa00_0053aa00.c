/* Module: vegas30.exe
   Function: FUN_0053aa00
   Address: 0053aa00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053aa00(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  HMENU hMenu;
  int iVar4;
  HWND pHVar5;
  uint uEnable;
  UINT uEnable_00;
  bool bVar6;
  tagPOINT *ptVar7;
  undefined4 uVar8;
  int local_1c;
  int local_18;
  int local_14;
  undefined8 local_10;
  tagPOINT local_8;
  
  iVar3 = param_1;
  iVar4 = param_1 + 0xe80;
  hMenu = (HMENU)FUN_004047d0(0x332,1);
  local_1c = 0;
  local_10 = FUN_004581e0(iVar3);
  param_1 = 0;
  bVar2 = true;
  if (((*(byte *)(iVar3 + 0x174) & 0xfc) == 0) || (*(int *)(iVar3 + 0xcf8) < 0)) {
    bVar2 = false;
  }
  else {
    FUN_005387c0(iVar4,0xffffffff,*(int *)(iVar3 + 0xcf8),&local_1c,&local_10,&param_1,0);
    if (param_1 == 0) {
      FUN_00538900(iVar4,0,local_10,local_10);
      InvalidateRect(*(HWND *)(iVar3 + 4),(RECT *)0x0,0);
      UpdateWindow(*(HWND *)(iVar3 + 4));
      param_1 = 1;
    }
  }
  GetCursorPos(&local_8);
  local_8.y = local_8.y + 4;
  local_14 = FUN_00538d10(iVar4,&local_18);
  bVar6 = local_14 == 0;
  EnableMenuItem(hMenu,0x2261,(uint)bVar6);
  EnableMenuItem(hMenu,0x2263,(uint)bVar6);
  iVar4 = FUN_0053a670(iVar3);
  EnableMenuItem(hMenu,0x2262,(uint)(iVar4 == 0));
  uEnable = (uint)!bVar2;
  EnableMenuItem(hMenu,0x2265,uEnable);
  EnableMenuItem(hMenu,0x2264,uEnable);
  EnableMenuItem(hMenu,0x2266,uEnable);
  EnableMenuItem(hMenu,0x2267,uEnable);
  EnableMenuItem(hMenu,0x2268,uEnable);
  CheckMenuRadioItem(hMenu,0x2264,0x2268,local_1c + 0x2264,0);
  if ((local_18 < 2) || (local_14 == 0)) {
    uEnable_00 = 1;
  }
  else {
    uEnable_00 = 0;
  }
  EnableMenuItem(hMenu,0x2260,uEnable_00);
  EnableMenuItem(hMenu,0x2263,uEnable_00);
  ptVar7 = &local_8;
  uVar8 = 2;
  pHVar5 = GetParent(*(HWND *)(iVar3 + 4));
  iVar4 = FUN_00404830(pHVar5,hMenu,ptVar7,uVar8);
  if (iVar4 != 0) {
    switch(iVar4) {
    case 0x2260:
      FUN_0053a320(iVar3);
      return;
    case 0x2261:
      FUN_0053a500(iVar3);
      return;
    case 0x2262:
      FUN_0053a690(iVar3);
      return;
    case 0x2263:
      FUN_00539d30(iVar3);
      return;
    }
    if (bVar2) {
      iVar1 = iVar3 + 0xe80;
      FUN_005386a0(iVar1,0);
      FUN_00538700(iVar1);
      if (*(int *)(iVar3 + 0xe8c) == 400) {
        FUN_0044dbe0(iVar1,*(undefined4 *)(iVar3 + 0xcf8),iVar4 + -0x2264);
        FUN_00538740(iVar1,0);
        return;
      }
      if (*(int *)(iVar3 + 0xe8c) == 0x191) {
        FUN_0050ced0(iVar1,*(undefined4 *)(iVar3 + 0xcf8),iVar4 + -0x2264);
      }
      FUN_00538740(iVar1,0);
    }
  }
  return;
}


