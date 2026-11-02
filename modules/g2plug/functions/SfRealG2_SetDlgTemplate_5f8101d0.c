/* Module: g2plug.dll
   Function: SfRealG2_SetDlgTemplate
   Address: 5f8101d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfRealG2_SetDlgTemplate(struct HWND__ *,struct SFG2_DLG_TEMPLATE_INFO *) */

long SfRealG2_SetDlgTemplate(HWND__ *param_1,SFG2_DLG_TEMPLATE_INFO *param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EBP;
  WPARAM wParam;
  code *pcVar4;
  int *piVar5;
  bool bVar6;
  
                    /* 0x101d0  43
                       ?SfRealG2_SetDlgTemplate@@YGJPAUHWND__@@PAUSFG2_DLG_TEMPLATE_INFO@@@Z */
  hWnd = GetDlgItem(param_1,0xc9);
  pcVar4 = SendMessageA_exref;
  SendMessageA(hWnd,0x14e,0,0);
  wParam = 0;
  LVar1 = SendMessageA(hWnd,0x146,0,0);
  if (0 < LVar1) {
    do {
      piVar2 = (int *)(*pcVar4)(hWnd,0x150,wParam,0);
      if (piVar2 != (int *)0x0) {
        iVar3 = 4;
        bVar6 = true;
        piVar5 = unaff_EBP;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *piVar2 == *piVar5;
          piVar2 = piVar2 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        pcVar4 = SendMessageA_exref;
        if (bVar6) {
          SendMessageA(hWnd,0x14e,wParam,0);
          return 0;
        }
      }
      wParam = wParam + 1;
      iVar3 = (*pcVar4)(hWnd,0x146,0,0);
    } while ((int)wParam < iVar3);
  }
  return 1;
}


