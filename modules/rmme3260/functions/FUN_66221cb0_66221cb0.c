/* Module: rmme3260.dll
   Function: FUN_66221cb0
   Address: 66221cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66221d17) */

uint __thiscall FUN_66221cb0(void *this,undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar4 = param_1;
  if (*(int *)((int)this + 0x1aa) != 0) {
    *param_2 = 0;
    *(undefined2 *)(param_1 + 1) = 1;
    *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)this + 0x1c8);
    *(undefined2 *)(param_1 + 2) = 1;
    *param_1 = 0xffffffff;
    piVar1 = *(int **)((int)this + 0x1aa);
    param_1 = (undefined4 *)0xa;
    iVar2 = piVar1[5];
    if ((uint)piVar1[6] < iVar2 + 10U) {
      puVar5 = (undefined1 *)(**(code **)(*piVar1 + 0x24))(&param_1);
    }
    else {
      *(int *)(piVar1[8] + 0x14) = *(int *)(piVar1[8] + 0x14) + 1;
      puVar5 = (undefined1 *)piVar1[5];
      piVar1[5] = iVar2 + 10U;
    }
    if (puVar5 != (undefined1 *)0x0) {
      if (param_1 == (undefined4 *)0xa) {
        *puVar4 = CONCAT22(CONCAT11(*puVar5,puVar5[1]),CONCAT11(puVar5[2],puVar5[3]));
        puVar6 = puVar5 + 8;
        *param_2 = (uint)CONCAT11(*puVar6,puVar5[9]);
        piVar1 = *(int **)((int)this + 0x1aa);
        if (puVar6 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)(piVar1[8] + 0xc);
          if ((puVar5 == puVar6) || ((puVar5 < puVar6 && (puVar6 < (undefined1 *)piVar1[6])))) {
            piVar1 = (int *)(piVar1[8] + 0x14);
            *piVar1 = *piVar1 + -1;
          }
          else {
            (**(code **)(*piVar1 + 0x28))(puVar6);
          }
        }
        piVar1 = *(int **)((int)this + 0x1aa);
        param_1 = (undefined4 *)*param_2;
        if ((int)param_1 < 0) {
          piVar1[0x10] = 0x16;
          uVar7 = 0;
        }
        else {
          iVar2 = piVar1[5];
          if ((uint)piVar1[6] < (uint)((int)param_1 + iVar2)) {
            uVar7 = (**(code **)(*piVar1 + 0x24))(&param_1);
          }
          else {
            *(int *)(piVar1[8] + 0x14) = *(int *)(piVar1[8] + 0x14) + 1;
            if (param_1 == (undefined4 *)0x0) {
              uVar7 = *(uint *)(piVar1[8] + 0xc);
            }
            else {
              uVar7 = piVar1[5];
              piVar1[5] = (int)param_1 + iVar2;
            }
          }
        }
        if (uVar7 != 0) {
          if (param_1 == (undefined4 *)*param_2) {
            FUN_66250fc0((void *)((int)this + 0x18e),uVar7,*(int *)((int)this + 0x1aa));
            uVar3 = *puVar4;
            *(short *)((int)this + 0x1c8) = *(short *)((int)this + 0x1c8) + 1;
            *(undefined4 *)((int)this + 0x1c4) = uVar3;
            return uVar7;
          }
          if (uVar7 != 0) {
            piVar1 = *(int **)((int)this + 0x1aa);
            iVar2 = piVar1[8];
            if ((*(uint *)(iVar2 + 0xc) != uVar7) &&
               ((uVar7 <= *(uint *)(iVar2 + 0xc) || ((uint)piVar1[6] <= uVar7)))) {
              (**(code **)(*piVar1 + 0x28))(uVar7);
              return 0;
            }
            *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
            return 0;
          }
        }
      }
      else if (puVar5 != (undefined1 *)0x0) {
        piVar1 = *(int **)((int)this + 0x1aa);
        puVar6 = *(undefined1 **)(piVar1[8] + 0xc);
        if ((puVar6 != puVar5) && ((puVar5 <= puVar6 || ((undefined1 *)piVar1[6] <= puVar5)))) {
          (**(code **)(*piVar1 + 0x28))(puVar5);
          return 0;
        }
        piVar1 = (int *)(piVar1[8] + 0x14);
        *piVar1 = *piVar1 + -1;
      }
    }
  }
  return 0;
}


