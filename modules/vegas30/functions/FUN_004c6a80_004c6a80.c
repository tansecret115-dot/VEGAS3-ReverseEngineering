/* Module: vegas30.exe
   Function: FUN_004c6a80
   Address: 004c6a80
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU FUN_004c6a80(LPCSTR param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  HMENU hMenu;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x5d0);
  hMenu = CreatePopupMenu();
  uVar2 = *(uint *)(iVar1 + 0x44);
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      AppendMenuA(hMenu,(-(uint)(*(uint *)(param_3 + 0x690) % uVar2 != uVar3) & 0xfffffff8) + 8 |
                        0x100,uVar3 + 0x1b73,param_1);
      uVar2 = *(uint *)(iVar1 + 0x44);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return hMenu;
}


