/* Module: vegas30.exe
   Function: FUN_0054d7a0
   Address: 0054d7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054d7a0(int param_1,int *param_2)

{
  HINSTANCE pHVar1;
  undefined4 uVar2;
  CHAR *pCVar3;
  CHAR local_104 [260];
  
  local_104[0] = '\0';
  _SfGetPathNameFromFilePath_12(*param_2 + 0x170,local_104,0x104);
  pCVar3 = local_104;
  pHVar1 = ShellExecuteA(DAT_00647624,"explore",local_104,(LPCSTR)0x0,(LPCSTR)0x0,10);
  if (pHVar1 < (HINSTANCE)0x21) {
    uVar2 = _SfGetString_8(DAT_00647204,0x6d8a);
    SfMsgBox(*(undefined4 *)(param_1 + 0x8c),0x30,uVar2,pCVar3);
  }
  return;
}


