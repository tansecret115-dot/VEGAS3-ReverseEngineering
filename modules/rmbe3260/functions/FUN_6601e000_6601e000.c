/* Module: rmbe3260.dll
   Function: FUN_6601e000
   Address: 6601e000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_6601e000(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5,undefined1 *param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  int local_10;
  int local_c;
  undefined1 local_5;
  
  local_5 = DAT_66075004;
  if (param_5 == (undefined1 *)0x0) {
    param_5 = &local_5;
  }
  if (param_6 == (undefined1 *)0x0) {
    param_6 = &local_5;
  }
  local_c = param_1 + 0x160;
  local_10 = *(int *)(param_1 + 0x164);
  if (local_10 != 0) {
    piVar2 = (int *)0x0;
    if (local_10 == 0) goto LAB_6601e059;
    do {
      puVar1 = (undefined4 *)FUN_6605c600(local_10);
      piVar2 = (int *)*puVar1;
LAB_6601e059:
      if (((*(byte *)(piVar2 + 1) <= (byte)param_2) && ((byte)param_2 <= *(byte *)((int)piVar2 + 5))
          ) && (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0xc))(piVar2,param_2,param_3,param_4,param_5,param_6);
      }
      FUN_6605c5e0(&local_10);
    } while (local_10 != 0);
  }
  return 0;
}


