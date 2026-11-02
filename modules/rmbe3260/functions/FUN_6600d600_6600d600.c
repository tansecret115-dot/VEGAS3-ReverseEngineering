/* Module: rmbe3260.dll
   Function: FUN_6600d600
   Address: 6600d600
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6600d600(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_30 [3];
  int local_24 [3];
  int local_18 [3];
  int *local_c;
  int *local_8;
  
  FUN_6605b7e0(local_18,&DAT_66075004);
  piVar1 = param_1;
  if (param_1[0x13] == 0) {
    FUN_6605b770(local_18);
    return -0x7fffbffb;
  }
  iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  if (-1 < iVar2) {
    param_1 = (int *)-(uint)(piVar1[0x16] != 0);
    FUN_6605b7e0(local_24,&DAT_66075004);
    iVar2 = piVar1[0x16];
    local_8 = (int *)0x0;
    piVar3 = operator_new(iVar2 * 0xc + 4);
    piVar5 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      *piVar3 = iVar2;
      piVar3 = piVar3 + 1;
      piVar5 = piVar3;
      local_c = piVar3;
      if (-1 < iVar2 + -1) {
        do {
          FUN_6605b650(piVar3);
          piVar3 = piVar3 + 3;
          iVar2 = iVar2 + -1;
          piVar5 = local_c;
        } while (iVar2 != 0);
      }
    }
    FUN_6605bba0(local_18,&DAT_6606c404);
    FUN_6605bba0(local_18,s_<____Assign_handle_numbers_to_im_6606c760);
    FUN_6605bba0(local_18,&DAT_6606c404);
    if (param_1 != (int *)0x0) {
      do {
        FUN_6605cd20(piVar1 + 0x14,(int *)&param_1,local_24,&local_8);
        FUN_6605b900(piVar5 + *local_8 * 3 + -3,local_24);
      } while (param_1 != (int *)0x0);
    }
    iVar2 = 0;
    if (0 < piVar1[0x16]) {
      do {
        puVar4 = FUN_6605ba50(local_30,piVar5,&DAT_6606c404);
        FUN_6605bbe0(local_18,puVar4);
        FUN_6605b770(local_30);
        iVar2 = iVar2 + 1;
        piVar5 = piVar5 + 3;
      } while (iVar2 < piVar1[0x16]);
    }
    FUN_6605bba0(local_18,&DAT_6606c404);
    FUN_6605b770(local_24);
    param_1 = (int *)piVar1[0x20];
    FUN_6605bba0(local_18,s_<____These_effects_define_the_ti_6606c71c);
    FUN_6605bba0(local_18,&DAT_6606c404);
    while (param_1 != (int *)0x0) {
      puVar4 = (undefined4 *)FUN_6605c5e0((int *)&param_1);
      puVar4 = FUN_6605bab0(local_30,&DAT_6606c718,(undefined4 *)*puVar4);
      FUN_6605bbe0(local_18,puVar4);
      FUN_6605b770(local_30);
    }
    FUN_6605bba0(local_18,&DAT_6606c404);
    FUN_6605bba0(local_18,s_<_imfl>_6606c710);
    FUN_6605bba0(local_18,&DAT_6606c404);
    (**(code **)(*(int *)piVar1[0x13] + 0x30))(local_18[0],*(undefined4 *)(local_18[0] + -8));
    iVar2 = (**(code **)(*(int *)piVar1[0x13] + 0x18))();
    if (-1 < iVar2) {
      if ((undefined4 *)piVar1[0x13] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar1[0x13])(1);
      }
      piVar1[0x13] = 0;
    }
  }
  FUN_6605b770(local_18);
  return iVar2;
}


