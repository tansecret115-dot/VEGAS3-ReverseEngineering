/* Module: vidcap30.exe
   Function: FUN_004a4d30
   Address: 004a4d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a4d30(undefined4 param_1,HDC param_2,int param_3,int param_4,int param_5,int param_6,
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
  
  _SfGetUIPenWithStyle_8(6,0);
  local_18 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0x14,0);
  local_14 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0x10,0);
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
      iVar3 = param_4 + param_6;
      iVar1 = param_6 / 2 + param_3;
      LineTo(param_2,iVar1 + 1,iVar3);
      SelectObject(param_2,local_14);
      MoveToEx(param_2,param_3,param_4,(LPPOINT)0x0);
      LineTo(param_2,iVar1,iVar3);
      LineTo(param_2,iVar1,iVar3 + -2);
      iVar2 = param_3 + param_5;
      LineTo(param_2,iVar2,iVar3 + -2);
      SelectObject(param_2,local_18);
      iVar4 = iVar3 + -1;
      MoveToEx(param_2,iVar1 + -1,iVar4,(LPPOINT)0x0);
      LineTo(param_2,iVar2,iVar4);
      if ((param_7 != 0) && (param_7 != 2)) {
        SetBkColor(param_2,param_10);
        local_10.right = param_5 / 2 + param_3;
        local_10.bottom = iVar3 + -2;
        local_10.left = param_3;
        local_10.top = param_4;
        ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        SelectObject(param_2,local_14);
        MoveToEx(param_2,iVar2 + -1,param_4,(LPPOINT)0x0);
        param_5 = param_5 + (param_3 - param_6 / 2);
        LineTo(param_2,param_5 + -1,iVar3);
        LineTo(param_2,param_5 + -1,iVar3 + -2);
        LineTo(param_2,param_3 + -1,iVar3 + -2);
        SelectObject(param_2,local_18);
        MoveToEx(param_2,iVar2,param_4,(LPPOINT)0x0);
        LineTo(param_2,param_5,iVar3);
        LineTo(param_2,param_5,iVar4);
        LineTo(param_2,param_3 + -1,iVar4);
        return;
      }
      break;
    case 1:
    case 3:
      SelectObject(param_2,local_14);
      MoveToEx(param_2,param_3 + param_5 + -1,param_4,(LPPOINT)0x0);
      iVar4 = param_4 + param_6;
      iVar3 = param_5 + (param_3 - param_6 / 2);
      LineTo(param_2,iVar3 + -1,iVar4);
      LineTo(param_2,iVar3 + -1,iVar4 + -2);
      LineTo(param_2,param_3 + -1,iVar4 + -2);
      SelectObject(param_2,local_18);
      MoveToEx(param_2,param_3 + param_5,param_4,(LPPOINT)0x0);
      LineTo(param_2,iVar3,iVar4);
      LineTo(param_2,iVar3,iVar4 + -1);
      LineTo(param_2,param_3 + -1,iVar4 + -1);
      return;
    case 4:
      SelectObject(param_2,local_14);
      MoveToEx(param_2,param_3 + param_5 + -1,param_4,(LPPOINT)0x0);
      iVar3 = param_4 + param_6;
      iVar2 = param_5 + (param_3 - param_6 / 2);
      LineTo(param_2,iVar2 + -1,iVar3);
      iVar4 = iVar3 + -2;
      LineTo(param_2,iVar2 + -1,iVar4);
      LineTo(param_2,param_3 + -1,iVar4);
      SelectObject(param_2,local_18);
      iVar1 = param_5 + param_3;
      MoveToEx(param_2,iVar1,param_4,(LPPOINT)0x0);
      LineTo(param_2,iVar2,iVar3);
      y = iVar3 + -1;
      LineTo(param_2,iVar2,y);
      LineTo(param_2,param_3 + -1,y);
      SetBkColor(param_2,param_10);
      local_10.left = (param_3 - param_5 / 2) + param_5;
      local_10.right = local_10.left + param_5 / 2;
      local_10.top = param_4;
      local_10.bottom = iVar4;
      ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      SelectObject(param_2,local_18);
      MoveToEx(param_2,param_3 + 1,param_4,(LPPOINT)0x0);
      iVar2 = param_6 / 2 + param_3;
      LineTo(param_2,iVar2 + 1,iVar3);
      SelectObject(param_2,local_14);
      MoveToEx(param_2,param_3,param_4,(LPPOINT)0x0);
      LineTo(param_2,iVar2,iVar3);
      LineTo(param_2,iVar2,iVar4);
      LineTo(param_2,iVar1,iVar4);
      SelectObject(param_2,local_18);
      MoveToEx(param_2,iVar2 + -1,y,(LPPOINT)0x0);
      LineTo(param_2,iVar1,y);
      return;
    case 7:
    case 9:
      SelectObject(param_2,local_14);
      MoveToEx(param_2,param_3,param_4,(LPPOINT)0x0);
      iVar4 = param_5 / 2 + param_3;
      LineTo(param_2,iVar4,param_4);
      LineTo(param_2,iVar4 + -2,param_6 / 5 + param_4);
      LineTo(param_2,iVar4 + -4,(param_6 * 2) / 5 + param_4);
      LineTo(param_2,iVar4 + -2,(param_6 * 2) / 3 + param_4);
      LineTo(param_2,iVar4 + -3,param_4 + -2 + param_6);
      param_5 = param_3 + 1 + param_5;
      LineTo(param_2,param_5,param_4 + -2 + param_6);
      SelectObject(param_2,local_18);
      MoveToEx(param_2,param_3,param_4 + 1,(LPPOINT)0x0);
      LineTo(param_2,iVar4,param_4 + 1);
      param_6 = param_4 + -1 + param_6;
      MoveToEx(param_2,iVar4,param_6,(LPPOINT)0x0);
      LineTo(param_2,param_5,param_6);
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
      param_6 = param_4 + -1 + param_6;
      MoveToEx(param_2,iVar4,param_6,(LPPOINT)0x0);
      LineTo(param_2,param_3 + -1,param_6);
    }
  }
  else {
    switch(param_7) {
    case 0:
    case 2:
    case 5:
    case 6:
      FUN_004a55a0(param_2,&local_14,&local_18,param_3,param_4,param_5,param_6,param_9);
      if ((param_7 != 0) && (param_7 != 2)) {
        SetBkColor(param_2,param_10);
        local_10.right = param_5 / 2 + param_3;
        local_10.bottom = param_4 + param_6;
        local_10.left = param_3;
        local_10.top = param_4;
        ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        FUN_004a5670(param_2,&local_14,&local_18,param_3,param_4,param_5,param_6,param_9);
        return;
      }
      break;
    case 1:
    case 3:
      FUN_004a5670(param_2,&local_14,&local_18,param_3,param_4,param_5,param_6,param_9);
      return;
    case 4:
      FUN_004a5670(param_2,&local_14,&local_18,param_3,param_4,param_5,param_6,param_9);
      SetBkColor(param_2,param_10);
      local_10.top = param_4;
      local_10.left = (param_3 - param_5 / 2) + param_5;
      local_10.bottom = param_4 + param_6;
      local_10.right = local_10.left + param_5 / 2;
      ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      FUN_004a55a0(param_2,&local_14,&local_18,param_3,param_4,param_5,param_6,param_9);
      return;
    }
  }
  return;
}


