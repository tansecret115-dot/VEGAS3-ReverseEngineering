/* Module: sfcdi.dll
   Function: FUN_5bf15b50
   Address: 5bf15b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf15b50(HWND param_1,int param_2,_sfcdtext *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  WPARAM wParam;
  undefined1 *lParam;
  uint local_338;
  undefined4 local_330;
  WPARAM local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  uchar *local_31c;
  undefined4 local_318;
  undefined4 local_314;
  uint local_310;
  uchar local_308 [40];
  uchar local_2e0 [40];
  undefined1 local_2b8 [8];
  undefined4 local_2b0;
  uchar *local_2a4;
  undefined1 local_290 [8];
  undefined4 local_288;
  LPSTR local_27c;
  uchar local_268 [40];
  undefined1 local_240 [8];
  undefined4 local_238;
  uchar *local_22c;
  undefined1 local_218 [8];
  undefined4 local_210;
  uchar *local_204;
  undefined1 local_1f0 [8];
  undefined4 local_1e8;
  LPSTR local_1dc;
  undefined1 local_1c8 [8];
  undefined4 local_1c0;
  LPSTR local_1b4;
  char local_1a0 [160];
  uchar local_100 [256];
  
  wParam = 0;
  SendMessageA(param_1,0x1009,0,0);
  if (param_2 != 0) {
    uVar1 = FUN_5bf2bb90(param_2);
    local_338 = 0;
    if (uVar1 != 0) {
      do {
        puVar2 = (uint *)FUN_5bf2bbb0(param_2,local_338);
        if ((puVar2[2] & 4) == 0) {
          FUN_5bf2ba80(local_308,puVar2[5],0);
          FUN_5bf2ba80(local_2e0,puVar2[5] + puVar2[6],0);
          FUN_5bf2ba80(local_268,puVar2[6],0);
LAB_5bf15c43:
          if ((param_3 == (_sfcdtext *)0x0) || (iVar3 = cdtext_GetTrackCount(param_3), iVar3 == 0))
          {
            FUN_5bf25750(local_100,(BYTE *)"%02lu");
          }
          else {
            cdtext_GetItemText(param_3,*puVar2,0,local_1a0,0xa0);
            FUN_5bf25750(local_100,(BYTE *)"%02lu %s");
          }
          local_31c = local_100;
          local_330 = 0xd;
          local_328 = 0;
          local_324 = 0;
          local_320 = 0;
          local_318 = 0x104;
          local_314 = 0;
          local_310 = local_338;
          local_32c = wParam;
          SendMessageA(param_1,0x1007,0,(LPARAM)&local_330);
          if ((puVar2[2] & 4) == 0) {
            local_1e8 = 1;
            local_1dc = FUN_5bf283e0(DAT_5bf65fc4,0x912);
            lParam = local_1f0;
          }
          else if (puVar2[3] == 1) {
            local_1c0 = 1;
            local_1b4 = FUN_5bf283e0(DAT_5bf65fc4,0x90d);
            lParam = local_1c8;
          }
          else {
            local_288 = 1;
            local_27c = FUN_5bf283e0(DAT_5bf65fc4,0x913);
            lParam = local_290;
          }
          SendMessageA(param_1,0x102e,wParam,(LPARAM)lParam);
          local_22c = local_308;
          local_238 = 2;
          SendMessageA(param_1,0x102e,wParam,(LPARAM)local_240);
          local_2a4 = local_2e0;
          local_2b0 = 3;
          SendMessageA(param_1,0x102e,wParam,(LPARAM)local_2b8);
          local_204 = local_268;
          local_210 = 4;
          SendMessageA(param_1,0x102e,wParam,(LPARAM)local_218);
          wParam = wParam + 1;
        }
        else if (DAT_5bf76044 != 0) {
          FUN_5bf2b970(local_308,puVar2[5],puVar2[3],2);
          FUN_5bf2b970(local_2e0,puVar2[5] + puVar2[6],puVar2[3],2);
          FUN_5bf2b970(local_268,puVar2[6],puVar2[3],4);
          goto LAB_5bf15c43;
        }
        local_338 = local_338 + 1;
      } while (local_338 < uVar1);
    }
  }
  return;
}


