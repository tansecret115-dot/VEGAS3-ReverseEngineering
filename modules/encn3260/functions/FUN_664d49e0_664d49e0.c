/* Module: encn3260.dll
   Function: FUN_664d49e0
   Address: 664d49e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664d49e0(void *this,int *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint local_8;
  
  if (*(int **)((int)this + 4) == param_1) {
    puVar1 = *(uint **)((int)this + 0x10);
    if (puVar1 != (uint *)0x0) {
      piVar7 = (int *)*puVar1;
      if (((int *)*piVar7 != (int *)piVar7[1]) || ((int *)piVar7[1] != piVar7)) {
        uVar2 = *puVar1;
        uVar3 = *(undefined4 *)(param_2 + 8);
        uVar8 = *(uint *)(uVar2 + 4);
        local_8 = *(uint *)(*(uint *)(uVar2 + 4) + 4);
        while ((-(uint)(uVar8 != uVar2) & uVar8) != 0) {
          puVar4 = *(undefined4 **)((-(uint)(uVar8 != uVar2) & uVar8) + 8);
          uVar8 = local_8;
          if (param_3 == 0) {
            (**(code **)(*(int *)*puVar4 + 0xc))((int *)*puVar4,uVar3,0,0);
LAB_664d4a90:
            local_8 = *(uint *)(local_8 + 4);
          }
          else if (param_3 == 1) {
            (**(code **)(*(int *)*puVar4 + 0x10))((int *)*puVar4,uVar3,0,0);
            local_8 = *(uint *)(local_8 + 4);
          }
          else {
            if (param_3 != 2) goto LAB_664d4a90;
            (**(code **)(*(int *)*puVar4 + 0x14))((int *)*puVar4,uVar3,0);
            local_8 = *(uint *)(local_8 + 4);
          }
        }
      }
    }
  }
  else {
    piVar7 = (int *)(**(code **)(*param_1 + 0x20))();
    if (piVar7 != (int *)0x0) {
      iVar5 = piVar7[2];
      if ((*piVar7 != 0) && (puVar1 = *(uint **)(*piVar7 + 0x1c), puVar1 != (uint *)0x0)) {
        piVar7 = (int *)*puVar1;
        if (((int *)*piVar7 != (int *)piVar7[1]) || ((int *)piVar7[1] != piVar7)) {
          uVar2 = *puVar1;
          uVar3 = *(undefined4 *)(param_2 + 8);
          uVar8 = *(uint *)(uVar2 + 4);
          while (uVar6 = *(uint *)(uVar8 + 4), (-(uint)(uVar8 != uVar2) & uVar8) != 0) {
            puVar4 = *(undefined4 **)((-(uint)(uVar8 != uVar2) & uVar8) + 8);
            uVar8 = uVar6;
            if (param_3 == 0) {
              (**(code **)(*(int *)*puVar4 + 0xc))((int *)*puVar4,uVar3,0,iVar5);
            }
            else if (param_3 == 1) {
              (**(code **)(*(int *)*puVar4 + 0x10))((int *)*puVar4,uVar3,0,iVar5);
            }
            else if (param_3 == 2) {
              (**(code **)(*(int *)*puVar4 + 0x14))((int *)*puVar4,uVar3,iVar5);
            }
          }
        }
      }
    }
  }
  return;
}


