/* Module: rmme3260.dll
   Function: FUN_66213ca0
   Address: 66213ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66213ca0(void *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int local_8;
  
  local_8 = 0;
  if (*(int *)((int)param_1 + 0x3c0) == 0) {
    *(undefined4 *)((int)param_1 + 0x3c0) = 1;
  }
  switch(*(undefined4 *)((int)param_1 + 0x3c0)) {
  case 1:
    *(undefined2 *)((int)param_1 + 0x3d4) = 0;
    *(undefined2 *)((int)param_1 + 0x3d6) = 0;
    *(undefined4 *)((int)param_1 + 0x3d8) = 0;
    if (*(int *)((int)param_1 + 0x3c8) == 0) {
      FUN_662687f0(*(void **)((int)param_1 + 0x3c4),0x44415441,0);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x3c0) = 3;
      FUN_66213ca0(param_1);
    }
    break;
  case 2:
    FUN_66269060(*(void **)((int)param_1 + 0x3c4),10,1);
    break;
  case 3:
    FUN_662690e0(*(void **)((int)param_1 + 0x3c4),0xc);
    break;
  case 4:
    iVar11 = (**(code **)(**(int **)((int)param_1 + 0x3cc) + 0x1c))(*(int **)((int)param_1 + 0x3cc))
    ;
    uVar1 = *(undefined1 *)(iVar11 + 4);
    uVar2 = *(undefined1 *)(iVar11 + 5);
    iVar11 = (**(code **)(**(int **)((int)param_1 + 0x3cc) + 0x1c))(*(int **)((int)param_1 + 0x3cc))
    ;
    uVar3 = *(undefined1 *)(iVar11 + 2);
    uVar4 = *(undefined1 *)(iVar11 + 3);
    iVar11 = (**(code **)(**(int **)((int)param_1 + 0x3cc) + 0x1c))(*(int **)((int)param_1 + 0x3cc))
    ;
    uVar5 = *(undefined1 *)(iVar11 + 7);
    uVar6 = *(undefined1 *)(iVar11 + 9);
    uVar7 = *(undefined1 *)(iVar11 + 6);
    uVar8 = *(undefined1 *)(iVar11 + 8);
    iVar11 = (**(code **)(**(int **)((int)param_1 + 0x3cc) + 0x1c))(*(int **)((int)param_1 + 0x3cc))
    ;
    *(ushort *)((int)param_1 + 0x3d4) =
         CONCAT11(*(undefined1 *)(iVar11 + 10),*(undefined1 *)(iVar11 + 0xb));
    *(ushort *)((int)param_1 + 0x3d6) = CONCAT11(uVar1,uVar2);
    *(uint *)((int)param_1 + 0x3d8) = CONCAT22(CONCAT11(uVar7,uVar5),CONCAT11(uVar8,uVar6));
    FUN_662690e0(*(void **)((int)param_1 + 0x3c4),CONCAT11(uVar3,uVar4) - 0xc & 0xffff);
    break;
  case 5:
    piVar9 = *(int **)((int)param_1 + 0x3d0);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    piVar10 = *(int **)((int)param_1 + 0x3d0);
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 8))(piVar10);
      *(undefined4 *)((int)param_1 + 0x3d0) = 0;
    }
    *(undefined4 *)((int)param_1 + 0x3c0) = 0;
    FUN_66213e60(param_1,0,piVar9);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))(piVar9);
    }
    break;
  default:
    local_8 = -0x7ffbfff7;
  }
  if (local_8 < 0) {
    *(int *)((int)param_1 + 0x24) = local_8;
    FUN_66213e60(param_1,local_8,(int *)0x0);
  }
  return 0;
}


