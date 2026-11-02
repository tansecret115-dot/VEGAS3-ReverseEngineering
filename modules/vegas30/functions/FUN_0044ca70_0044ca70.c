/* Module: vegas30.exe
   Function: FUN_0044ca70
   Address: 0044ca70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044ca70(LPVOID param_1)

{
  WPARAM wParam;
  BOOL BVar1;
  HWND hWndParent;
  HWND pHVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  tagWNDCLASSA *ptVar6;
  uint *puVar7;
  code *pcVar8;
  uint local_84 [7];
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  tagWNDCLASSA local_28;
  
  wParam = _SfGetUIFont_4(100);
  BVar1 = GetClassInfoA(DAT_006471fc,"Vegas.VFxViewParent",&local_28);
  if (BVar1 == 0) {
    ptVar6 = &local_28;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      ptVar6->style = 0;
      ptVar6 = (tagWNDCLASSA *)&ptVar6->lpfnWndProc;
    }
    local_28.lpfnWndProc = (WNDPROC)&LAB_0044ce70;
    local_28.hInstance = DAT_006471fc;
    local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    local_28.lpszClassName = "Vegas.VFxViewParent";
    local_28.hbrBackground = (HBRUSH)0x0;
    RegisterClassA(&local_28);
  }
  pcVar8 = CreateWindowExA_exref;
  hWndParent = CreateWindowExA(0x10000,"Vegas.VFxViewParent",(LPCSTR)0x0,0x52000000,0,0,0,0,
                               *(HWND *)((int)param_1 + 8),(HMENU)&DAT_00000411,DAT_006471fc,param_1
                              );
  if (hWndParent != (HWND)0x0) {
    *(HWND *)((int)param_1 + 0x84) = hWndParent;
    pHVar2 = CreateWindowExA(0x200,"SonicFoundry_TrackView","",0x50010000,0,0,0,0,hWndParent,
                             (HMENU)&DAT_000003f1,DAT_006471fc,*(LPVOID *)((int)param_1 + 0x80));
    *(HWND *)((int)param_1 + 0x264) = pHVar2;
    DAT_0063de90 = DAT_0063de90 | 4;
    pHVar2 = CreateWindowExA(4,"SfKrn_TabControl_Class",(LPCSTR)0x0,0x50000380,0,0,0,0,hWndParent,
                             (HMENU)&DAT_000003e8,DAT_006471fc,&DAT_0063de88);
    if (pHVar2 != (HWND)0x0) {
      SendMessageA(pHVar2,0x30,wParam,0);
      puVar7 = local_84;
      for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_84[2] = local_84[2] | 6;
      local_84[0] = 0x5c;
      local_84[1] = 0;
      SendMessageA(pHVar2,0x608,0,(LPARAM)local_84);
      pcVar8 = CreateWindowExA_exref;
    }
    *(HWND *)((int)param_1 + 0x144) = pHVar2;
    uVar3 = FUN_004483d0(hWndParent,0x3e9,wParam,2);
    *(undefined4 *)((int)param_1 + 0x1a4) = uVar3;
    uVar3 = FUN_0043bc10(hWndParent,0x3ea,&DAT_00612158,2,0);
    *(undefined4 *)((int)param_1 + 0x1bc) = uVar3;
    *(uint *)((int)param_1 + 0x178) = *(uint *)((int)param_1 + 0x178) | 4;
    local_64 = 0;
    local_60 = 0;
    local_84[3] = 0;
    local_67 = 0x10;
    local_53 = 0x10;
    local_3f = 0x10;
    local_84[4] = 0;
    local_50 = 0;
    local_3c = 0;
    local_84[0] = 7;
    local_84[1] = 0x4c6;
    local_84[2] = 0x1008;
    local_84[5] = 0x62;
    local_84[6] = 0x4b6;
    local_68 = 4;
    local_66 = 0;
    local_65 = 0;
    local_5c = 0x6c;
    local_58 = 0x4b5;
    local_54 = 4;
    local_52 = 0;
    local_51 = 0;
    local_4c = 0;
    local_48 = 9;
    local_44 = 0x4b2;
    local_40 = 4;
    local_3e = 0;
    local_3d = 0;
    local_38 = 0;
    uVar3 = FUN_0043bc10(hWndParent,0x3eb,local_84,4,0);
    *(undefined4 *)((int)param_1 + 0x15c) = uVar3;
    uVar3 = FUN_00444c50(DAT_006471fc,hWndParent,0x40f);
    *(undefined4 *)((int)param_1 + 0x234) = uVar3;
    iVar5 = 2;
    *(uint *)((int)param_1 + 0x160) = *(uint *)((int)param_1 + 0x160) | 4;
    puVar4 = (undefined1 *)((int)param_1 + 0x268);
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 0x104;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(uint *)((int)param_1 + 0xd0) = *(uint *)((int)param_1 + 0xd0) | 4;
    uVar3 = (*pcVar8)(0,"Scrollbar",0,0x50000010,0,0,0,0,hWndParent,0x3f3,DAT_006471fc,0);
    *(undefined4 *)((int)param_1 + 0x24c) = uVar3;
    uVar3 = (*pcVar8)(0x20,"Vegas.Class.VideoFx.Plexi","Plexi",0x40000000,0,0,0,0,hWndParent,0x41c,
                      DAT_006471fc,0);
    *(undefined4 *)((int)param_1 + 0x21c) = uVar3;
    FUN_0044cdc0(param_1);
  }
  return;
}


