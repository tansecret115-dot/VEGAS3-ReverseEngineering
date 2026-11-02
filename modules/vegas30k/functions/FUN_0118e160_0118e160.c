/* Module: vegas30k.dll
   Function: FUN_0118e160
   Address: 0118e160
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0118e160(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = 1;
  if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x38) + param_2;
    *(uint *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x3c) + param_3 + (uint)CARRY4(*(uint *)(param_1 + 0x38),param_2);
    uVar4 = FUN_0118e3a0(param_2,param_3);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    uVar1 = *(uint *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = uVar1 + *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x44) =
         *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x4c) +
         (uint)CARRY4(uVar1,*(uint *)(param_1 + 0x48));
    if (param_4 != 0) {
      FUN_0118e3d0(*(uint *)(param_1 + 0x38) + param_2,
                   *(int *)(param_1 + 0x3c) + param_3 +
                   (uint)CARRY4(*(uint *)(param_1 + 0x38),param_2));
    }
    iVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x48))
                      (*(int **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0xa8));
    if (-1 < iVar3) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x40);
      *(uint *)(param_1 + 0xc) = uVar1 | 0x10;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x44);
      if (*(int *)(param_1 + 0xb4) == 0) {
        uVar2 = *(uint *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = uVar2 + *(uint *)(param_1 + 0x50);
        *(uint *)(param_1 + 0xc) = uVar1 | 0x14;
        *(uint *)(param_1 + 0x5c) =
             *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x54) +
             (uint)CARRY4(uVar2,*(uint *)(param_1 + 0x50));
        iVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x38))(*(int **)(param_1 + 0x18),0,0);
        if (iVar3 < 0) {
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb;
          return iVar3;
        }
      }
      return 0;
    }
  }
  return iVar3;
}


