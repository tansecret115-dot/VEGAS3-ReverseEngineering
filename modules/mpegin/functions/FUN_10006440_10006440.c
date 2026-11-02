/* Module: mpegin.dll
   Function: FUN_10006440
   Address: 10006440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10006440(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0xc4) = 0;
  bVar2 = false;
  while( true ) {
    FUN_10005ce0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0xffffff00,0x100);
    if ((!bVar2) && (*(int *)(param_1 + 0xc4) == 0)) {
      iVar1 = *(int *)(param_1 + 0x12e54);
      *(undefined4 *)(iVar1 + 0xf0) = *(undefined4 *)(iVar1 + 0x1a0);
      *(undefined4 *)(iVar1 + 0xf4) = *(undefined4 *)(iVar1 + 0x1a4);
      *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x108) =
           *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x1c8);
    }
    if ((*(int *)(param_1 + 0x20) != 0) &&
       (uVar3 = FUN_100058d0(*(int *)(param_1 + 0x12e54) + 0x128,' '), uVar3 == 0x100)) {
      iVar1 = *(int *)(param_1 + 0x12e54);
      *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar1 + 0x180);
      *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0x184);
      iVar1 = *(int *)(param_1 + 0x12e54);
      if ((*(int *)(iVar1 + 0x180) == *(int *)(iVar1 + 0x178)) &&
         (*(int *)(iVar1 + 0x184) == *(int *)(iVar1 + 0x17c))) {
        *(undefined4 *)(iVar1 + 0x178) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x17c) = 0xffffffff;
      }
    }
    uVar3 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x20);
    iVar1 = *(int *)(param_1 + 0x12e54);
    if ((*(int *)(iVar1 + 0x168) != 0) || (*(int *)(iVar1 + 0x16c) != 0)) break;
    if (uVar3 == 0x100) {
      if ((((param_2 == 0) && (!bVar2)) && (*(int *)(param_1 + 0xc4) == 0)) &&
         (*(int *)(param_1 + 0x20) == 0)) {
        *(uint *)(iVar1 + 0x1c0) = *(uint *)(iVar1 + 0x148) - 8;
        *(uint *)(iVar1 + 0x1c4) = *(int *)(iVar1 + 0x14c) - (uint)(*(uint *)(iVar1 + 0x148) < 8);
      }
      FUN_10006950(param_1);
      if (param_2 == 3) {
        return 0;
      }
      if (param_2 == 0) {
        return 0;
      }
    }
    else if (uVar3 == 0x1b3) {
      if (*(int *)(param_1 + 0x20) == 0) {
        *(uint *)(iVar1 + 0x1c0) = *(uint *)(iVar1 + 0x148) - 8;
        *(uint *)(iVar1 + 0x1c4) = *(int *)(iVar1 + 0x14c) - (uint)(*(uint *)(iVar1 + 0x148) < 8);
      }
      FUN_10006660(param_1);
      *(undefined4 *)(param_1 + 0xc0) = 1;
      bVar2 = true;
      if (param_2 == 1) {
        return 0;
      }
    }
    else if (uVar3 == 0x1b8) {
      if ((!bVar2) && (*(int *)(param_1 + 0x20) == 0)) {
        *(uint *)(iVar1 + 0x1c0) = *(uint *)(iVar1 + 0x148) - 8;
        *(uint *)(iVar1 + 0x1c4) = *(int *)(iVar1 + 0x14c) - (uint)(*(uint *)(iVar1 + 0x148) < 8);
      }
      FUN_10006870(param_1);
      *(undefined4 *)(param_1 + 0xc4) = 1;
      if (param_2 == 2) {
        return 0;
      }
    }
  }
  return 1;
}


