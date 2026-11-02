/* Module: wmfplug2.dll
   Function: FUN_0040c840
   Address: 0040c840
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0040c840(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_4;
  
  piVar2 = &local_4;
  piVar3 = *(int **)(param_1 + 0x1c);
  local_4 = 0;
  iVar1 = (**(code **)*piVar3)(piVar3,&DAT_0047acc0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3,&local_4,local_4);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return iVar1;
}


