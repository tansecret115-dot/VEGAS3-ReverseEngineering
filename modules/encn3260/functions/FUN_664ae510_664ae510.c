/* Module: encn3260.dll
   Function: FUN_664ae510
   Address: 664ae510
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664ae510(void *param_1)

{
  int iVar1;
  uint *puVar2;
  uint local_34 [9];
  int local_10;
  int local_c;
  int *local_8;
  
  local_10 = -1;
  local_c = -1;
  puVar2 = local_34;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  (**(code **)((int)param_1 + 0x11))(&local_10,local_34);
  iVar1 = 0;
  if ((-1 < local_10) && (-1 < local_c)) {
    local_8 = (int *)0x0;
    FUN_664ae780(param_1,&local_10,local_34,(int *)&local_8);
    if (local_8 != (int *)0x0) {
      iVar1 = *local_8;
    }
    FUN_664ae590(param_1,&local_10,local_34,iVar1,local_8);
  }
  return;
}


