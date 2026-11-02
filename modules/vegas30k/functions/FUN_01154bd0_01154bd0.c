/* Module: vegas30k.dll
   Function: FUN_01154bd0
   Address: 01154bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01154bd0(HDC param_1,int param_2,int param_3,RECT *param_4,undefined4 *param_5)

{
  UINT UVar1;
  uint uVar2;
  int iVar3;
  UINT c;
  LPCSTR lpString;
  tagSIZE local_10;
  tagSIZE local_8;
  
  lpString = (LPCSTR)*param_5;
  c = param_5[1];
  UVar1 = GetTextAlign(param_1);
  uVar2 = UVar1 & 6;
  GetTextExtentPoint32A(param_1,lpString,c,&local_10);
  iVar3 = param_4->right - param_4->left;
  if ((iVar3 < local_10.cx) && (uVar2 != 6)) {
    GetTextExtentPoint32A(param_1,&DAT_01207708,3,&local_8);
    do {
      if (c == 0) goto LAB_01154c7a;
      c = c - 1;
      GetTextExtentPoint32A(param_1,lpString,c,&local_10);
    } while (iVar3 <= local_8.cx + local_10.cx);
    if (c != 0) {
      if (uVar2 == 2) {
        param_2 = param_2 - local_8.cx;
      }
      ExtTextOutA(param_1,param_2,param_4->bottom - param_3,6,param_4,lpString,c,(INT *)0x0);
      if (uVar2 == 2) {
        local_10.cx = local_8.cx;
      }
      ExtTextOutA(param_1,param_2 + local_10.cx,param_4->bottom - param_3,4,param_4,&DAT_01207708,3,
                  (INT *)0x0);
      return;
    }
LAB_01154c7a:
    c = 3;
    lpString = &DAT_01207708;
  }
  ExtTextOutA(param_1,param_2,param_4->bottom - param_3,6,param_4,lpString,c,(INT *)0x0);
  return;
}


