/* Module: encn3260.dll
   Function: FUN_664bfd30
   Address: 664bfd30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_664bfd30(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 4);
  puVar1 = (undefined4 *)FUN_664bab40(&local_8);
  puVar1 = FUN_664bf7e0((int *)*puVar1);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  while (local_8 != 0) {
    puVar2 = (undefined4 *)FUN_664bab40(&local_8);
    puVar2 = FUN_664bf5e0((int *)*puVar2);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_664bd5f0(puVar1,puVar2,0);
    }
  }
  local_c = 0;
  FUN_664bd740(puVar1,&DAT_664e2f3c,&local_c);
  puVar1[3] = local_c;
  return puVar1;
}


