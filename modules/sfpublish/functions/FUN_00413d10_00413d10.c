/* Module: sfpublish.dll
   Function: FUN_00413d10
   Address: 00413d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00413d10(void *this,int param_1)

{
  HWND pHVar1;
  undefined4 *puVar2;
  HANDLE h;
  uchar *puVar3;
  LPCSTR pCVar4;
  UINT UVar5;
  int iVar6;
  int iVar7;
  UINT UVar8;
  uint uVar9;
  tagRECT local_28;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 4),0x1f6);
  SendMessageA(pHVar1,0x466,0,0);
  ShowWindow(pHVar1,0);
  GetWindowRect(pHVar1,&local_28);
  MapWindowPoints((HWND)0x0,*(HWND *)((int)this + 4),(LPPOINT)&local_28,2);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 4),0x206);
  UVar8 = 0x3020;
  iVar7 = 0;
  iVar6 = 0;
  UVar5 = 0;
  pCVar4 = (LPCSTR)0xc0;
  puVar2 = (undefined4 *)FUN_004012d0();
  h = (HANDLE)FUN_0041b6c0(puVar2,pCVar4,UVar5,iVar6,iVar7,UVar8);
  GetObjectA(h,0x18,local_18);
  MoveWindow(pHVar1,local_28.right - local_14,local_28.top,local_14,local_10,1);
  SendMessageA(pHVar1,0x172,0,(LPARAM)h);
  ShowWindow(pHVar1,5);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 4),0x207);
  ShowWindow(pHVar1,5);
  if (param_1 == 0) {
    uVar9 = 0x81;
  }
  else {
    uVar9 = 0x80;
  }
  puVar3 = (uchar *)FUN_0041b9f0(DAT_0044164c,uVar9);
  FUN_0041a720(pHVar1,puVar3);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 4),2);
  FUN_0041a720(pHVar1,"OK");
  *(undefined4 *)((int)this + 0x38) = 1;
  return;
}


