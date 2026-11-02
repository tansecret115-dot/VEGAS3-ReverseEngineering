/* Module: vidcap30.exe
   Function: FUN_004b8520
   Address: 004b8520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b8520(HWND param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  HWND hWnd;
  uint uVar3;
  DWORD DVar4;
  uchar local_208 [260];
  uchar local_104 [260];
  
  puVar1 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 0x40);
  hWnd = GetParent(param_1);
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 == -0x25d) {
    _SfHelp_ContextHelp_20(0,param_1,*puVar1,1,puVar1[0x43]);
    return 1;
  }
  if (iVar2 == -0x25b) {
    uVar3 = SendMessageA(hWnd,0x465,0x104,(LPARAM)local_208);
    if (((int)uVar3 < 0) || (0x104 < uVar3)) {
      local_104[0] = '\0';
    }
    else {
      DVar4 = GetFileAttributesA((LPCSTR)local_208);
      if ((DVar4 == 0xffffffff) || ((DVar4 & 0x10) == 0)) {
        _SfGetPathNameFromFilePath_12(local_208,local_104,0x104);
      }
      else {
        _mbscpy(local_104,local_208);
      }
    }
    SetDlgItemTextA(hWnd,0x148,(LPCSTR)local_104);
    SfFormatDiskFreeSpace((char *)local_104,(char *)local_208);
    SetDlgItemTextA(param_1,0x14e,(LPCSTR)local_208);
  }
  else if (iVar2 == -0x259) {
    _SfWndCenter_16(hWnd,0,0,0x8001);
    return 0;
  }
  return 0;
}


