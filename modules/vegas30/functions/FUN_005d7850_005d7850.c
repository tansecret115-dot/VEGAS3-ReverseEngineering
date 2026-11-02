/* Module: vegas30.exe
   Function: FUN_005d7850
   Address: 005d7850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d7850(HWND param_1,undefined4 param_2)

{
  HWND hWnd;
  WPARAM wParam;
  int iVar1;
  LPCSTR lpString2;
  CHAR *pCVar2;
  undefined4 *puVar3;
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  hWnd = GetDlgItem(param_1,0x435);
  GetWindowTextA(hWnd,local_208,0x104);
  wParam = SendMessageA(hWnd,0x147,0,0);
  puVar3 = &DAT_00646980;
  do {
    FUN_005d7470(puVar3,local_104,0x104);
    iVar1 = lstrcmpA(local_208,local_104);
    if (iVar1 == 0) {
      pCVar2 = local_104;
      goto LAB_005d78f5;
    }
    puVar3 = puVar3 + 10;
  } while ((int)puVar3 < 0x646b60);
  lpString2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x5637);
  iVar1 = lstrcmpA(local_208,lpString2);
  if (iVar1 != 0) {
    iVar1 = FUN_005d7640(wParam - 0xc);
    if (iVar1 < 0) {
      SfMsgBox(param_1,0x30,"Could not delete the \'%s\' template.",local_208);
      return 0;
    }
    SendMessageA(hWnd,0x144,wParam,0);
    SendMessageA(hWnd,0x14e,0,0);
    FUN_005d67b0(param_1,hWnd,param_2,1);
    return 1;
  }
  pCVar2 = local_208;
LAB_005d78f5:
  SfMsgBox(param_1,0x30,"Can\'t delete the built-in \'%s\' template.",pCVar2);
  return 0;
}


