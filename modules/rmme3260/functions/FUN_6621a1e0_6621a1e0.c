/* Module: rmme3260.dll
   Function: FUN_6621a1e0
   Address: 6621a1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6621a1e0(int param_1)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 0x4c) = **(undefined4 **)(param_1 + 0x18);
    puVar4 = operator_new(0x28);
    if (puVar4 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_662522d0(puVar4);
    }
    (**(code **)(*piVar5 + 4))(piVar5);
    (**(code **)(*piVar5 + 0x14))(piVar5,0x14);
    puVar6 = (undefined1 *)(**(code **)(*piVar5 + 0x1c))(piVar5);
    *puVar6 = (char)((uint)*(undefined4 *)(param_1 + 4) >> 0x18);
    puVar6[1] = (char)((uint)*(undefined4 *)(param_1 + 4) >> 0x10);
    puVar6[2] = (char)((uint)*(undefined4 *)(param_1 + 4) >> 8);
    puVar6[3] = *(undefined1 *)(param_1 + 4);
    puVar6[4] = (char)((uint)*(undefined4 *)(param_1 + 8) >> 0x18);
    puVar6[5] = (char)((uint)*(undefined4 *)(param_1 + 8) >> 0x10);
    puVar6[6] = (char)((uint)*(undefined4 *)(param_1 + 8) >> 8);
    puVar6[7] = *(undefined1 *)(param_1 + 8);
    puVar6[8] = *(undefined1 *)(param_1 + 0xd);
    puVar6[9] = *(undefined1 *)(param_1 + 0xc);
    puVar7 = puVar6 + 10;
    if (*(short *)(param_1 + 0xc) == 0) {
      *puVar7 = (char)((uint)*(undefined4 *)(param_1 + 0xe) >> 0x18);
      puVar6[0xb] = (char)((uint)*(undefined4 *)(param_1 + 0xe) >> 0x10);
      puVar6[0xc] = (char)((uint)*(undefined4 *)(param_1 + 0xe) >> 8);
      puVar6[0xd] = *(undefined1 *)(param_1 + 0xe);
      puVar6[0xe] = *(undefined1 *)(param_1 + 0x13);
      puVar6[0xf] = *(undefined1 *)(param_1 + 0x12);
      puVar6[0x10] = (char)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x18);
      puVar6[0x11] = (char)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x10);
      puVar6[0x12] = (char)((uint)*(undefined4 *)(param_1 + 0x14) >> 8);
      puVar6[0x13] = *(undefined1 *)(param_1 + 0x14);
      puVar7 = puVar6 + 0x14;
    }
    *(undefined1 **)(param_1 + 0x50) = puVar7 + (*(int *)(param_1 + 0x50) - (int)puVar6);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
  }
  else if (iVar2 == 2) {
    uVar3 = *(uint *)(param_1 + 0x38) & 0x3f;
    if (uVar3 == 0) {
      *(undefined4 *)(param_1 + 0x4c) =
           *(undefined4 *)(*(int *)(param_1 + 0x18) + (*(uint *)(param_1 + 0x38) >> 6) * 4);
    }
    psVar1 = (short *)(*(int *)(param_1 + 0x4c) + uVar3 * 0xe);
    puVar4 = operator_new(0x28);
    if (puVar4 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_662522d0(puVar4);
    }
    (**(code **)(*piVar5 + 4))(piVar5);
    (**(code **)(*piVar5 + 0x14))(piVar5,0xe);
    puVar6 = (undefined1 *)(**(code **)(*piVar5 + 0x1c))(piVar5);
    *puVar6 = *(undefined1 *)((int)psVar1 + 1);
    puVar6[1] = (char)*psVar1;
    puVar7 = puVar6 + 2;
    if (*psVar1 == 0) {
      *puVar7 = (char)((uint)*(undefined4 *)(psVar1 + 1) >> 0x18);
      puVar6[3] = (char)((uint)*(undefined4 *)(psVar1 + 1) >> 0x10);
      puVar6[4] = (char)((uint)*(undefined4 *)(psVar1 + 1) >> 8);
      puVar6[5] = (char)psVar1[1];
      puVar6[6] = (char)((uint)*(undefined4 *)(psVar1 + 3) >> 0x18);
      puVar6[7] = (char)((uint)*(undefined4 *)(psVar1 + 3) >> 0x10);
      puVar6[8] = (char)((uint)*(undefined4 *)(psVar1 + 3) >> 8);
      puVar6[9] = (char)psVar1[3];
      puVar6[10] = (char)((uint)*(undefined4 *)(psVar1 + 5) >> 0x18);
      puVar6[0xb] = (char)((uint)*(undefined4 *)(psVar1 + 5) >> 0x10);
      puVar6[0xc] = (char)((uint)*(undefined4 *)(psVar1 + 5) >> 8);
      puVar6[0xd] = (char)psVar1[5];
      puVar7 = puVar6 + 0xe;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (int)puVar7 * 10 + (int)puVar6 * -10;
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
      return 0;
    }
  }
  else if (iVar2 == 3) {
    piVar5 = *(int **)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    FUN_6622b1a0(*(void **)(param_1 + 0x40),-0x7ffbf036,*(int *)(param_1 + 0x50));
    return 0;
  }
  return 0;
}


