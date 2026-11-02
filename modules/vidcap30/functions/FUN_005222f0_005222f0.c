/* Module: vidcap30.exe
   Function: FUN_005222f0
   Address: 005222f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005222f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int local_4;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    local_4 = param_1;
    if (*(int *)(param_1 + 0x20) != 0) {
      piVar2 = (int *)&DAT_005a5b48;
      (**(code **)*piVar1)(piVar1,&DAT_005a5b48,&local_4);
      (**(code **)(*piVar2 + 0x18))();
      (**(code **)(*piVar1 + 0x14))(piVar1);
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),1);
  }
  return;
}


