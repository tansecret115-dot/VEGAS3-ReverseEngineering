/* Module: vegas30.exe
   Function: FUN_00439c40
   Address: 00439c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00439c40(int param_1,int param_2)

{
  HMENU hMenu;
  int iVar1;
  uint uVar2;
  
  hMenu = (HMENU)FUN_004047d0(0x83,0);
  if (hMenu != (HMENU)0x0) {
    iVar1 = FUN_0043f250();
    if (iVar1 == 0) {
      EnableMenuItem(hMenu,0x9e77,1);
    }
    iVar1 = DAT_00647808;
    if (DAT_00647808 == 0) {
      CheckMenuRadioItem(hMenu,0x9e66,0x9e77,DAT_0064b110 + 0x9e66,0);
    }
    else {
      EnableMenuItem(hMenu,4,0x401);
    }
    uVar2 = DAT_00647af8 & 0x4000000;
    CheckMenuRadioItem(hMenu,0xc4b8,0xc4b9,~DAT_00647af4 >> 0x1a & 1 | 0xc4b8,0x208);
    CheckMenuRadioItem(hMenu,0xc4ba,0xc4bb,0xc4bb - (uVar2 != 0),0x208);
    CheckMenuRadioItem(hMenu,0x9d9e,0x9da1,iVar1 + 0x9d9e,0);
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 4);
    }
    iVar1 = FUN_00404830(iVar1,hMenu,&stack0x0000000c,2);
    if (iVar1 != 0) {
      FUN_00439b40(param_2,iVar1);
    }
  }
  return;
}


