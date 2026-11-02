/* Module: vidcap30.exe
   Function: FUN_0045d510
   Address: 0045d510
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045d510(HWND param_1,int param_2)

{
  LRESULT LVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  WPARAM wParam;
  int local_238;
  undefined1 local_230 [8];
  undefined4 local_228;
  undefined1 *local_21c;
  undefined4 local_218;
  char local_208 [260];
  undefined1 local_104 [260];
  
  wParam = 0;
  local_238 = 0;
  uVar4 = 0;
  LVar1 = SendMessageA(param_1,0x1004,0,0);
  if (0 < LVar1) {
    do {
      uVar2 = SendMessageA(param_1,0x102c,wParam,0xf000);
      if (uVar2 >> 0xc != 1) {
        local_21c = local_104;
        local_228 = 0;
        local_218 = 0x104;
        SendMessageA(param_1,0x102d,wParam,(LPARAM)local_230);
        uVar2 = _SfGetRootPathFromFilePath_12(local_104,local_208,0x104);
        if ((uVar2 < 0x104) && (uVar2 = 1 << (local_208[0] + 0xbfU & 0x1f), (uVar4 & uVar2) == 0)) {
          uVar4 = uVar4 | uVar2;
          iVar3 = _SfGetDiskFreeSpace_8(local_208,0x100000);
          local_238 = local_238 + (iVar3 - param_2);
        }
      }
      wParam = wParam + 1;
    } while ((int)wParam < LVar1);
  }
  return local_238;
}


