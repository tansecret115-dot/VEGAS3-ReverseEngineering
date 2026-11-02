/* Module: mp3plug.dll
   Function: FUN_5f715ec4
   Address: 5f715ec4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f715ec4(void *this,void *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = 0;
  iVar5 = 0;
  do {
    iVar1 = *(int *)(param_3 + iVar5 * 4);
    *(int *)((int)this + 8) = iVar1;
    if (*(int *)(&DAT_5f7697a4 + iVar1 * 8) == 0) {
      if (iVar3 < *(int *)(param_4 + iVar5 * 4)) {
        do {
          *(undefined4 *)(param_2 + iVar3 * 4) = 0;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_4 + iVar5 * 4));
      }
    }
    else {
      iVar1 = *(int *)(&DAT_5f7697a0 + *(int *)((int)this + 8) * 8);
      *(int *)((int)this + 0x28) = iVar1;
      if (iVar1 == 0) {
        if (iVar3 < *(int *)(param_4 + iVar5 * 4)) {
          do {
            FUN_5f71e000((void *)((int)this + 0xc),param_1);
            uVar4 = *(uint *)((int)this + 0x10) & 0xf;
            uVar6 = (int)*(uint *)((int)this + 0x10) >> 4 & 0xf;
            if (uVar6 != 0) {
              uVar2 = FUN_5f714080(param_1,*(uint *)((int)this + 0x1c));
              *(uint *)((int)this + 0x20) = uVar2;
              if (uVar2 == 1) {
                uVar6 = -uVar6;
              }
            }
            if (uVar4 != 0) {
              uVar2 = FUN_5f714080(param_1,*(uint *)((int)this + 0x1c));
              *(uint *)((int)this + 0x20) = uVar2;
              if (uVar2 == 1) {
                uVar4 = -uVar4;
              }
            }
            *(uint *)(param_2 + iVar3 * 4) = uVar6;
            *(uint *)(param_2 + 4 + iVar3 * 4) = uVar4;
            iVar3 = iVar3 + 2;
          } while (iVar3 < *(int *)(param_4 + iVar5 * 4));
        }
      }
      else if (iVar3 < *(int *)(param_4 + iVar5 * 4)) {
        do {
          FUN_5f71e000((void *)((int)this + 0xc),param_1);
          uVar6 = *(uint *)((int)this + 0x10) & 0xf;
          uVar4 = (int)*(uint *)((int)this + 0x10) >> 4 & 0xf;
          if (uVar4 == 0xf) {
            uVar2 = FUN_5f714080(param_1,*(uint *)((int)this + 0x28));
            uVar4 = uVar2 + 0xf;
            *(uint *)((int)this + 0x2c) = uVar2;
          }
          if (0 < (int)uVar4) {
            uVar2 = FUN_5f714080(param_1,*(uint *)((int)this + 0x1c));
            *(uint *)((int)this + 0x20) = uVar2;
            if (uVar2 == 1) {
              uVar4 = -uVar4;
            }
          }
          if (uVar6 == 0xf) {
            uVar2 = FUN_5f714080(param_1,*(uint *)((int)this + 0x28));
            uVar6 = uVar2 + 0xf;
            *(uint *)((int)this + 0x2c) = uVar2;
          }
          if (0 < (int)uVar6) {
            uVar2 = FUN_5f714080(param_1,*(uint *)((int)this + 0x1c));
            *(uint *)((int)this + 0x20) = uVar2;
            if (uVar2 == 1) {
              uVar6 = -uVar6;
            }
          }
          *(uint *)(param_2 + iVar3 * 4) = uVar4;
          *(uint *)(param_2 + 4 + iVar3 * 4) = uVar6;
          iVar3 = iVar3 + 2;
        } while (iVar3 < *(int *)(param_4 + iVar5 * 4));
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  return *(undefined4 *)(param_4 + 8);
}


