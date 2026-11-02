/* Module: sftrans1.dll
   Function: FUN_004886e0
   Address: 004886e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004886e0(int param_1,HWND param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  HFONT pHVar3;
  undefined4 uVar4;
  int iVar5;
  WNDPROC *ppWVar6;
  tagWNDCLASSA local_28;
  
  if (param_2 != (HWND)0x0) {
    BVar1 = IsWindow(param_2);
    if (BVar1 != 0) {
      *(HWND *)(param_1 + 4) = param_2;
      SetWindowLongA(param_2,0,param_1);
      FUN_004dd740(param_1 + 0xa4,4,4,10,0,0,0,0);
      FUN_004dd740(param_1 + 0xa8,4,4,10,0,0,0,0);
      FUN_004dd740(param_1 + 0xac,4,4,10,0,0,0,0);
      FUN_004dd740(param_1 + 0xb0,4,4,10,0,0,0,0);
      DVar2 = GetSysColor(5);
      *(DWORD *)(param_1 + 8) = DVar2;
      DVar2 = GetSysColor(8);
      *(DWORD *)(param_1 + 0xc) = DVar2;
      DVar2 = GetSysColor(0x16);
      *(DWORD *)(param_1 + 0x10) = DVar2;
      DVar2 = GetSysColor(0xd);
      *(DWORD *)(param_1 + 0x14) = DVar2;
      *(undefined **)(param_1 + 0x18) = &DAT_00606060;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      pHVar3 = CreateFontA(8,0,0,0,400,0,0,0,1,0,0,0,0,"MS Sans Serif");
      *(HFONT *)(param_1 + 0x20) = pHVar3;
      pHVar3 = CreateFontA(8,0,0,0,700,0,0,0,1,0,0,0,0,"MS Sans Serif");
      *(HFONT *)(param_1 + 0x24) = pHVar3;
      pHVar3 = CreateFontA(8,0,0,0,700,1,0,0,1,0,0,0,0,"MS Sans Serif");
      *(HFONT *)(param_1 + 0x28) = pHVar3;
      FUN_00486640(0,"Header",1,0x6d6,0,&DAT_00563480,0);
      FUN_00486640(1,"Single Item",1,0x6d7,0,&DAT_00563474,0);
      FUN_00486640(2,"Dual Item",2,0x6d8,0,&DAT_00563464,0);
      FUN_00488ba0();
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
      FUN_00486c30(0,1,0xffffffff,0,0);
      FUN_0048c830(0,1,1);
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
      uVar4 = FUN_004c8cf0(DAT_00577248,0xed);
      *(undefined4 *)(param_1 + 300) = uVar4;
      local_28.style = 0;
      ppWVar6 = &local_28.lpfnWndProc;
      for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppWVar6 = (WNDPROC)0x0;
        ppWVar6 = ppWVar6 + 1;
      }
      BVar1 = GetClassInfoA(DAT_0057b880,"SFCTEC_STYLES",&local_28);
      if (BVar1 == 0) {
        local_28.style = 0;
        local_28.lpfnWndProc = (WNDPROC)&LAB_004870c0;
        local_28.cbClsExtra = 0;
        local_28.cbWndExtra = 0;
        local_28.hInstance = DAT_0057b880;
        local_28.hIcon = (HICON)0x0;
        local_28.hCursor = (HCURSOR)FUN_004c93c0(0,0x7f00);
        local_28.hbrBackground = (HBRUSH)0x10;
        local_28.lpszMenuName = (LPCSTR)0x0;
        local_28.lpszClassName = "SFCTEC_STYLES";
        FUN_004caa80(&local_28);
      }
      return 0;
    }
  }
  return 0xffffffff;
}


