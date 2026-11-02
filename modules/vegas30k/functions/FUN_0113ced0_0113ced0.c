/* Module: vegas30k.dll
   Function: FUN_0113ced0
   Address: 0113ced0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __thiscall FUN_0113ced0(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_EBX;
  int *unaff_ESI;
  undefined4 *in_stack_00000020;
  uint uVar6;
  int **ppiStack_54;
  int *piStack_50;
  int **ppiStack_4c;
  undefined1 *puStack_48;
  int *piStack_34;
  undefined4 *puStack_30;
  undefined4 local_20 [2];
  int *apiStack_18 [2];
  int *piStack_10;
  
  puStack_30 = local_20;
  piStack_34 = param_3;
  local_20[0] = 0;
  iVar3 = (**(code **)(*param_3 + 0x28))();
  if (-1 < iVar3) {
    *(undefined4 *)(param_1 + 0x168) = 0;
    puStack_48 = (undefined1 *)0x113cf15;
    iVar3 = (**(code **)(*unaff_ESI + 0xc))();
    while (puStack_48 = &stack0xffffffdc, piStack_34 != (int *)0x0) {
      if (iVar3 < 0) {
        ppiStack_4c = (int **)0x113d1cd;
        (**(code **)(unaff_EBX + 8))();
        return 0;
      }
      puStack_48 = &stack0xffffffd4;
      piStack_50 = (int *)0x113cf32;
      iVar3 = (**(code **)(*piStack_10 + 0x24))();
      if (((iVar3 < 0) || (piStack_34 != (int *)0x1)) || (*(int *)(param_1 + 0x168) != 0)) {
        piStack_50 = apiStack_18[0];
        ppiStack_54 = (int **)0x113cf5a;
        (**(code **)(*apiStack_18[0] + 8))();
      }
      else {
        *(int **)(param_1 + 0x168) = apiStack_18[0];
      }
      piStack_50 = (int *)&stack0xffffffc4;
      ppiStack_54 = apiStack_18;
      iVar3 = (**(code **)(iRam00000001 + 0xc))(1,1);
    }
    ppiStack_4c = (int **)0x113cf7f;
    (**(code **)(unaff_EBX + 8))();
    if (*(int *)(param_1 + 0x168) != 0) {
      piStack_34 = (int *)0x0;
      ppiStack_4c = &piStack_34;
      ppiStack_54 = *(int ***)(*(int *)(param_1 + 0x134) + 8);
      piStack_50 = (int *)0x5;
      (*(code *)(*ppiStack_54)[0x1c])();
      piVar5 = *(int **)(param_1 + 0x168);
      local_20[0] = 0;
      iVar3 = (**(code **)(*piVar5 + 0x30))(piVar5,local_20);
      if ((-1 < iVar3) && (unaff_ESI != (int *)0x0)) {
        iVar3 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,&ppiStack_4c,&stack0xffffffbc);
        if ((-1 < iVar3) && (ppiStack_54 == (int **)0x1)) {
          if (*(int *)(param_1 + 0x11c) != 0) {
            FUN_01040210(*(int *)(param_1 + 0x11c));
          }
          *(int **)(param_1 + 0x11c) = piVar5;
        }
        (**(code **)(unaff_EBX + 8))(&stack0xffffffdc);
        uVar6 = *(uint *)(param_1 + 0x11c);
        iVar3 = (**(code **)(**(int **)(param_1 + 0x168) + 0x2c))(*(int **)(param_1 + 0x168));
        if (iVar3 == 1) {
          if (*(int *)(param_1 + 0x128) == 0) {
            uVar4 = *(undefined4 *)(param_1 + 0x11c);
          }
          else {
            uVar4 = *(undefined4 *)(param_1 + 0x120);
          }
          iVar3 = FUN_0113ca30(uVar4);
          if (iVar3 == 0) {
            return 0;
          }
        }
        if (param_1 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = param_1 + 4;
        }
        iVar3 = (**(code **)(**(int **)(param_1 + 0x168) + 0xc))
                          (*(int **)(param_1 + 0x168),iVar3,*(undefined4 *)(param_1 + 0x11c));
        piStack_34 = (int *)(uint)(-1 < iVar3);
        if (piStack_34 != (int *)0x0) {
          puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x11c) + 0x44);
          if (ppiStack_54 != (int **)0x0) {
            iVar3 = *(int *)(*(int *)(param_1 + 0x164) + 0x120);
            if ((iVar3 == 0) || (*(int *)(iVar3 + 0x44) == 0)) {
              *in_stack_00000020 = *puVar1;
              in_stack_00000020[1] = puVar1[1];
              in_stack_00000020[2] = puVar1[2];
              in_stack_00000020[3] = puVar1[3];
              *(undefined2 *)(in_stack_00000020 + 4) = *(undefined2 *)(puVar1 + 4);
              *(undefined4 *)(param_1 + 0x128) = 0;
            }
            else {
              puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x120) + 0x44);
              *in_stack_00000020 = *puVar1;
              in_stack_00000020[1] = puVar1[1];
              in_stack_00000020[2] = puVar1[2];
              in_stack_00000020[3] = puVar1[3];
              *(undefined2 *)(in_stack_00000020 + 4) = *(undefined2 *)(puVar1 + 4);
            }
          }
          if (*(int *)(param_1 + 0x128) != 0) {
            puVar1 = (undefined4 *)(param_1 + 0x13c);
            iVar3 = *(int *)(*(int *)(param_1 + 0x11c) + 0x44);
            iVar2 = *(int *)(*(int *)(param_1 + 0x120) + 0x44);
            (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,&ppiStack_4c);
            piStack_50 = (int *)((uint)*(ushort *)(iVar2 + 0xc) *
                                ((int)piStack_50 / (int)(uint)*(ushort *)(iVar3 + 0xc)));
            ppiStack_4c = (int **)(uint)*(ushort *)(iVar2 + 0xc);
            puStack_48 = (undefined1 *)0x0;
            piVar5 = (int *)FUN_01135cc0(0,&ppiStack_54);
            (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
            (**(code **)(**(int **)(param_1 + 0x138) + 8))(*(int **)(param_1 + 0x138));
            *(int **)(param_1 + 0x138) = piVar5;
            (**(code **)(*piVar5 + 4))(piVar5);
            (**(code **)**(undefined4 **)(param_1 + 0x138))
                      (*(undefined4 **)(param_1 + 0x138),&DAT_011ed2d0,puVar1);
            (**(code **)(*piVar5 + 8))(piVar5);
            return uVar6;
          }
          return (uint)piStack_34;
        }
        return 0;
      }
    }
  }
  return 0;
}


