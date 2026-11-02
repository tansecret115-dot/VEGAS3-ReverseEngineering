/* Module: vidcap30.exe
   Function: FUN_0050f2a0
   Address: 0050f2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050f2a0(uint *param_1,HMENU param_2)

{
  uint uVar1;
  uint *puVar2;
  UINT UVar3;
  int iVar4;
  
  puVar2 = param_1;
  if (((*param_1 & 0x10) == 0) && (UVar3 = GetMenuItemID(param_2,0), UVar3 == 0x9c4b)) {
    RemoveMenu(param_2,0,0x400);
    RemoveMenu(param_2,0,0x400);
  }
  param_1 = &DAT_0059baf8;
  UVar3 = 0x9c41;
  do {
    iVar4 = (int)puVar2[0x1f] / (int)*param_1;
    if (iVar4 < 1) {
      RemoveMenu(param_2,UVar3,0);
    }
    else {
      uVar1 = *param_1;
      if (((iVar4 == 1) && (uVar1 = puVar2[0x1f], puVar2[0x20] == 0)) || (puVar2[0x20] == uVar1)) {
        CheckMenuRadioItem(param_2,0x9c41,0x9c49,UVar3,0);
      }
    }
    param_1 = param_1 + 1;
    uVar1 = UVar3 - 40000;
    UVar3 = UVar3 + 1;
  } while (uVar1 < 8);
  CheckMenuItem(param_2,0x9c4a,*puVar2 >> 7 & 8);
  CheckMenuItem(param_2,0x9c4c,*puVar2 >> 6 & 8);
  CheckMenuItem(param_2,0x9c4d,*puVar2 >> 5 & 8);
  return;
}


