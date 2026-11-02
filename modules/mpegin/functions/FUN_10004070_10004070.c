/* Module: mpegin.dll
   Function: FUN_10004070
   Address: 10004070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10004070(int param_1)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 uStack_4;
  
  FUN_10005ce0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),0xfff00000,0xfff00000);
  iVar2 = *(int *)(param_1 + 0x12e54);
  if (*(int *)(iVar2 + 0x240) == 0) {
    while (*(int *)(iVar2 + 0x244) == 0) {
      if (*(int *)(iVar2 + 0x23c) != 0) {
        *(undefined4 *)(iVar2 + 0xf0) = *(undefined4 *)(iVar2 + 0x278);
        *(undefined4 *)(iVar2 + 0xf4) = *(undefined4 *)(iVar2 + 0x27c);
        *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x108) =
             *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x2a0);
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        local_8 = *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 600);
        uStack_4 = *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x25c);
      }
      uVar3 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),0x20);
      iVar4 = FUN_10003e90(param_1,uVar3);
      iVar2 = *(int *)(param_1 + 0x12e54);
      if (iVar4 == 0) {
        *(uint *)(iVar2 + 0x6c) = uVar3;
        iVar2 = *(int *)(param_1 + 0x12e54);
        if (*(int *)(iVar2 + 0x240) != 0) {
          return 1;
        }
        if (*(int *)(iVar2 + 0x244) != 0) {
          return 1;
        }
        if (*(int *)(param_1 + 0x20) == 0) {
          *(uint *)(iVar2 + 0x298) = *(uint *)(iVar2 + 0x220) - 8;
          *(uint *)(iVar2 + 0x29c) = *(int *)(iVar2 + 0x224) - (uint)(*(uint *)(iVar2 + 0x220) < 8);
          return 0;
        }
        dVar1 = (double)CONCAT44(uStack_4,local_8);
        if (dVar1 == *(double *)(iVar2 + 0xd8)) {
          return 0;
        }
        *(double *)(iVar2 + 0xd0) = dVar1;
        *(double *)(*(int *)(param_1 + 0x12e54) + 0xd8) = dVar1;
        return 0;
      }
      if (*(int *)(iVar2 + 0x240) != 0) {
        return 1;
      }
      if (*(int *)(iVar2 + 0x244) != 0) {
        return 1;
      }
      FUN_10005ce0((int *)(iVar2 + 0x200),0xfff00000,0xfff00000);
      iVar2 = *(int *)(param_1 + 0x12e54);
      if (*(int *)(iVar2 + 0x240) != 0) {
        return 1;
      }
    }
  }
  return 1;
}


