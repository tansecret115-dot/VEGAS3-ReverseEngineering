/* Module: vegas30.exe
   Function: FUN_004c4e10
   Address: 004c4e10
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU FUN_004c4e10(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  EMIXERTYPE EVar4;
  HMENU hMenu;
  UINT_PTR UVar5;
  uint local_5c;
  int local_58;
  int local_54;
  CHAR local_50 [80];
  
  uVar2 = Mixer_NumBusTypePorts(4);
  if (uVar2 < 0x20) {
    local_54 = Mixer_NumBusTypePorts(4);
  }
  else {
    local_54 = 0x20;
  }
  lVar3 = Mixer_NumBusTypePorts(1);
  if (lVar3 - 1U < 0x1a) {
    lVar3 = Mixer_NumBusTypePorts(1);
    local_58 = lVar3 + -1;
  }
  else {
    local_58 = 0x1a;
  }
  EVar4 = Mixer_GetMixerType((ISFMixer *)0x0);
  if (EVar4 != 1) {
    local_58 = 0;
  }
  hMenu = CreatePopupMenu();
  if (hMenu == (HMENU)0x0) {
    return (HMENU)0x0;
  }
  if (param_3 != 0) {
    FUN_004c4b90(param_2,2,local_50);
    AppendMenuA(hMenu,0,0x1c75,local_50);
  }
  local_5c = (uint)(param_3 != 0);
  if (0 < local_54) {
    local_5c = local_5c + local_54;
    UVar5 = 0x1e73;
    do {
      FUN_004c4b90(param_2,UVar5 - 0x1c73,local_50);
      AppendMenuA(hMenu,0,UVar5,local_50);
      iVar1 = UVar5 - 0x1e72;
      UVar5 = UVar5 + 1;
    } while (iVar1 < local_54);
  }
  if (0 < local_58) {
    local_5c = local_5c + local_58;
    UVar5 = 0x1d73;
    do {
      FUN_004c4b90(param_2,UVar5 - 0x1c73,local_50);
      AppendMenuA(hMenu,0,UVar5,local_50);
      iVar1 = UVar5 - 0x1d72;
      UVar5 = UVar5 + 1;
    } while (iVar1 < local_58);
  }
  CheckMenuRadioItem(hMenu,0x1c73,0x205b,*(int *)(*(int *)(param_1 + 0x5d0) + 8) + 0x1c73,0);
  if (local_5c == 0) {
    DestroyMenu(hMenu);
    hMenu = (HMENU)0x0;
  }
  return hMenu;
}


