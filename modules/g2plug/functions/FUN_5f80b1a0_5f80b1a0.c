/* Module: g2plug.dll
   Function: FUN_5f80b1a0
   Address: 5f80b1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_5f80b1a0(int *param_1,int param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_EBX;
  uint *puVar6;
  int unaff_ESI;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  int *piStack_88;
  int *piStack_84;
  int iVar10;
  uint uStack_74;
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  int *local_5c;
  undefined4 local_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_50 = 0;
  local_4c = 0;
  *param_3 = 0;
  param_3[1] = 0;
  piVar1 = DAT_5f87749c;
  if (DAT_5f87749c == (int *)0x0) {
    return 0x80004005;
  }
  local_5c = param_1;
  if (param_1[1] != 100) {
    return 0x80070057;
  }
  if (*param_1 != 0x10) {
    return 0x80070057;
  }
  piStack_84 = (int *)((int)&uStack_70 + 4);
  piStack_88 = (int *)&DAT_5f86a4c0;
  iVar2 = (**(code **)*DAT_5f87749c)();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,&DAT_5f86a4b0,0,&DAT_5f86a4a0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    if (iVar2 == 0) {
      iVar2 = *param_1;
      puVar6 = (uint *)((int)param_1 + iVar2);
      if (param_2 < iVar2) {
        if (&stack0xffffff84 != (undefined1 *)0x0) {
          (**(code **)(unaff_ESI + 8))(&stack0xffffff84);
        }
        return 0x80070057;
      }
      iVar10 = 0;
      while( true ) {
        if (*(int *)(unaff_ESI + 8) <= iVar10) {
          if (&stack0xffffff84 != (undefined1 *)0x0) {
            (**(code **)(unaff_ESI + 8))(&stack0xffffff84);
          }
          uVar9 = ftol();
          uVar5 = *param_3;
          *param_3 = uVar5 - (uint)uVar9;
          param_3[1] = (param_3[1] - (int)((ulonglong)uVar9 >> 0x20)) - (uint)(uVar5 < (uint)uVar9);
          return 0;
        }
        uVar5 = *puVar6;
        if (param_2 < (int)(uVar5 + iVar2)) break;
        puVar7 = puVar6;
        puVar8 = &uStack_60;
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar6 = (uint *)((int)puVar6 + uVar5);
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar8 = (char)*puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        uVar9 = ftol();
        iVar3 = (int)((ulonglong)uVar9 >> 0x20);
        if (((int)param_3[1] <= iVar3) && (((int)param_3[1] < iVar3 || (*param_3 < (uint)uVar9)))) {
          *(undefined8 *)param_3 = uVar9;
        }
        if ((local_4c != 0) &&
           (iVar3 = (**(code **)(unaff_ESI + 0x14))
                              (&stack0xffffff84,uStack_48,uStack_44,&piStack_84), iVar3 == 0)) {
          iVar3 = (**(code **)*piStack_84)(piStack_84,&DAT_5f86a480,&piStack_88);
          if (iVar3 == 0) {
            iVar3 = (**(code **)(*piStack_88 + 0xc))(piStack_88,&uStack_74);
            if (iVar3 == 0) {
              uStack_64 = 0;
              uStack_68 = uStack_74;
              if (uStack_70 < (double)uStack_74) {
                uStack_70 = (double)uStack_74;
              }
            }
            if (piStack_88 != (int *)0x0) {
              (**(code **)(*piStack_88 + 8))(piStack_88);
              piStack_88 = (int *)0x0;
            }
          }
          if (piStack_84 != (int *)0x0) {
            (**(code **)(*piStack_84 + 8))(piStack_84);
            piStack_84 = (int *)0x0;
          }
        }
        iVar10 = iVar10 + 1;
      }
      if (&stack0xffffff84 != (undefined1 *)0x0) {
        (**(code **)(unaff_ESI + 8))(&stack0xffffff84);
      }
      return 0x80070057;
    }
    return 0x80004002;
  }
  return 0x80004002;
}


