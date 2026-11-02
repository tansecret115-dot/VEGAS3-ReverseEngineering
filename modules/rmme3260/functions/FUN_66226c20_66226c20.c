/* Module: rmme3260.dll
   Function: FUN_66226c20
   Address: 66226c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66226c20(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  int *piVar4;
  undefined4 uStack_b8;
  int local_90 [3];
  int local_84 [3];
  int local_78 [3];
  char *local_6c [3];
  char *local_60 [3];
  char *local_54 [3];
  char *local_48 [3];
  void *local_3c;
  int local_38 [3];
  int local_2c [3];
  int local_20 [3];
  uint local_14;
  int local_10;
  undefined4 local_c;
  void *local_8;
  
  local_10 = 0;
  uStack_b8 = 0x66226c4d;
  local_8 = param_1;
  FUN_66250280(&stack0xffffff50,s_fileinfo_6626f8c8);
  FUN_66225f40(param_1);
  if (local_10 == -1) {
    FUN_66250280(&stack0xffffff54,s_fileinfo_6626f8c8);
    FUN_66250280(&uStack_b8,s_fileinfo_6626f8c8);
    FUN_66226070(param_1);
  }
  local_3c = *(void **)(*(int *)((int)param_1 + 0x26) + local_10 * 4);
  iVar1 = **(int **)((int)param_1 + 0x16);
  iVar2 = (*(int **)((int)param_1 + 0x16))[1];
  qsort(*(void **)((int)param_1 + 0x170),*(size_t *)((int)param_1 + 0x174),0x10,FUN_66228c10);
  FUN_66250280(local_6c,s____Bandwidth_<__lu),_6626f44c);
  FUN_66250280(local_54,s____Bandwidth_>___lu_______Bandwi_6626f420);
  FUN_66250280(local_60,s____Bandwidth_>___lu___6626f408);
  FUN_66250280(local_48,s_Stream_uBandwidth____lu__Stream__6626f894);
  FUN_662500f0(local_2c);
  FUN_662500f0(local_20);
  FUN_662500f0(local_38);
  FUN_662182a0(iVar1);
  uVar3 = FUN_662182a0(iVar2);
  local_c = CONCAT22(extraout_var,uVar3);
  local_14 = 0;
  if (*(int *)((int)param_1 + 0x174) != 0) {
    do {
      if (local_14 == 0) {
        if (*(int *)((int)local_8 + 0x174) != 1) {
          FUN_662508c0(local_2c,local_6c[0]);
          uStack_b8 = 0x66226db5;
          FUN_662508c0(local_20,local_48[0]);
          piVar4 = FUN_662504a0(local_78,local_2c,local_20);
          FUN_662503a0(local_38,piVar4);
          piVar4 = local_78;
          goto LAB_66226ea7;
        }
        uStack_b8 = 0x66226d77;
        FUN_662508c0(local_38,local_48[0]);
      }
      else {
        if (local_14 == *(int *)((int)local_8 + 0x174) - 1U) {
          FUN_662508c0(local_2c,local_60[0]);
          uStack_b8 = 0x66226e20;
          FUN_662508c0(local_20,local_48[0]);
          piVar4 = FUN_662504a0(local_84,local_2c,local_20);
          FUN_662503a0(local_38,piVar4);
          piVar4 = local_84;
        }
        else {
          FUN_662508c0(local_2c,local_54[0]);
          uStack_b8 = 0x66226e7e;
          FUN_662508c0(local_20,local_48[0]);
          piVar4 = FUN_662504a0(local_90,local_2c,local_20);
          FUN_662503a0(local_38,piVar4);
          piVar4 = local_90;
        }
LAB_66226ea7:
        FUN_66250210(piVar4);
      }
      FUN_66250110(&stack0xffffff54,local_38);
      FUN_66219690(local_3c);
      local_14 = local_14 + 1;
    } while (local_14 < *(uint *)((int)local_8 + 0x174));
  }
  FUN_66250210(local_38);
  FUN_66250210(local_20);
  FUN_66250210(local_2c);
  FUN_66250210((int *)local_48);
  FUN_66250210((int *)local_60);
  FUN_66250210((int *)local_54);
  FUN_66250210((int *)local_6c);
  return;
}


