/* Module: wavplug.dll
   Function: FUN_5f38b0d0
   Address: 5f38b0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * __fastcall FUN_5f38b0d0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puStack_c = (undefined1 *)&local_8;
  local_4 = 0;
  local_8 = 0;
  piVar2 = *(int **)(param_1 + 0x18);
  puStack_10 = &DAT_5f3c9c10;
  iVar1 = (**(code **)*piVar2)();
  if (-1 < iVar1) {
    (**(code **)(*piVar2 + 0xc))(piVar2,&puStack_10);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return puStack_10;
}


