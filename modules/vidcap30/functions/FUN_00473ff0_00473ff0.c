/* Module: vidcap30.exe
   Function: FUN_00473ff0
   Address: 00473ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 * __thiscall FUN_00473ff0(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  double dVar12;
  int *piStack_44;
  undefined1 auStack_34 [48];
  
  piStack_44 = (int *)(param_1 + 0x20);
  puVar2 = (undefined1 *)(**(code **)(*param_2 + 0x1c))(param_2);
  if ((int)puVar2 < 0) {
    return puVar2;
  }
  puVar2 = (undefined1 *)(**(code **)*param_2)(param_2,&DAT_00586040);
  if ((int)puVar2 < 0) {
    return puVar2;
  }
  iVar3 = (**(code **)(*piStack_44 + 0x34))(piStack_44,param_1 + 0x80);
  if (-1 < iVar3) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(param_1 + 0x98);
    uVar6 = *(uint *)(param_3 + 0xc);
    puVar8 = (undefined4 *)*param_4;
    puVar10 = (undefined4 *)(param_1 + 0x98);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
      iVar3 = (*pcRam00000030)(&stack0xffffffc8,&stack0xffffffc4);
      if (iVar3 < 0) goto LAB_0047422b;
      piVar9 = *(int **)(param_3 + 0x10);
      if ((piVar9 == (int *)0x0) || (*piVar9 != 0x40)) {
        puVar8 = (undefined4 *)(param_1 + 0x38);
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0x40;
        *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x54) = 0x3ff00000;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined4 *)(param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x74) = 0;
      }
      else {
        piVar11 = (int *)(param_1 + 0x38);
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar11 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar11 = piVar11 + 1;
        }
        *(int *)(param_1 + 0x38) = 0x40;
      }
      iVar7 = (*pcRam0000000c)(&stack0xffffffc8,&piStack_44);
      if (-1 < iVar7) {
        iVar7 = (**(code **)(*piStack_44 + 0x18))(piStack_44,auStack_34);
        if ((-1 < iVar7) && (*(int *)(param_1 + 0x44) == -1)) {
          *(undefined4 *)(param_1 + 0x44) = 0;
        }
        (*pcRam00000008)(&stack0xffffffc8);
      }
    }
    if (-1 < iVar3) {
      if ((*(uint *)(*(int *)(param_1 + 8) + 0x124) & 0x200) == 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x4c);
        piStack_44 = *(int **)(param_1 + 0x48);
        dVar12 = floor(*(double *)(param_1 + 0x48));
        if (dVar12 == (double)CONCAT44(uVar1,piStack_44)) {
          uVar4 = 7;
          if (_DAT_0058c288 != (double)CONCAT44(uVar1,piStack_44)) {
            uVar4 = 3;
          }
          *(undefined4 *)(*(int *)(param_1 + 8) + 0x108) = uVar4;
        }
        else if (_DAT_0058a508 <= ABS((double)CONCAT44(uVar1,piStack_44) - _DAT_0058a858)) {
          *(undefined4 *)(*(int *)(param_1 + 8) + 0x108) = 1;
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 8) + 0x108) = 8;
        }
      }
      *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfffffffc;
      if (*(int *)(param_1 + 0x88) == 0) {
        *(int **)(param_1 + 0x88) = param_2;
        (**(code **)(*param_2 + 4))(param_2);
      }
    }
  }
LAB_0047422b:
  (*pcRam00000008)(&stack0xffffffc8);
  return &stack0xffffffc8;
}


