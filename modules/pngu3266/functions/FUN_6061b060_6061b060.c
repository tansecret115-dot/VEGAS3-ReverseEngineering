/* Module: pngu3266.dll
   Function: FUN_6061b060
   Address: 6061b060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6061b060(uint param_1)

{
  byte bVar1;
  DWORD DVar2;
  BOOL BVar3;
  HWND hWnd;
  byte *pbVar4;
  int iVar5;
  DWORD DVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  tagMSG local_34;
  byte local_18 [16];
  DWORD local_8;
  
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[4] = 0;
  local_18[5] = 0;
  local_18[6] = 0;
  local_18[7] = 0;
  local_18[8] = 0;
  local_18[9] = 0;
  local_18[10] = 0;
  local_18[0xb] = 0;
  local_18[0xc] = 0;
  local_18[0xd] = 0;
  local_18[0xe] = 0;
  local_18[0] = DAT_60649ac0;
  local_18[0xf] = 0;
  DVar2 = GetTickCount();
  local_8 = DVar2;
  do {
    BVar3 = PeekMessageA(&local_34,(HWND)0x0,0,0,1);
    if (BVar3 != 0) {
      if (local_34.message == 0x12) {
        PostQuitMessage(0);
        return;
      }
      hWnd = GetActiveWindow();
      local_18[0] = 0;
      GetClassNameA(hWnd,(LPSTR)local_18,0x10);
      pbVar8 = &DAT_6064951c;
      pbVar4 = local_18;
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_6061b0f1:
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_6061b0f6;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_6061b0f1;
        pbVar4 = pbVar4 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_6061b0f6:
      if ((iVar5 != 0) || (BVar3 = IsDialogMessageA(hWnd,&local_34), DVar2 = local_8, BVar3 == 0)) {
        TranslateMessage(&local_34);
        DispatchMessageA(&local_34);
        DVar2 = local_8;
      }
    }
    DVar6 = GetTickCount();
    if (DVar6 < DVar2) {
      uVar7 = (DVar6 - DVar2) - 1;
    }
    else {
      uVar7 = DVar6 - DVar2;
    }
    if (param_1 <= uVar7) {
      return;
    }
  } while( true );
}


