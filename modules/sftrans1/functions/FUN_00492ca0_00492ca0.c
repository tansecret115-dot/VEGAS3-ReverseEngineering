/* Module: sftrans1.dll
   Function: FUN_00492ca0
   Address: 00492ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00492ca0(HDC param_1,HGDIOBJ param_2,int *param_3,LPCSTR param_4)

{
  bool bVar1;
  LONG LVar2;
  HGDIOBJ h;
  int iVar3;
  LONG *pLVar4;
  int local_70;
  int local_6c;
  tagRECT local_68;
  int local_58;
  int local_50;
  int local_4c;
  RECT local_48;
  tagTEXTMETRICA local_38;
  
  local_70 = 0;
  local_6c = 0;
  h = SelectObject(param_1,param_2);
  FUN_004e4d70(param_2,param_4,0xffffffff,&local_70);
  local_68.left = *param_3;
  local_68.top = param_3[1];
  local_68.right = local_68.left + local_70;
  if (param_3[2] <= local_68.left + local_70) {
    local_68.right = param_3[2];
  }
  local_68.bottom = local_6c + local_68.top;
  if (param_3[3] <= local_6c + local_68.top) {
    local_68.bottom = param_3[3];
  }
  local_38.tmHeight = 0;
  pLVar4 = &local_38.tmAscent;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pLVar4 = 0;
    pLVar4 = pLVar4 + 1;
  }
  GetTextMetricsA(param_1,&local_38);
  LVar2 = local_68.top;
  if (local_38.tmItalic != '\0') {
    local_4c = local_68.bottom;
    local_50 = local_68.right;
    iVar3 = local_68.right + 10;
    local_58 = local_68.left;
    bVar1 = local_68.right <= iVar3;
    local_68.right = iVar3;
    if (bVar1) {
      local_48.left = local_68.left;
      local_48.top = local_68.top;
      local_48.bottom = local_68.top;
      local_48.right = iVar3;
      ExtTextOutA(param_1,0,0,2,&local_48,(LPCSTR)0x0,0,(INT *)0x0);
      local_48.top = local_4c;
      local_48.left = local_68.left;
      local_48.right = local_68.right;
      local_48.bottom = local_68.bottom;
      ExtTextOutA(param_1,0,0,2,&local_48,(LPCSTR)0x0,0,(INT *)0x0);
      local_48.left = local_68.left;
      local_48.top = LVar2;
      local_48.right = local_58;
      local_48.bottom = local_4c;
      ExtTextOutA(param_1,0,0,2,&local_48,(LPCSTR)0x0,0,(INT *)0x0);
      local_48.left = local_50;
      local_48.top = LVar2;
      local_48.right = local_68.right;
      local_48.bottom = local_4c;
      ExtTextOutA(param_1,0,0,2,&local_48,(LPCSTR)0x0,0,(INT *)0x0);
    }
    if (param_3[2] < local_68.right) {
      param_3[2] = param_3[2] + 10;
    }
  }
  lstrlenA(param_4);
  if ((((*param_3 <= local_68.left) && (param_3[1] <= local_68.top)) &&
      (local_68.right <= param_3[2])) && (local_68.bottom <= param_3[3])) {
    local_48.bottom = local_68.top;
    local_48.left = *param_3;
    local_48.top = param_3[1];
    local_48.right = param_3[2];
    ExtTextOutA(param_1,0,0,2,&local_48,(LPCSTR)0x0,0,(INT *)0x0);
    local_48.left = *param_3;
    local_48.right = param_3[2];
    local_48.top = local_68.bottom;
    local_48.bottom = param_3[3];
    ExtTextOutA(param_1,0,0,2,&local_48,(LPCSTR)0x0,0,(INT *)0x0);
    local_48.left = *param_3;
    local_48.top = local_68.top;
    local_48.right = local_68.left;
    local_48.bottom = local_68.bottom;
    ExtTextOutA(param_1,0,0,2,&local_48,(LPCSTR)0x0,0,(INT *)0x0);
    FUN_0048cd60(param_1,local_68.right,local_68.top,param_3[2] - local_68.right,
                 local_68.bottom - local_68.top);
  }
  DrawTextA(param_1,param_4,-1,&local_68,0x20);
  SelectObject(param_1,h);
  return;
}


