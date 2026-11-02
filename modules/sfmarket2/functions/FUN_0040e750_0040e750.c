/* Module: sfmarket2.dll
   Function: FUN_0040e750
   Address: 0040e750
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040e750(int param_1)

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
  tagRECT local_28;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x1fb);
  SendMessageA(pHVar1,0x466,0,0);
  ShowWindow(pHVar1,0);
  GetWindowRect(pHVar1,&local_28);
  MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 4),(LPPOINT)&local_28,2);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x1fc);
  UVar8 = 0x3020;
  iVar7 = 0;
  iVar6 = 0;
  UVar5 = 0;
  pCVar4 = (LPCSTR)0x201;
  puVar2 = (undefined4 *)FUN_00401300();
  h = (HANDLE)FUN_004223a0(puVar2,pCVar4,UVar5,iVar6,iVar7,UVar8);
  GetObjectA(h,0x18,local_18);
  MoveWindow(pHVar1,local_28.right - local_14,local_28.top,local_14,local_10,1);
  SendMessageA(pHVar1,0x172,0,(LPARAM)h);
  ShowWindow(pHVar1,5);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x1ff);
  puVar3 = (uchar *)FUN_004226d0(DAT_004a9c94,0x2c7);
  FUN_00426420(pHVar1,puVar3);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),2);
  FUN_00426420(pHVar1,(uchar *)"Continue");
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}


