/* Module: sfppack2.dll
   Function: FUN_5cd1c650
   Address: 5cd1c650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd1c650(RECT *param_1,int param_2,int param_3,int param_4,byte param_5)

{
  RECT *pRVar1;
  uint uVar2;
  HWND hWnd;
  LONG LVar3;
  
  if (param_2 != 0) {
    pRVar1 = param_1 + 0x10;
    uVar2 = FUN_5cd1c740((int)param_1,param_3,param_4,(uint *)pRVar1,(uint *)&param_1[0x10].top);
    if (uVar2 == 5) {
      if (((param_1->bottom & 0x10) == 0) || (pRVar1->left == 3)) {
        uVar2 = pRVar1->left;
        LVar3 = param_1[1].right;
      }
      else if (pRVar1->left == 1) {
        LVar3 = param_1[1].bottom;
        uVar2 = 2;
      }
      else {
        LVar3 = param_1[2].left;
        uVar2 = 1;
      }
      FUN_5cd19500((int)param_1,&param_1[1].bottom,LVar3,uVar2);
      FUN_5cd1c520((byte *)param_1,1);
      (*(code *)param_1[0x12].left)
                (param_1,param_1[3].top,param_1[0x11].bottom,4,&param_1[1].bottom,pRVar1->left);
      return;
    }
  }
  if ((param_1->left & 8) == 0) {
    SetFocus((HWND)param_1[3].left);
  }
  if ((param_5 & 2) == 0) {
    if ((param_1->bottom & 0x40000U) != 0) {
      hWnd = (HWND)param_1[3].right;
      if (hWnd == (HWND)0x0) {
        hWnd = GetParent((HWND)param_1[3].left);
      }
      SendMessageA(hWnd,0x111,(ushort)param_1[3].top | 0x30000,param_1[3].left);
    }
    FUN_5cd1c930(param_1,param_3,param_4,9);
  }
  return;
}


