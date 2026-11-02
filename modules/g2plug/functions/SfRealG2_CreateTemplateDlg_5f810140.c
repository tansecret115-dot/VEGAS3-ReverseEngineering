/* Module: g2plug.dll
   Function: SfRealG2_CreateTemplateDlg
   Address: 5f810140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfRealG2_CreateTemplateDlg(struct HWND__ *,struct tagRECT *,struct
   SFG2_DLG_TEMPLATE_INFO *,struct HWND__ * *) */

long SfRealG2_CreateTemplateDlg
               (HWND__ *param_1,tagRECT *param_2,SFG2_DLG_TEMPLATE_INFO *param_3,HWND__ **param_4)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  HWND hWnd;
  int iVar2;
  undefined4 *puVar3;
  
                    /* 0x10140  35
                       ?SfRealG2_CreateTemplateDlg@@YGJPAUHWND__@@PAUtagRECT@@PAUSFG2_DLG_TEMPLATE_INFO@@PAPAU1@@Z
                        */
  hMem = GlobalAlloc(0x42,0x1c);
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  puVar3 = puVar1;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *(undefined4 *)param_3;
    param_3 = param_3 + 4;
    puVar3 = puVar3 + 1;
  }
  hWnd = (HWND)FUN_5f816910(DAT_5f87746c,(LPCSTR)0x1aa,param_1,(DLGPROC)&LAB_5f80fd40,(LPARAM)puVar1
                           );
  *param_4 = hWnd;
  if (hWnd != (HWND)0x0) {
    SetWindowPos(hWnd,(HWND)0x0,param_2->left,param_2->top,param_2->right - param_2->left,
                 param_2->bottom - param_2->top,0x40);
  }
  return (-(uint)(*param_4 != (HWND__ *)0x0) & 0x7fffbffb) + 0x80004005;
}


