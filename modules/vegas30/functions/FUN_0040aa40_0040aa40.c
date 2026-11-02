/* Module: vegas30.exe
   Function: FUN_0040aa40
   Address: 0040aa40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040aa40(int param_1,WNDCLASSEXA *param_2,UINT *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPSTR pCVar1;
  HINSTANCE pHVar2;
  WNDPROC pWVar3;
  LPCSTR pCVar4;
  UINT UVar5;
  ATOM AVar6;
  BOOL BVar7;
  uint extraout_EAX;
  HCURSOR pHVar8;
  int iVar9;
  tagWNDCLASSEXA *ptVar10;
  WNDCLASSEXA *pWVar11;
  tagWNDCLASSEXA local_60;
  tagWNDCLASSEXA local_30;
  
  if ((short)param_2[1].cbWndExtra == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x34);
    EnterCriticalSection(lpCriticalSection);
    if ((short)param_2[1].cbWndExtra == 0) {
      pHVar2 = *(HINSTANCE *)(param_1 + 4);
      if ((LPCSTR)param_2[1].cbSize == (LPCSTR)0x0) {
        pHVar8 = LoadCursorA((HINSTANCE)(~-(uint)(param_2[1].cbClsExtra != 0) & (uint)pHVar2),
                             (LPCSTR)param_2[1].lpfnWndProc);
        param_2->hCursor = pHVar8;
      }
      else {
        pWVar3 = param_2->lpfnWndProc;
        pCVar4 = param_2->lpszClassName;
        local_60.cbSize = 0x30;
        BVar7 = GetClassInfoExA((HINSTANCE)0x0,(LPCSTR)param_2[1].cbSize,&local_60);
        if ((BVar7 == 0) &&
           (BVar7 = GetClassInfoExA(DAT_0064716c,(LPCSTR)param_2[1].cbSize,&local_60), BVar7 == 0))
        {
          LeaveCriticalSection(lpCriticalSection);
          return extraout_EAX & 0xffff0000;
        }
        ptVar10 = &local_60;
        pWVar11 = param_2;
        for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
          pWVar11->cbSize = ptVar10->cbSize;
          ptVar10 = (tagWNDCLASSEXA *)&ptVar10->style;
          pWVar11 = (WNDCLASSEXA *)&pWVar11->style;
        }
        param_2[1].style = (UINT)param_2->lpfnWndProc;
        param_2->lpszClassName = pCVar4;
        param_2->lpfnWndProc = pWVar3;
      }
      param_2->hInstance = pHVar2;
      param_2->style = param_2->style & 0xffffbfff;
      if (param_2->lpszClassName == (LPCSTR)0x0) {
        pCVar1 = (LPSTR)((int)&param_2[1].cbWndExtra + 2);
        wsprintfA(pCVar1,"ATL:%8.8X",param_2);
        param_2->lpszClassName = pCVar1;
      }
      pCVar4 = param_2->lpszClassName;
      pHVar2 = param_2->hInstance;
      pWVar11 = param_2;
      ptVar10 = &local_30;
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        ptVar10->cbSize = pWVar11->cbSize;
        pWVar11 = (WNDCLASSEXA *)&pWVar11->style;
        ptVar10 = (tagWNDCLASSEXA *)&ptVar10->style;
      }
      BVar7 = GetClassInfoExA(pHVar2,pCVar4,&local_30);
      *(short *)&param_2[1].cbWndExtra = (short)BVar7;
      if ((short)BVar7 == 0) {
        AVar6 = RegisterClassExA(param_2);
        *(ATOM *)&param_2[1].cbWndExtra = AVar6;
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  UVar5 = param_2[1].cbSize;
  if (UVar5 != 0) {
    *param_3 = param_2[1].style;
  }
  return CONCAT22((short)(UVar5 >> 0x10),(short)param_2[1].cbWndExtra);
}


