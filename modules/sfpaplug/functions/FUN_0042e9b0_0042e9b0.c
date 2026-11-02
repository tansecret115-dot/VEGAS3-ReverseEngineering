/* Module: sfpaplug.dll
   Function: FUN_0042e9b0
   Address: 0042e9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042e9b0(undefined4 param_1,HDC param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,COLORREF param_10)

{
  int iVar1;
  int iVar2;
  int y;
  int iVar3;
  int iVar4;
  HGDIOBJ local_18;
  HGDIOBJ local_14;
  RECT local_10;
  
  FUN_004421d0(6,0);
  local_18 = (HGDIOBJ)FUN_004421d0(0x14,0);
  local_14 = (HGDIOBJ)FUN_004421d0(0x10,0);
  if (param_8 != 0) {
    SetBkColor(param_2,param_10);
    local_10.bottom = param_4 + param_6;
    local_10.left = param_3;
    local_10.right = param_3 + param_5;
    local_10.top = param_4;
    ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  if (param_9 == 0) {
    switch(param_7) {
    case 0:
    case 2:
    case 5:
    case 6:
      SelectObject(param_2,local_18);
      MoveToEx(param_2,param_3 + 1,param_4,(LPPOINT)0x0);
      iVar4 = param_4 + param_6;
      iVar2 = param_6 / 2 + param_3;
      LineTo(param_2,iVar2 + 1,iVar4);
      SelectObject(param_2,local_14);
      MoveToEx(param_2,param_3,param_4,(LPPOINT)0x0);
      LineTo(param_2,iVar2,iVar4);
      LineTo(param_2,iVar2,iVar4 + -2);
      iVar3 = param_3 + param_5;
      LineTo(param_2,iVar3,iVar4 + -2);
      SelectObject(param_2,local_18);
      iVar1 = iVar4 + -1;
      MoveToEx(param_2,iVar2 + -1,iVar1,(LPPOINT)0x0);
      LineTo(param_2,iVar3,iVar1);
      if ((param_7 != 0) && (param_7 != 2)) {
        SetBkColor(param_2,param_10);
        local_10.right = param_5 / 2 + param_3;
        local_10.bottom = iVar4 + -2;
        local_10.left = param_3;
        local_10.top = param_4;
        ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        SelectObject(param_2,local_14);
        MoveToEx(param_2,iVar3 + -1,param_4,(LPPOINT)0x0);
        iVar2 = param_5 + (param_3 - param_6 / 2);
        LineTo(param_2,iVar2 + -1,iVar4);
        LineTo(param_2,iVar2 + -1,iVar4 + -2);
        LineTo(param_2,param_3 + -1,iVar4 + -2);
        SelectObject(param_2,local_18);
        MoveToEx(param_2,iVar3,param_4,(LPPOINT)0x0);
        LineTo(param_2,iVar2,iVar4);
        LineTo(param_2,iVar2,iVar1);
        LineTo(param_2,param_3 + -1,iVar1);
        return;
      }
      break;
    case 1:
    case 3:
      SelectObject(param_2,local_14);
      MoveToEx(param_2,param_3 + param_5 + -1,param_4,(LPPOINT)0x0);
      iVar1 = param_4 + param_6;
      iVar4 = param_5 + (param_3 - param_6 / 2);
      LineTo(param_2,iVar4 + -1,iVar1);
      LineTo(param_2,iVar4 + -1,iVar1 + -2);
      LineTo(param_2,param_3 + -1,iVar1 + -2);
      SelectObject(param_2,local_18);
      MoveToEx(param_2,param_3 + param_5,param_4,(LPPOINT)0x0);
      LineTo(param_2,iVar4,iVar1);
      LineTo(param_2,iVar4,iVar1 + -1);
      LineTo(param_2,param_3 + -1,iVar1 + -1);
      return;
    case 4:
      SelectObject(param_2,local_14);
      MoveToEx(param_2,param_3 + param_5 + -1,param_4,(LPPOINT)0x0);
      iVar4 = param_4 + param_6;
      iVar3 = param_5 + (param_3 - param_6 / 2);
      LineTo(param_2,iVar3 + -1,iVar4);
      iVar1 = iVar4 + -2;
      LineTo(param_2,iVar3 + -1,iVar1);
      LineTo(param_2,param_3 + -1,iVar1);
      SelectObject(param_2,local_18);
      iVar2 = param_5 + param_3;
      MoveToEx(param_2,iVar2,param_4,(LPPOINT)0x0);
      LineTo(param_2,iVar3,iVar4);
      y = iVar4 + -1;
      LineTo(param_2,iVar3,y);
      LineTo(param_2,param_3 + -1,y);
      SetBkColor(param_2,param_10);
      local_10.left = (param_3 - param_5 / 2) + param_5;
      local_10.right = local_10.left + param_5 / 2;
      local_10.top = param_4;
      local_10.bottom = iVar1;
      ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      SelectObject(param_2,local_18);
      MoveToEx(param_2,param_3 + 1,param_4,(LPPOINT)0x0);
      iVar3 = param_6 / 2 + param_3;
      LineTo(param_2,iVar3 + 1,iVar4);
      SelectObject(param_2,local_14);
      MoveToEx(param_2,param_3,param_4,(LPPOINT)0x0);
      LineTo(param_2,iVar3,iVar4);
      LineTo(param_2,iVar3,iVar1);
      LineTo(param_2,iVar2,iVar1);
      SelectObject(param_2,local_18);
      MoveToEx(param_2,iVar3 + -1,y,(LPPOINT)0x0);
      LineTo(param_2,iVar2,y);
      return;
    case 7:
    case 9:
      SelectObject(param_2,local_14);
      MoveToEx(param_2,param_3,param_4,(LPPOINT)0x0);
      iVar3 = param_5 / 2 + param_3;
      LineTo(param_2,iVar3,param_4);
      LineTo(param_2,iVar3 + -2,param_6 / 5 + param_4);
      LineTo(param_2,iVar3 + -4,(param_6 * 2) / 5 + param_4);
      LineTo(param_2,iVar3 + -2,(param_6 * 2) / 3 + param_4);
      LineTo(param_2,iVar3 + -3,param_4 + -2 + param_6);
      iVar1 = param_3 + 1 + param_5;
      LineTo(param_2,iVar1,param_4 + -2 + param_6);
      SelectObject(param_2,local_18);
      MoveToEx(param_2,param_3,param_4 + 1,(LPPOINT)0x0);
      LineTo(param_2,iVar3,param_4 + 1);
      iVar4 = param_4 + -1 + param_6;
      MoveToEx(param_2,iVar3,iVar4,(LPPOINT)0x0);
      LineTo(param_2,iVar1,iVar4);
      return;
    case 8:
    case 10:
      SelectObject(param_2,local_14);
      MoveToEx(param_2,param_3 + param_5,param_4,(LPPOINT)0x0);
      iVar4 = param_5 / 2 + param_3;
      LineTo(param_2,iVar4,param_4);
      LineTo(param_2,iVar4 + 2,param_6 / 5 + param_4);
      LineTo(param_2,iVar4 + 4,(param_6 * 2) / 5 + param_4);
      LineTo(param_2,iVar4 + 2,(param_6 * 2) / 3 + param_4);
      LineTo(param_2,iVar4 + 3,param_4 + -2 + param_6);
      LineTo(param_2,param_3 + -1,param_4 + -2 + param_6);
      SelectObject(param_2,local_18);
      MoveToEx(param_2,iVar4,param_4 + 1,(LPPOINT)0x0);
      LineTo(param_2,param_3 + param_5 + 1,param_4 + 1);
      iVar1 = param_4 + -1 + param_6;
      MoveToEx(param_2,iVar4,iVar1,(LPPOINT)0x0);
      LineTo(param_2,param_3 + -1,iVar1);
    }
  }
  else {
    switch(param_7) {
    case 0:
    case 2:
    case 5:
    case 6:
      FUN_0042f220(param_2,&local_14,&local_18,param_3,param_4,param_5,param_6);
      if ((param_7 != 0) && (param_7 != 2)) {
        SetBkColor(param_2,param_10);
        local_10.right = param_5 / 2 + param_3;
        local_10.bottom = param_4 + param_6;
        local_10.left = param_3;
        local_10.top = param_4;
        ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        FUN_0042f2f0(param_2,&local_14,&local_18,param_3,param_4,param_5,param_6);
        return;
      }
      break;
    case 1:
    case 3:
      FUN_0042f2f0(param_2,&local_14,&local_18,param_3,param_4,param_5,param_6);
      return;
    case 4:
      FUN_0042f2f0(param_2,&local_14,&local_18,param_3,param_4,param_5,param_6);
      SetBkColor(param_2,param_10);
      local_10.top = param_4;
      local_10.left = (param_3 - param_5 / 2) + param_5;
      local_10.bottom = param_4 + param_6;
      local_10.right = local_10.left + param_5 / 2;
      ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      FUN_0042f220(param_2,&local_14,&local_18,param_3,param_4,param_5,param_6);
      return;
    }
  }
  return;
}


