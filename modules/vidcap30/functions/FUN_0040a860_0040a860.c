/* Module: vidcap30.exe
   Function: FUN_0040a860
   Address: 0040a860
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040a860(int param_1,HMENU param_2)

{
  int iVar1;
  LPCSTR pCVar2;
  
  iVar1 = GetMenuItemCount(param_2);
  if (iVar1 != 0) {
    AppendMenuA(param_2,0x800,0,(LPCSTR)0x0);
  }
  pCVar2 = (LPCSTR)_SfGetString_8(DAT_005ba2a0,0xb3);
  AppendMenuA(param_2,0,0x404,pCVar2);
  if ((*(byte *)(param_1 + 0xc) & 2) == 0) {
    CheckMenuItem(param_2,0x404,8);
  }
  if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
    pCVar2 = (LPCSTR)_SfGetString_8(DAT_005ba2a0,0xb2);
    AppendMenuA(param_2,0,0x403,pCVar2);
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
      CheckMenuItem(param_2,0x403,8);
    }
  }
  if ((*(byte *)(param_1 + 0xc) & 0x20) != 0) {
    pCVar2 = (LPCSTR)_SfGetString_8(DAT_005ba2a0,0xb5);
    AppendMenuA(param_2,0,0x406,pCVar2);
    if ((*(byte *)(param_1 + 0xc) & 0x10) != 0) {
      CheckMenuItem(param_2,0x406,8);
    }
  }
  return;
}


