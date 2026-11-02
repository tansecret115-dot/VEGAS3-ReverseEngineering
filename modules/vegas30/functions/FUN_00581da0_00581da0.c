/* Module: vegas30.exe
   Function: FUN_00581da0
   Address: 00581da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00581da0(HDC param_1,LPRECT param_2,undefined4 param_3,COLORREF param_4)

{
  int iVar1;
  undefined4 uVar2;
  LPCSTR local_8;
  LPCSTR local_4;
  
  FUN_005808d0();
  FUN_005808e0(param_3);
  iVar1 = FUN_00581100(&DAT_00628fd8);
  if (-1 < iVar1) {
    uVar2 = FUN_0057fc80(&param_3,(*(int *)(local_8 + -8) - iVar1) + -1);
    FUN_00580c30(uVar2);
    FUN_00580a90();
    uVar2 = FUN_0057fce0(&param_3,iVar1);
    FUN_00580c30(uVar2);
    FUN_00580a90();
  }
  SetTextColor(param_1,param_4);
  DrawTextA(param_1,local_8,-1,param_2,0x24);
  if (0 < iVar1) {
    DrawTextA(param_1,local_4,-1,param_2,0x26);
  }
  FUN_00580a90();
  FUN_00580a90();
  return;
}


