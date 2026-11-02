/* Module: mcplug.dll
   Function: FUN_00406fd0
   Address: 00406fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00406fd0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_4;
  
  piVar2 = &local_4;
  piVar3 = *(int **)(param_1 + 0x18);
  local_4 = 0;
  iVar1 = (**(code **)*piVar3)(piVar3,&DAT_00475cd0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3,&local_4,local_4);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return iVar1;
}


