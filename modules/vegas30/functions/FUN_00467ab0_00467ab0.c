/* Module: vegas30.exe
   Function: FUN_00467ab0
   Address: 00467ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00467ab0(HDC param_1,COLORREF param_2,COLORREF param_3,COLORREF param_4,int *param_5,
                 int param_6,int param_7,int param_8)

{
  int iVar1;
  COLORREF CVar2;
  int iVar3;
  RECT local_10;
  
  iVar1 = param_6 + 3;
  if ((iVar1 <= param_5[2]) && (*param_5 <= param_6 + -3)) {
    SetBkColor(param_1,param_2);
    local_10.top = param_5[1] + 1;
    local_10.right = param_6 + 4;
    local_10.bottom = param_5[1] + 2;
    local_10.left = param_6 + -3;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.left = param_6 + -2;
    local_10.top = param_5[1] + 2;
    local_10.right = param_6 + 3;
    local_10.bottom = param_5[1] + 3;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.left = param_6 + -1;
    local_10.top = param_5[1] + 3;
    local_10.right = param_6 + 2;
    local_10.bottom = param_5[1] + 4;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.right = param_6 + 1;
    local_10.top = param_5[1] + 4;
    local_10.bottom = param_5[1] + 5;
    local_10.left = param_6;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    CVar2 = param_3;
    if (((param_7 < iVar1) && (param_6 + -3 < param_8)) &&
       ((param_6 + -3 < param_7 || (CVar2 = param_4, param_8 < iVar1)))) {
      CVar2 = param_4;
      if (param_6 + -3 < param_7) {
        CVar2 = param_3;
      }
      SetBkColor(param_1,CVar2);
      local_10.top = param_5[1];
      local_10.left = param_6 + -3;
      local_10.right = param_6 + -2;
      local_10.bottom = local_10.top + 1;
      ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      if ((param_6 + -2 < param_7) || (CVar2 = param_4, param_8 <= param_6 + -2)) {
        CVar2 = param_3;
      }
      SetBkColor(param_1,CVar2);
      local_10.top = param_5[1];
      local_10.left = param_6 + -2;
      local_10.right = param_6 + -1;
      local_10.bottom = local_10.top + 2;
      ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      if ((param_6 + -1 < param_7) || (CVar2 = param_4, param_8 <= param_6 + -1)) {
        CVar2 = param_3;
      }
      SetBkColor(param_1,CVar2);
      local_10.top = param_5[1];
      local_10.left = param_6 + -1;
      local_10.bottom = local_10.top + 3;
      local_10.right = param_6;
      ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      if ((param_6 < param_7) || (CVar2 = param_4, param_8 <= param_6)) {
        CVar2 = param_3;
      }
      SetBkColor(param_1,CVar2);
      local_10.top = param_5[1];
      local_10.bottom = local_10.top + 4;
      local_10.right = param_6 + 1;
      local_10.left = param_6;
      ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      if ((param_6 + 1 < param_7) || (CVar2 = param_4, param_8 <= param_6 + 1)) {
        CVar2 = param_3;
      }
      SetBkColor(param_1,CVar2);
      local_10.top = param_5[1];
      local_10.left = param_6 + 1;
      local_10.right = param_6 + 2;
      local_10.bottom = local_10.top + 3;
      ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      iVar3 = param_6 + 2;
      if ((iVar3 < param_7) || (CVar2 = param_4, param_8 <= iVar3)) {
        CVar2 = param_3;
      }
      SetBkColor(param_1,CVar2);
      local_10.top = param_5[1];
      local_10.right = param_6 + 3;
      local_10.bottom = local_10.top + 2;
      local_10.left = iVar3;
      ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      if (param_8 <= iVar1) {
        param_4 = param_3;
      }
      SetBkColor(param_1,param_4);
      local_10.top = param_5[1];
      local_10.right = param_6 + 4;
      local_10.bottom = local_10.top + 1;
      local_10.left = iVar1;
      ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      return;
    }
    SetBkColor(param_1,CVar2);
    local_10.top = param_5[1];
    local_10.left = param_6 + -3;
    local_10.right = param_6 + -2;
    local_10.bottom = local_10.top + 1;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.top = param_5[1];
    local_10.left = param_6 + -2;
    local_10.right = param_6 + -1;
    local_10.bottom = local_10.top + 2;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.top = param_5[1];
    local_10.bottom = local_10.top + 3;
    local_10.left = param_6 + -1;
    local_10.right = param_6;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.top = param_5[1];
    local_10.right = param_6 + 1;
    local_10.bottom = local_10.top + 4;
    local_10.left = param_6;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.top = param_5[1];
    local_10.left = param_6 + 1;
    local_10.right = param_6 + 2;
    local_10.bottom = local_10.top + 3;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.top = param_5[1];
    local_10.left = param_6 + 2;
    local_10.right = param_6 + 3;
    local_10.bottom = local_10.top + 2;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.top = param_5[1];
    local_10.right = param_6 + 4;
    local_10.bottom = local_10.top + 1;
    local_10.left = iVar1;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  return;
}


