/* Module: vegas30.exe
   Function: FUN_004c5020
   Address: 004c5020
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU FUN_004c5020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HMENU hMenu;
  int iVar1;
  tSFOVERLAY *ptVar2;
  int iVar3;
  UINT check;
  uint uVar4;
  int iVar5;
  UINT flags;
  CHAR local_104 [260];
  
  hMenu = CreatePopupMenu();
  if (hMenu == (HMENU)0x0) {
    return (HMENU)0x0;
  }
  uVar4 = 0;
  do {
    if ((&DAT_00613788)[uVar4] != 0) {
      AppendMenuA(hMenu,0,uVar4 + 0x2134,(&PTR_s__Copy_00613758)[uVar4]);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xc);
  iVar1 = SfOverlay_GetCompositorCount();
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      ptVar2 = SfOverlay_GetCompositor(iVar5);
      iVar3 = (**(code **)(ptVar2 + 8))(local_104,0x104,0);
      if (-1 < iVar3) {
        AppendMenuA(hMenu,0,iVar5 + 0x2166,local_104);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  flags = 0;
  check = FUN_004c4f90(param_3,param_4);
  CheckMenuRadioItem(hMenu,0x2134,0x2197,check,flags);
  return hMenu;
}


