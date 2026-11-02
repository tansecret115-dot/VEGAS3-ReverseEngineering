/* Module: vegas30.exe
   Function: FUN_00554de0
   Address: 00554de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00554de0(HWND param_1,int *param_2)

{
  int iVar1;
  HWND hWnd;
  HRESULT HVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  ULARGE_INTEGER *unaff_EDI;
  undefined4 uVar6;
  undefined4 *puVar7;
  UINT Msg;
  WPARAM wParam;
  LPCSTR lpString2;
  HWND lParam;
  IStream *local_778;
  IStream *pIStack_774;
  undefined4 local_770;
  undefined4 local_76c [65];
  undefined4 local_668;
  undefined1 auStack_664 [4];
  undefined4 uStack_660;
  uchar auStack_65c [268];
  uint uStack_550;
  undefined4 uStack_53c;
  uint auStack_538 [255];
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  CHAR local_104 [260];
  
  _mbscpy((uchar *)local_76c,(uchar *)(*param_2 + 0x101c));
  uVar6 = 1;
  lpString2 = "\\";
  iVar1 = lstrlenA((LPCSTR)local_76c);
  iVar1 = lstrcmpA((LPCSTR)((int)local_76c + iVar1 + -1),lpString2);
  if (iVar1 == 0) {
    _SfGetRootPathFromFilePath_12(local_76c,local_104,0x104);
    iVar1 = lstrcmpA((LPCSTR)local_76c,local_104);
    if (iVar1 == 0) {
      _mbscat((uchar *)local_76c,"*.*");
      uVar6 = 0;
    }
    else {
      iVar1 = lstrlenA((LPCSTR)local_76c);
      *(undefined1 *)((int)local_76c + iVar1 + -1) = 0;
    }
  }
  iVar1 = FUN_00553120(local_76c,uVar6);
  if (iVar1 == 0) {
    wParam = 0;
    Msg = 0x465;
    lParam = param_1;
    hWnd = GetParent(param_1);
    SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
    iVar1 = *param_2 + 0x101c;
    uVar6 = _SfGetString_8(DAT_00647204,0xbc);
    SfMsgBox(param_1,0x40,uVar6,iVar1);
    SetWindowLongA(param_1,0,2);
  }
  if ((param_2[0x19] != 0) && (param_2[3] == 0)) {
    FUN_004f19e0(*param_2);
    FUN_004f1ae0(*param_2,param_2[1]);
    param_2[3] = 1;
    FUN_00553e70(param_1,param_2);
  }
  uVar6 = DAT_0064b138;
  if ((param_2[0x1b] != 0) || (param_2[0x1c] != 0)) {
    puVar7 = &local_668;
    for (iVar1 = 0x159; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_770 = DAT_0064b138;
    FUN_005d26e0(DAT_0064b138,&local_668);
    HVar2 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_778);
    if (-1 < HVar2) {
      local_138 = 0xfffffffe;
      iVar1 = FUN_005e7320(local_778,1,0);
      if (-1 < iVar1) {
        puVar7 = &local_668;
        for (iVar1 = 0x159; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        HVar2 = (*local_778->lpVtbl->Seek)(local_778,(LARGE_INTEGER)0x0,0,unaff_EDI);
        if (-1 < HVar2) {
          FUN_005e79b0(pIStack_774,1,auStack_664);
        }
        uStack_134 = 0;
      }
      (*pIStack_774->lpVtbl->Release)(pIStack_774);
    }
    piVar3 = (int *)FUN_00553430(param_1);
    local_770 = 1;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x18))(piVar3,&local_770,0);
    }
    FUN_00553590(param_1,0);
    if (param_2[0x1b] != 0) {
      uStack_660 = *(undefined4 *)(*param_2 + 0x2eec);
      _mbscpy(auStack_65c,(uchar *)(*param_2 + 0x2ef0));
      iVar1 = *param_2;
      uStack_53c = *(undefined4 *)(iVar1 + 0x3284);
      uVar5 = 1;
      if (1 < uStack_550) {
        puVar4 = auStack_538;
        do {
          if (((*puVar4 & 0x80000000) == 0) && (local_770 != 1)) {
            *puVar4 = *(uint *)(iVar1 + 0x3284);
          }
          else {
            *puVar4 = 0x80000000;
          }
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 1;
          uVar6 = local_76c[0];
        } while (uVar5 < uStack_550);
      }
      uStack_13c = *(undefined4 *)(iVar1 + 0x3284);
    }
    FUN_005d2700(uVar6,auStack_664,1,param_2[0x1c]);
    FUN_005733a0();
    FUN_005749b0();
    FUN_00553500(param_1,0);
  }
  param_2[0x19] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}


