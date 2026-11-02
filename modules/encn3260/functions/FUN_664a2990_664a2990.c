/* Module: encn3260.dll
   Function: FUN_664a2990
   Address: 664a2990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664a2a22) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_664a2990(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int Y;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_50 [13];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  piVar2 = param_1;
  param_1[0x2b] = 1;
  local_c = 0;
  local_8 = (int *)0x0;
  if ((*(byte *)((int)param_1 + 0x55) & 2) != 0) {
    if ((*(byte *)(param_1 + 0x15) & 0x20) != 0) {
      FUN_664a2d10((int)(param_1 + -3));
      if ((piVar2[0x10] == 0) && (*(undefined4 **)((int)piVar2 + 0xe1) != (undefined4 *)0x0)) {
        piVar1 = *(int **)((int)piVar2 + 0x101);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x50))(piVar1,**(undefined4 **)((int)piVar2 + 0xe1),8);
          (**(code **)(**(int **)((int)piVar2 + 0x101) + 0x4c))(*(int **)((int)piVar2 + 0x101));
        }
        FUN_664a5100(*(undefined4 **)((int)piVar2 + 0xe1));
      }
      local_c = piVar2[0xc];
      local_8 = piVar2 + 0xb;
      while (local_c != 0) {
        puVar4 = (undefined4 *)FUN_664bab80(local_c);
        param_1 = (int *)0x0;
        iVar3 = (*(code *)**(undefined4 **)*puVar4)((undefined4 *)*puVar4,&DAT_664dce40,&param_1);
        if (iVar3 == 0) {
          (**(code **)(*param_1 + 0x10))(param_1);
        }
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
          param_1 = (int *)0x0;
        }
        FUN_664bab40(&local_c);
      }
      if (piVar2[0x10] == 0) {
        (**(code **)(piVar2[4] + 0xc))(piVar2 + 4,&DAT_664f05c4);
      }
      else {
        piVar1 = piVar2 + -2;
        (**(code **)(piVar2[-2] + 0x2c))(piVar1,&local_1c);
        (**(code **)(*piVar1 + 0x34))(piVar1,&local_14);
        iVar3 = ftol();
        local_1c = iVar3;
        Y = ftol();
        local_18 = Y;
        local_14 = ftol();
        local_10 = ftol();
        MoveWindow(*(HWND *)((int)piVar2 + 0x105),iVar3,Y,local_14,local_10,0);
      }
      *(undefined4 *)((int)piVar2 + 0x109) = 0;
      *(undefined4 *)((int)piVar2 + 0x10d) = 0x3ff00000;
      *(byte *)(piVar2 + 0x15) = *(byte *)(piVar2 + 0x15) & 0xdf;
      puVar4 = (undefined4 *)FUN_6649f610((int)(piVar2 + -3));
      if (puVar4 != (undefined4 *)0x0) {
        piVar1 = (int *)piVar2[0x2d];
        puVar6 = local_50;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        (**(code **)(*piVar1 + 0x18))(piVar1);
        FUN_6649f620(piVar2 + -3,local_50);
        iVar3 = *(int *)piVar2[0x2c];
        uVar5 = FUN_6649f610((int)(piVar2 + -3));
        (**(code **)(iVar3 + 0x10))(piVar2[0x2c],uVar5);
      }
    }
    if (piVar2[0x10] == 0) {
      piVar1 = piVar2 + -3;
      FUN_664a2bd0((int)piVar1);
      FUN_664a1f30((int)piVar1);
      _DAT_664e31e8 = 1;
      FUN_664a21d0(piVar1);
    }
    piVar2[0x2b] = 0;
    *(byte *)(piVar2 + 0x15) = *(byte *)(piVar2 + 0x15) & 0xbf;
    return 0;
  }
  return 0x80004005;
}


