/* Module: vidcap30.exe
   Function: FUN_00545680
   Address: 00545680
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00545680(HDC param_1,int param_2,RECT *param_3,uchar *param_4,int param_5)

{
  uchar uVar1;
  RECT *lprect;
  LONG LVar2;
  uchar *puVar3;
  uchar *puVar4;
  uint uVar5;
  uchar *lpString;
  uchar *puVar6;
  uchar *local_18;
  int local_14;
  RECT *local_10;
  int local_c;
  tagSIZE local_8;
  
  lprect = param_3;
  puVar3 = _mbschr(param_4,10);
  lpString = (uchar *)0x0;
  puVar6 = param_4;
  if (puVar3 != (uchar *)0x0) {
    puVar6 = puVar3 + 1;
    local_14 = (param_3->bottom + param_3->top) / 2;
    lpString = param_4;
    param_3 = (RECT *)(puVar3 + -(int)param_4);
  }
  puVar4 = _mbschr(puVar6,10);
  puVar3 = puVar6;
  local_18 = puVar4;
  if (puVar4 != (uchar *)0x0) {
    local_10 = param_3;
    local_18 = param_4;
    param_3 = (RECT *)(puVar4 + -(int)puVar6);
    puVar3 = puVar4 + 1;
    local_14 = (lprect->top + lprect->bottom * 2) / 3;
    local_c = (lprect->bottom + lprect->top * 2) / 3;
    lpString = puVar6;
  }
  uVar5 = 0xffffffff;
  puVar6 = puVar3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
  } while (uVar1 != '\0');
  GetTextExtentPoint32A(param_1,(LPCSTR)puVar3,~uVar5 - 1,&local_8);
  LVar2 = local_8.cx;
  param_4 = (uchar *)local_8.cx;
  if (lpString != (uchar *)0x0) {
    uVar5 = 0xffffffff;
    puVar6 = lpString;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (uVar1 != '\0');
    GetTextExtentPoint32A(param_1,(LPCSTR)lpString,~uVar5 - 1,&local_8);
    if (LVar2 <= local_8.cx) {
      param_4 = (uchar *)local_8.cx;
    }
  }
  if (local_18 != (uchar *)0x0) {
    uVar5 = 0xffffffff;
    puVar6 = local_18;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (uVar1 != '\0');
    GetTextExtentPoint32A(param_1,(LPCSTR)local_18,~uVar5 - 1,&local_8);
    if ((int)param_4 <= local_8.cx) {
      param_4 = (uchar *)local_8.cx;
    }
  }
  if ((int)param_4 + param_5 <= lprect->right - lprect->left) {
    param_2 = param_2 - param_5 / 2;
  }
  uVar5 = 0xffffffff;
  puVar6 = puVar3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
  } while (uVar1 != '\0');
  ExtTextOutA(param_1,param_2,lprect->bottom,6,lprect,(LPCSTR)puVar3,~uVar5 - 1,(INT *)0x0);
  if (lpString != (uchar *)0x0) {
    ExtTextOutA(param_1,param_2,local_14,4,lprect,(LPCSTR)lpString,(UINT)param_3,(INT *)0x0);
  }
  if (local_18 != (uchar *)0x0) {
    ExtTextOutA(param_1,param_2,local_c,4,lprect,(LPCSTR)local_18,(UINT)local_10,(INT *)0x0);
  }
  return (int)param_4 / 2 + param_2;
}


