/* Module: vidcap30.exe
   Function: FUN_0045e380
   Address: 0045e380
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045e380(HWND param_1)

{
  bool bVar1;
  HWND hWnd;
  LRESULT LVar2;
  uint uVar3;
  int iVar4;
  UINT UVar5;
  WPARAM wParam;
  char *pcVar6;
  uint local_23c;
  int local_238;
  undefined1 local_230 [8];
  undefined4 local_228;
  undefined1 *local_21c;
  undefined4 local_218;
  undefined1 local_208 [260];
  char local_104 [260];
  
  bVar1 = false;
  local_238 = 0;
  local_23c = 0;
  hWnd = GetDlgItem(param_1,0x4d1);
  _SfErrorHandler_DetailsInit_0();
  LVar2 = SendMessageA(hWnd,0x1004,0,0);
  wParam = 0;
  if (0 < LVar2) {
    do {
      uVar3 = SendMessageA(hWnd,0x102c,wParam,0xf000);
      if (uVar3 >> 0xc != 1) {
        local_238 = local_238 + 1;
        local_21c = local_208;
        local_228 = 0;
        local_218 = 0x104;
        SendMessageA(hWnd,0x102d,wParam,(LPARAM)local_230);
        iVar4 = _SfGetRootPathFromFilePath_12(local_208,local_104,0x104);
        if (iVar4 == 0) {
LAB_0045e4b2:
          pcVar6 = "%s is not a usable path.";
LAB_0045e4b7:
          SfErrorHandler_DetailsAddString(0x80004005,pcVar6,local_208);
          bVar1 = true;
        }
        else {
          UVar5 = GetDriveTypeA(local_104);
          switch(UVar5) {
          case 2:
          case 6:
            SfErrorHandler_DetailsAddString(0x80004005,"%s will have poor performance.",local_208);
            bVar1 = true;
            break;
          case 3:
            break;
          case 4:
            pcVar6 = "%s is a network path and will have poor performance.";
            goto LAB_0045e4b7;
          default:
            goto LAB_0045e4b2;
          }
          if (('@' < local_104[0]) && (local_104[0] < '[')) {
            uVar3 = 1 << (local_104[0] + 0xbfU & 0x1f);
            if ((local_23c & uVar3) != 0) {
              pcVar6 = "%s is on a disk which already has a capture folder.";
              goto LAB_0045e4b7;
            }
            local_23c = local_23c | uVar3;
          }
        }
      }
      wParam = wParam + 1;
    } while ((int)wParam < LVar2);
    if (local_238 != 0) goto LAB_0045e4f5;
  }
  SfErrorHandler_DetailsAddString(0x80004005,"No capture folders were selected.");
  bVar1 = true;
LAB_0045e4f5:
  if (bVar1) {
    _SfErrorHandler_MsgBox_24(param_1,0x31,0x2b,0x4e005,0,1);
  }
  return;
}


