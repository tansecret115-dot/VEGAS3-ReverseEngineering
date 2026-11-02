/* Module: vegas30.exe
   Function: FUN_0057a940
   Address: 0057a940
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0057a940(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_4;
  
  piVar2 = &local_4;
  piVar3 = *(int **)(param_1 + 8);
  iVar1 = 0;
  if (piVar3 != (int *)0x0) {
    local_4 = 0;
    iVar1 = (**(code **)*piVar3)(piVar3,&DAT_0061be98);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*piVar3 + 0xc))(piVar3,&local_4,0,1);
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return iVar1;
}


