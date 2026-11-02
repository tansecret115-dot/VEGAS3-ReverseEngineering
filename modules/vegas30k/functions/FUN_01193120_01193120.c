/* Module: vegas30k.dll
   Function: FUN_01193120
   Address: 01193120
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_01193120(int param_1)

{
  int *piVar1;
  undefined4 local_4;
  
  piVar1 = (int *)0xffffffff;
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x618) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x618) + 0x28);
    (**(code **)(*piVar1 + 0x8c))(piVar1,0x30,&local_4);
  }
  return piVar1;
}


