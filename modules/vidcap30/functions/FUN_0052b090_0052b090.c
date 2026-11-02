/* Module: vidcap30.exe
   Function: FUN_0052b090
   Address: 0052b090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052b090(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x60) & 4) == 0) {
    FUN_00549540(param_1,"No IDATs written into file");
  }
  if (param_2 != 0) {
    if (((*(uint *)(param_2 + 8) & 0x200) != 0) && ((*(uint *)(param_1 + 100) & 0x10000) == 0)) {
      FUN_0054d7b0(param_1,param_2 + 0x39);
    }
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 0x2d)) {
      iVar4 = 0;
      do {
        iVar1 = iVar4 + *(int *)(param_2 + 0x35);
        iVar2 = *(int *)(iVar4 + *(int *)(param_2 + 0x35));
        if (iVar2 < 0) {
          if (iVar2 == -1) {
            FUN_0054d140(param_1,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                         *(undefined4 *)(iVar1 + 0xc));
            *(undefined4 *)(iVar4 + *(int *)(param_2 + 0x35)) = 0xfffffffd;
          }
        }
        else {
          FUN_0054d1d0(param_1,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                       *(undefined4 *)(iVar1 + 0xc),iVar2);
          *(undefined4 *)(iVar4 + *(int *)(param_2 + 0x35)) = 0xfffffffe;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar3 < *(int *)(param_2 + 0x2d));
    }
  }
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 8;
  FUN_0054c8f0(param_1);
  return;
}


