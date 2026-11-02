/* Module: rmbe3260.dll
   Function: FUN_660281c0
   Address: 660281c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660281c0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    return 0;
  }
  if ((*(int *)(param_2 + 0x1c) == 0) && (*(int *)(param_2 + 0x18) == 0)) {
    iVar3 = *(int *)(param_2 + 0x14);
    iVar1 = *(int *)((iVar3 + 0xc) * 0x10 + (int)this);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      return 0;
    }
    if (0 < iVar1) {
      do {
        iVar3 = *(int *)(*(int *)(iVar3 * 0x10 + 0xbc + (int)this) + iVar5 * 4);
        uVar2 = *(uint *)(iVar3 + 0x10);
        if (uVar2 == 0xffffff) {
LAB_6602824d:
          *(undefined4 *)(param_2 + 0x3c) = 1;
          *(undefined4 *)(param_1 + 0x14) = 1;
          if ((*(int *)(iVar3 + 4) == 4) || (*(int *)(iVar3 + 4) == 0)) {
            *(undefined4 *)(param_2 + 0x40) = 1;
            break;
          }
        }
        else {
          uVar4 = *(uint *)((int)this + 0x2c);
          if (uVar4 < uVar2) {
            uVar4 = (uVar4 - uVar2) - 1;
          }
          else {
            uVar4 = uVar4 - uVar2;
          }
          if ((uVar2 == 0xffffff) || (*(uint *)(iVar3 + 8) <= uVar4)) goto LAB_6602824d;
        }
        iVar3 = *(int *)(param_2 + 0x14);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((iVar3 + 0xc) * 0x10 + (int)this));
    }
    if (*(int *)(param_2 + 0x3c) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}


