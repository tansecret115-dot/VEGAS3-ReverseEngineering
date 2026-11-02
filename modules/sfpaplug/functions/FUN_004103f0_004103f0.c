/* Module: sfpaplug.dll
   Function: FUN_004103f0
   Address: 004103f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_004103f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_4;
  
  piVar2 = &local_4;
  piVar3 = *(int **)(param_1 + 8);
  local_4 = 0;
  iVar1 = (**(code **)*piVar3)(piVar3,&DAT_0044dc80);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3,&local_4,local_4);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return iVar1;
}


