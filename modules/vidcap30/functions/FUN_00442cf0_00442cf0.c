/* Module: vidcap30.exe
   Function: FUN_00442cf0
   Address: 00442cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00442cf0(int param_1,HWND param_2,LPPOINT param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  HMENU hmenu;
  LRESULT LVar4;
  LRESULT LVar5;
  LRESULT LVar6;
  uint uVar7;
  bool bVar8;
  UINT check;
  
  if ((param_3->x == 0) && (param_3->y == 0)) {
    param_3->x = 4;
    param_3->y = 4;
  }
  ClientToScreen(param_2,param_3);
  if (param_4 == -1) {
    hmenu = (HMENU)FUN_00404200(0x22f,0);
    if (DAT_005bb558 == 2) {
      check = 0x9d8c;
    }
    else if (DAT_005bb558 == 0) {
      check = 0x9d8e;
    }
    else {
      check = 0x9d8d;
    }
    CheckMenuRadioItem(hmenu,0x9d8c,0x9d8e,check,0);
  }
  else {
    hmenu = (HMENU)FUN_00404200(0x22e,0);
  }
  if (hmenu == (HMENU)0x0) {
    return;
  }
  LVar4 = SendMessageA(*(HWND *)(param_1 + 0x1668),0x1004,0,0);
  LVar5 = SendMessageA(*(HWND *)(param_1 + 0x1668),0x1032,0,0);
  bVar8 = DAT_005bba94 != 0;
  if ((DAT_005bba94 == 0) && (LVar5 != 0)) {
    bVar3 = true;
LAB_00442de1:
    if ((LVar5 != 0) && (LVar6 = SendMessageA(*(HWND *)(param_1 + 0x1668),0x102c,0,2), LVar6 == 0))
    {
      bVar2 = true;
      goto LAB_00442e17;
    }
  }
  else {
    bVar3 = false;
    if (DAT_005bba94 == 0) goto LAB_00442de1;
  }
  bVar2 = false;
LAB_00442e17:
  if (((DAT_005bba94 == 0) && (LVar5 != 0)) &&
     (LVar4 = SendMessageA(*(HWND *)(param_1 + 0x1668),0x102c,LVar4 - 1,2), LVar4 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  EnableMenuItem(hmenu,0x229,(uint)bVar8);
  EnableMenuItem(hmenu,0x22a,(uint)!bVar3);
  EnableMenuItem(hmenu,0x22b,(uint)!bVar2);
  EnableMenuItem(hmenu,0x22c,(uint)!bVar1);
  uVar7 = FUN_00404270(*(undefined4 *)(param_1 + 8),hmenu,param_3,2);
  PostMessageA(*(HWND *)(param_1 + 8),0x111,uVar7 & 0xffff,0);
  return;
}


