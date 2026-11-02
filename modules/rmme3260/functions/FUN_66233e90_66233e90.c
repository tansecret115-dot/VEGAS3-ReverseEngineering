/* Module: rmme3260.dll
   Function: FUN_66233e90
   Address: 66233e90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66233ec1) */
/* WARNING: Removing unreachable block (ram,0x66233f06) */

undefined4 FUN_66233e90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  local_8 = param_1 + 0x20;
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 4;
  local_c = *(int *)(param_1 + 0x24);
  while (local_c != 0) {
    piVar1 = (int *)FUN_66250c10(local_c);
    (**(code **)(**(int **)(*piVar1 + 0xc) + 0x28))(*(int **)(*piVar1 + 0xc),param_2,param_3);
    FUN_66250bf0(&local_c);
  }
  local_14 = *(int *)(param_1 + 0x4d);
  local_10 = param_1 + 0x49;
  local_c = 0;
  while (local_14 != 0) {
    puVar2 = (undefined4 *)FUN_66250c10(local_14);
    (**(code **)(*(int *)*puVar2 + 0xc))((int *)*puVar2,&param_2);
    FUN_66250bf0(&local_14);
  }
  return 0;
}


