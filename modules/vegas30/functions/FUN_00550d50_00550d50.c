/* Module: vegas30.exe
   Function: FUN_00550d50
   Address: 00550d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00550d50(HWND param_1,HDROP param_2)

{
  HCURSOR hCursor;
  UINT UVar1;
  UINT UVar2;
  int iVar3;
  undefined4 uVar4;
  UINT iFile;
  int local_114;
  HCURSOR local_110;
  tagPOINT local_10c;
  CHAR local_104 [260];
  
  iFile = 0;
  hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  local_110 = SetCursor(hCursor);
  UVar1 = DragQueryFileA(param_2,0xffffffff,(LPSTR)0x0,0);
  local_114 = 0;
  if (UVar1 != 0) {
    do {
      UVar2 = DragQueryFileA(param_2,iFile,local_104,0x104);
      if (UVar2 != 0) {
        iVar3 = FUN_004ec280(&local_114,local_104,0,0,0,0xffffffff,0xffffffff,0,0xffffffff,0,0,0);
        if (iVar3 < 0) break;
      }
      iFile = iFile + 1;
    } while (iFile < UVar1);
    if (local_114 != 0) {
      DragQueryPoint(param_2,&local_10c);
      ClientToScreen(param_1,&local_10c);
      iVar3 = FUN_0040c3e0(DAT_0064762c,local_114,0xffffffff);
      if (iVar3 == 0) {
        uVar4 = _SfGetString_8(DAT_00647204,0x6d63);
        SfMsgBox(DAT_00647624,0x30,uVar4);
      }
      FUN_0040c570(DAT_0064762c,local_114,local_10c.x,local_10c.y,0);
      FUN_004ec820(local_114);
      local_114 = 0;
    }
  }
  SetCursor(local_110);
  return;
}


