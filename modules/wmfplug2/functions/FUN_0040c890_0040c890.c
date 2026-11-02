/* Module: wmfplug2.dll
   Function: FUN_0040c890
   Address: 0040c890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_0040c890(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puStack_c = (undefined1 *)&local_8;
  local_4 = 0;
  local_8 = 0;
  piVar2 = *(int **)(param_1 + 0x1c);
  puStack_10 = &DAT_0047acc0;
  iVar1 = (**(code **)*piVar2)();
  if (-1 < iVar1) {
    (**(code **)(*piVar2 + 0xc))(piVar2,&puStack_10);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return puStack_10;
}


