/* Module: vegas30.exe
   Function: FUN_00569e00
   Address: 00569e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00569e00(int *param_1)

{
  HMENU hmenu;
  long lVar1;
  int iVar2;
  UINT local_2c;
  UINT local_28;
  uint local_20;
  
  hmenu = (HMENU)FUN_004047d0(0x7f,0);
  local_20 = -(uint)(param_1[0x9e] != 0) & 8;
  local_2c = 0x2c;
  local_28 = 1;
  SetMenuItemInfoA(hmenu,0xa7a8,0,(LPCMENUITEMINFOA)&local_2c);
  lVar1 = Mixer_CanAddFXBus();
  if (lVar1 != 0) {
    local_2c = 0x2c;
    local_28 = 1;
    local_20 = 3;
    SetMenuItemInfoA(hmenu,0x9e97,0,(LPCMENUITEMINFOA)&local_2c);
  }
  iVar2 = FUN_00569ef0();
  if (iVar2 == 0) {
    local_2c = 0x2c;
    local_28 = 1;
    local_20 = 3;
    SetMenuItemInfoA(hmenu,0x9e96,0,(LPCMENUITEMINFOA)&local_2c);
  }
  RemoveMenu(hmenu,0xa7a9,0);
  iVar2 = FUN_00404830(param_1[9],hmenu,param_1 + 0x46,2);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x54))(iVar2,0);
  }
  return;
}


