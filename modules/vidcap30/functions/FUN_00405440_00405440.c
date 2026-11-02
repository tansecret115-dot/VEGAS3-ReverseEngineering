/* Module: vidcap30.exe
   Function: FUN_00405440
   Address: 00405440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405440(undefined4 *param_1,HDROP param_2)

{
  HCURSOR pHVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  tagPOINT local_8;
  
  pHVar1 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  pHVar1 = SetCursor(pHVar1);
  local_c = 0;
  FUN_00405330(&local_c,param_2);
  if (local_c != 0) {
    DragQueryPoint(param_2,&local_8);
    ClientToScreen((HWND)*param_1,&local_8);
    iVar2 = FUN_00404f50(param_1,local_c,0xffffffff);
    FUN_00405040(param_1,local_c,local_8.x,local_8.y,0);
    FUN_00417990(local_c);
    if (iVar2 == 0) {
      uVar3 = _SfGetString_8(DAT_005ba2a0,0x58);
      SfMsgBox(DAT_005ba4bc,0x30,uVar3);
    }
  }
  SetCursor(pHVar1);
  return 0;
}


