/* Module: sfs4rw.dll
   Function: FUN_0044ca10
   Address: 0044ca10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044ca10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x18) & 4) == 0) {
    FUN_00475ad0(param_1,"No IDATs written into file");
  }
  if (param_2 != 0) {
    if (((*(uint *)(param_2 + 8) & 0x200) != 0) && ((param_1[0x19] & 0x10000U) == 0)) {
      FUN_00479bf0(param_1,(ushort *)(param_2 + 0x39));
    }
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 0x2d)) {
      iVar4 = 0;
      do {
        iVar1 = iVar4 + *(int *)(param_2 + 0x35);
        iVar2 = *(int *)(iVar4 + *(int *)(param_2 + 0x35));
        if (iVar2 < 0) {
          if (iVar2 == -1) {
            FUN_00479580(param_1,*(byte **)(iVar1 + 4),*(byte **)(iVar1 + 8),*(uint *)(iVar1 + 0xc))
            ;
            *(undefined4 *)(iVar4 + *(int *)(param_2 + 0x35)) = 0xfffffffd;
          }
        }
        else {
          FUN_00479610(param_1,*(byte **)(iVar1 + 4),*(byte **)(iVar1 + 8),*(int **)(iVar1 + 0xc),
                       iVar2);
          *(undefined4 *)(iVar4 + *(int *)(param_2 + 0x35)) = 0xfffffffe;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar3 < *(int *)(param_2 + 0x2d));
    }
  }
  param_1[0x18] = param_1[0x18] | 8;
  FUN_00478d30(param_1);
  return;
}


