/* Module: vidcap30.exe
   Function: FUN_00453350
   Address: 00453350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453350(HWND param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (*(int *)(iVar1 + 0xfc) != 0) {
    uVar5 = 0x8001;
    uVar4 = 0;
    uVar3 = 0;
    pHVar2 = GetParent(param_1);
    _SfWndCenter_16(pHVar2,uVar3,uVar4,uVar5);
    *(undefined4 *)(iVar1 + 0xfc) = 0;
  }
  FUN_004531c0(param_1,iVar1);
  FUN_004532d0(param_1,iVar1);
  return;
}


