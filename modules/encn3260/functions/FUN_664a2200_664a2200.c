/* Module: encn3260.dll
   Function: FUN_664a2200
   Address: 664a2200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664a221b) */

void __fastcall FUN_664a2200(void *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)param_1 + 0x3c);
  local_8 = (int)param_1 + 0x38;
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_664bab80(local_c);
    pvVar2 = (void *)FUN_664a4500(param_1,(int *)*puVar1);
    if (pvVar2 != (void *)0x0) {
      *(byte *)((int)pvVar2 + 0xcc) = *(byte *)((int)pvVar2 + 0xcc) & 0xfe ^ 1;
      FUN_664a2200(pvVar2);
    }
    FUN_664bab40(&local_c);
  }
  return;
}


