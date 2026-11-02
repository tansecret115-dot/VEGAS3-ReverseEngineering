/* Module: sftrans1.dll
   Function: FUN_00489ed0
   Address: 00489ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00489ed0(HDC param_1,HGDIOBJ param_2,int *param_3,wchar_t *param_4)

{
  HGDIOBJ h;
  size_t c;
  INT *lpDx;
  RECT local_10;
  
  h = SelectObject(param_1,param_2);
  local_10.left = *param_3;
  local_10.top = param_3[1];
  local_10.right = param_3[2];
  local_10.bottom = param_3[3];
  SetTextAlign(param_1,0);
  lpDx = (INT *)0x0;
  c = wcslen(param_4);
  ExtTextOutW(param_1,local_10.left,local_10.top,6,&local_10,param_4,c,lpDx);
  SelectObject(param_1,h);
  return;
}


