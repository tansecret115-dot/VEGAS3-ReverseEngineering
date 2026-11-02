/* Module: rmme3260.dll
   Function: FUN_66236b10
   Address: 66236b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66236b10(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *this;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)param_1 + 0x3c);
  local_8 = (int)param_1 + 0x38;
  if (local_c != 0) {
    piVar2 = (int *)0x0;
    if (local_c == 0) goto LAB_66236b39;
    do {
      puVar1 = (undefined4 *)FUN_66250c10(local_c);
      piVar2 = (int *)*puVar1;
LAB_66236b39:
      this = (void *)FUN_6623a130(param_1,piVar2);
      FUN_66236b80(this,*(undefined4 *)((int)param_1 + 0x115),*(undefined4 *)((int)param_1 + 0x119),
                   (int *)0x0);
      FUN_66236b10(this);
      FUN_66250bf0(&local_c);
    } while (local_c != 0);
  }
  return;
}


