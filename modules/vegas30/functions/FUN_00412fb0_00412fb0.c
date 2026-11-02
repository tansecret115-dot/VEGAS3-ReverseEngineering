/* Module: vegas30.exe
   Function: FUN_00412fb0
   Address: 00412fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412fb0(int param_1,HMENU param_2)

{
  int iVar1;
  LPCSTR pCVar2;
  
  iVar1 = GetMenuItemCount(param_2);
  if (iVar1 != 0) {
    AppendMenuA(param_2,0x800,0,(LPCSTR)0x0);
  }
  pCVar2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x4f9e);
  AppendMenuA(param_2,0,0x9fce,pCVar2);
  if ((*(byte *)(param_1 + 0xc) & 2) == 0) {
    CheckMenuItem(param_2,0x9fce,8);
  }
  if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
    pCVar2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x4f9f);
    AppendMenuA(param_2,0,0x9fcf,pCVar2);
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
      CheckMenuItem(param_2,0x9fcf,8);
    }
  }
  if ((*(byte *)(param_1 + 0xc) & 0x20) != 0) {
    pCVar2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x4fa0);
    AppendMenuA(param_2,0,0x9fd0,pCVar2);
    if ((*(byte *)(param_1 + 0xc) & 0x10) != 0) {
      CheckMenuItem(param_2,0x9fd0,8);
    }
  }
  return;
}


