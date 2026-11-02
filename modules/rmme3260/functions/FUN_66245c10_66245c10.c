/* Module: rmme3260.dll
   Function: FUN_66245c10
   Address: 66245c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66245c10(int *param_1)

{
  HDC hdc;
  int iVar1;
  tagTEXTMETRICA local_50;
  tagRECT local_18;
  LONG local_8;
  
  if (*param_1 == 0) {
    return 0x80004005;
  }
  GetWindowRect((HWND)param_1[1],&local_18);
  hdc = GetDC((HWND)*param_1);
  GetTextMetricsA(hdc,&local_50);
  local_8 = local_50.tmHeight;
  ReleaseDC((HWND)*param_1,hdc);
  param_1[2] = 0;
  param_1[4] = local_18.right - local_18.left;
  iVar1 = ftol();
  iVar1 = (local_18.bottom - iVar1) - local_18.top;
  param_1[5] = local_18.bottom - local_18.top;
  param_1[3] = iVar1;
  SetWindowPos((HWND)*param_1,(HWND)0x0,0,iVar1,local_18.right - local_18.left,
               (local_18.bottom - local_18.top) - iVar1,0);
  if ((HGDIOBJ)param_1[6] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[6]);
    param_1[6] = 0;
  }
  return 0;
}


