/* Module: mp3rw.dll
   Function: FUN_004863c0
   Address: 004863c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004863c0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = param_1;
  iVar2 = *(int *)(param_1 + 0x19);
  if (param_3 == 0) {
    *(undefined4 *)(**(int **)(param_1 + 0x1d) + 0x14) = 0x27;
    (**(code **)**(undefined4 **)(param_1 + 0x1d))(*(undefined4 **)(param_1 + 0x1d));
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar3 = iVar2 + param_3;
    uVar4 = ((1 << ((byte)param_3 & 0x1f)) - 1U & param_2) << (0x18U - (char)uVar3 & 0x1f) |
            *(uint *)(param_1 + 0x15);
    if (7 < (int)uVar3) {
      param_3 = uVar3 >> 3;
      uVar3 = uVar3 + param_3 * -8;
      do {
        param_1._2_1_ = (char)(uVar4 >> 0x10);
        **(char **)(iVar1 + 0xd) = param_1._2_1_;
        iVar2 = *(int *)(iVar1 + 0x11) + -1;
        *(int *)(iVar1 + 0xd) = *(int *)(iVar1 + 0xd) + 1;
        *(int *)(iVar1 + 0x11) = iVar2;
        if (iVar2 == 0) {
          FUN_00486490(iVar1);
        }
        if (param_1._2_1_ == -1) {
          **(undefined1 **)(iVar1 + 0xd) = 0;
          iVar2 = *(int *)(iVar1 + 0x11) + -1;
          *(int *)(iVar1 + 0xd) = *(int *)(iVar1 + 0xd) + 1;
          *(int *)(iVar1 + 0x11) = iVar2;
          if (iVar2 == 0) {
            FUN_00486490(iVar1);
          }
        }
        uVar4 = uVar4 << 8;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    *(uint *)(iVar1 + 0x15) = uVar4;
    *(uint *)(iVar1 + 0x19) = uVar3;
  }
  return;
}


