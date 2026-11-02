/* Module: wmfplug2.dll
   Function: FUN_0040c4a0
   Address: 0040c4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040c4a0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 local_4;
  
  puVar3 = &local_4;
  piVar2 = *(int **)(param_1 + 0x1c);
  local_4 = 0;
  iVar1 = (**(code **)*piVar2)(piVar2,&DAT_0047acc0,&local_4);
  if (-1 < iVar1) {
    (**(code **)(*piVar2 + 0x24))(piVar2,puVar3);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return;
}


