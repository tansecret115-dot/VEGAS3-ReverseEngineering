/* Module: sfcdi.dll
   Function: cdr_FillInterfaceList
   Address: 5bf08840
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall cdr_FillInterfaceList(struct HWND__ *,unsigned int,int) */

void cdr_FillInterfaceList(HWND__ *param_1,uint param_2,int param_3)

{
  uchar *lpString;
  int iVar1;
  uint lParam;
  WPARAM WVar2;
  LPSTR lParam_00;
  uint uVar3;
  uchar *_Source;
  uint local_16c;
  WPARAM local_168;
  uchar local_164 [128];
  undefined4 local_e4 [5];
  CHAR local_d0 [80];
  uchar local_80 [128];
  
                    /* 0x8840  169  ?cdr_FillInterfaceList@@YGXPAUHWND__@@IH@Z */
  uVar3 = 0;
  SendMessageA(param_1,0x14b,0,0);
  local_168 = 0;
  if (param_3 == 0) {
    iVar1 = cdr_GetNumInterfaces();
    if (0 < iVar1) {
      do {
        local_e4[0] = 100;
        cdr_GetInterfaceCaps(uVar3,(cdrcaps_tag *)local_e4);
        WVar2 = FUN_5bf087c0(param_1,local_d0);
        SendMessageA(param_1,0x151,WVar2,uVar3);
        if (param_2 == uVar3) {
          local_168 = WVar2 + 1;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar1);
    }
  }
  else {
    local_80[0] = '\0';
    local_16c = 0;
    uVar3 = *DAT_5bf65ff0;
    if (uVar3 != 0) {
      do {
        lpString = *(uchar **)(DAT_5bf65ff0[2] + local_16c * 4);
        iVar1 = lstrlenA((LPCSTR)lpString);
        _Source = lpString;
        if (iVar1 == 0) {
          _Source = "OEM";
        }
        _mbscpy(local_164,_Source);
        _mbscat(local_164," ");
        _mbscat(local_164,lpString + 10);
        iVar1 = lstrcmpA((LPCSTR)local_164,(LPCSTR)local_80);
        if (iVar1 != 0) {
          _mbscpy(local_80,local_164);
          lParam = cdr_FindInterface((char *)(lpString + 0x22));
          WVar2 = FUN_5bf087c0(param_1,(LPCSTR)local_164);
          SendMessageA(param_1,0x151,WVar2,lParam);
          if (param_2 == lParam) {
            local_168 = WVar2 + 1;
          }
        }
        local_16c = local_16c + 1;
      } while (local_16c < uVar3);
    }
  }
  lParam_00 = FUN_5bf283e0(DAT_5bf65fc4,0xd0);
  WVar2 = SendMessageA(param_1,0x14a,0,(LPARAM)lParam_00);
  SendMessageA(param_1,0x151,WVar2,-1);
  if (param_2 == 0xffffffff) {
    local_168 = 0;
  }
  SendMessageA(param_1,0x14e,local_168,0);
  return;
}


