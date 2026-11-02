/* Module: oggplug.dll
   Function: FUN_004320d0
   Address: 004320d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_004320d0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = 0;
  piVar1 = (int *)(param_1 + 4);
  iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x68);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_00441d90(piVar1);
  FUN_00441e10(piVar1,0,1);
  if ((*(int *)(param_1 + 0x1c) != 0) && (1 < *(int *)(iVar2 + 8))) {
    uVar5 = 1;
  }
  iVar2 = *(int *)(iVar2 + 0x124 + *(int *)(*(int *)(iVar2 + 0x24 + uVar5 * 4) + 0xc) * 4);
  *(uint *)(param_1 + 0x28) = uVar5;
  FUN_00441e10(piVar1,uVar5,*(int *)(iVar3 + 0x34));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00441e10(piVar1,*(uint *)(param_1 + 0x18),1);
    FUN_00441e10(piVar1,*(uint *)(param_1 + 0x20),1);
  }
  iVar3 = (**(code **)((&PTR_PTR_00452c60)[iVar2] + 0x18))
                    (param_1,*(undefined4 *)(*(int *)(iVar3 + 0x38) + uVar5 * 4));
  if (iVar3 == 0) {
    uVar4 = FUN_00442260((int)piVar1);
    *param_2 = uVar4;
    iVar3 = FUN_00442230(piVar1);
    param_2[1] = iVar3;
    param_2[2] = 0;
    param_2[3] = *(undefined4 *)(param_1 + 0x2c);
    param_2[4] = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = *(undefined4 *)(param_1 + 0x34);
    param_2[6] = *(undefined4 *)(param_1 + 0x38);
    param_2[7] = *(undefined4 *)(param_1 + 0x3c);
    iVar3 = 0;
  }
  return iVar3;
}


