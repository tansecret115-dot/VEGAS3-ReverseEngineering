/* Module: vegas30.exe
   Function: FUN_004777a0
   Address: 004777a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004777a0(undefined4 param_1,int param_2,HWND param_3,LONG param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  HWND pHVar2;
  undefined4 uVar3;
  HMENU hMenu;
  int iVar4;
  longlong lVar5;
  
  iVar1 = param_2;
  lVar5 = FUN_00477540(param_2,param_4);
  uVar3 = param_6;
  hMenu = (HMENU)FUN_004765b0(param_1,iVar1,lVar5 - *(longlong *)(iVar1 + 0x18),param_6,&param_2);
  pHVar2 = param_3;
  if (hMenu != (HMENU)0x0) {
    ClientToScreen(param_3,(LPPOINT)&param_4);
    iVar4 = FUN_00404830(pHVar2,hMenu,&param_4,2);
    if (iVar4 != 0) {
      FUN_00476370(iVar1,iVar4,uVar3);
    }
    FUN_00476580(param_1);
    DestroyMenu(hMenu);
  }
  return;
}


