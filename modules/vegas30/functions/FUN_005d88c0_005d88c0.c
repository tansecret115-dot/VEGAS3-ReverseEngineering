/* Module: vegas30.exe
   Function: FUN_005d88c0
   Address: 005d88c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d88c0(HWND param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (*(int *)(iVar1 + 0xd54) != 0) {
    uVar5 = 0x8001;
    uVar4 = 0;
    uVar3 = 0;
    pHVar2 = GetParent(param_1);
    _SfWndCenter_16(pHVar2,uVar3,uVar4,uVar5);
    *(undefined4 *)(iVar1 + 0xd54) = 0;
  }
  FUN_005d83e0(param_1);
  FUN_005d8620(param_1,iVar1);
  FUN_005d8490(param_1,iVar1);
  FUN_005d84f0(param_1,iVar1);
  FUN_005d8670(param_1,iVar1);
  FUN_005d8840(param_1,iVar1);
  return;
}


