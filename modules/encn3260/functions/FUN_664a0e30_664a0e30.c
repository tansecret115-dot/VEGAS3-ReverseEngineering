/* Module: encn3260.dll
   Function: FUN_664a0e30
   Address: 664a0e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664a0e30(void *param_1)

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
    if (local_c == 0) goto LAB_664a0e59;
    do {
      puVar1 = (undefined4 *)FUN_664bab80(local_c);
      piVar2 = (int *)*puVar1;
LAB_664a0e59:
      this = (void *)FUN_664a4500(param_1,piVar2);
      FUN_664a0ea0(this,*(undefined4 *)((int)param_1 + 0x115),*(undefined4 *)((int)param_1 + 0x119),
                   (int *)0x0);
      FUN_664a0e30(this);
      FUN_664bab40(&local_c);
    } while (local_c != 0);
  }
  return;
}


