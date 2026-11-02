/* Module: mcplugrw.dll
   Function: FUN_00406f90
   Address: 00406f90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00406f90(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  LONG LVar1;
  uint uVar2;
  HWND hWnd;
  int iVar3;
  UINT Msg;
  WPARAM wParam;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (LVar1 == 0) {
    if (param_2 == 0x110) {
      uVar2 = FUN_00406f50(param_1,param_4);
      return uVar2;
    }
  }
  else if (param_2 == 0xf) {
    FUN_004048c0(param_1,LVar1);
  }
  else if (param_2 == 0x4e) {
    switch(*(undefined4 *)(param_4 + 8)) {
    case 0xffffff2f:
      iVar3 = FUN_00406b40(param_1,LVar1);
      SetWindowLongA(param_1,0,(uint)(iVar3 != 6));
      return (uint)(iVar3 != 6);
    case 0xffffff30:
      FUN_00405c80(param_1,LVar1);
      return 1;
    case 0xffffff31:
      FUN_00405be0(param_1,LVar1,0x1f5e);
      return 1;
    case 0xffffff32:
      FUN_00405c10(param_1,LVar1);
      return 1;
    case 0xffffff35:
      FUN_00406a60(LVar1);
      return 1;
    case 0xffffff38:
      uVar2 = *(int *)(LVar1 + 0x1cc) != 0 | 2;
      wParam = 0;
      Msg = 0x470;
      hWnd = GetParent(param_1);
      PostMessageA(hWnd,Msg,wParam,uVar2);
      return 0;
    }
  }
  return 0;
}


