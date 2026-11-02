/* Module: vegas30k.dll
   Function: FUN_01163970
   Address: 01163970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01163970(int param_1,undefined4 *param_2)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  HGLOBAL hMem;
  LPVOID pvVar5;
  undefined4 uVar6;
  uint uVar7;
  code *pcVar8;
  
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2[1];
  *(undefined4 *)(param_1 + 0x20) = param_2[2];
  *(undefined4 *)(param_1 + 0x24) = param_2[3];
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x1c) / *(uint *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x30) = uVar1;
  uVar1 = (*(uint *)(*(int *)(param_1 + 0x10) + 0x1c) % *(uint *)(param_1 + 0x1c) != 0) + uVar1;
  *(uint *)(param_1 + 0x30) = uVar1;
  pcVar8 = calloc_exref;
  if (1 < uVar1) {
    pvVar2 = calloc(1,uVar1 * 4);
    *(void **)(param_1 + 0x28) = pvVar2;
    pvVar2 = calloc(1,*(int *)(param_1 + 0x30) << 2);
    *(void **)(param_1 + 0x2c) = pvVar2;
    uVar1 = 0;
    uVar7 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      do {
        piVar3 = (int *)(*pcVar8)(1,0x58);
        *piVar3 = **(int **)(param_1 + 0x10) + uVar1;
        piVar3[2] = *(int *)(*(int *)(param_1 + 0x10) + 8);
        uVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0x1c) - uVar1;
        if (*(uint *)(param_1 + 0x1c) <= uVar4) {
          uVar4 = *(uint *)(param_1 + 0x1c);
        }
        piVar3[5] = uVar4;
        piVar3[6] = 0;
        piVar3[0x11] = *(int *)(*(int *)(param_1 + 0x10) + 0x44);
        hMem = GlobalAlloc(0x40,0x34);
        pvVar5 = GlobalLock(hMem);
        if (pvVar5 == (LPVOID)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_011637d0(param_1,piVar3);
        }
        *(undefined4 *)(*(int *)(param_1 + 0x28) + uVar7 * 4) = uVar6;
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + uVar7 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x28) + uVar7 * 4);
        piVar3 = *(int **)(*(int *)(param_1 + 0x2c) + uVar7 * 4);
        (**(code **)(*piVar3 + 4))(piVar3);
        uVar1 = uVar1 + *(int *)(param_1 + 0x1c);
        uVar4 = *(uint *)(*(int *)(param_1 + 0x10) + 0x1c);
        if (uVar4 <= uVar1) {
          uVar1 = uVar4;
        }
        uVar7 = uVar7 + 1;
        pcVar8 = calloc_exref;
      } while (uVar7 < *(uint *)(param_1 + 0x30));
    }
    return 1;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return 0;
}


