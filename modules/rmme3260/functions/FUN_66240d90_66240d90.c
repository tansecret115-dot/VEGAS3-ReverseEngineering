/* Module: rmme3260.dll
   Function: FUN_66240d90
   Address: 66240d90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_66240d90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(*(int *)((int)this + 0x6c) + 0x1f8) != 0) {
    local_c = 0;
    local_1c = param_2;
    local_18 = param_1;
    local_14 = param_3;
    local_10 = param_4;
    local_8 = 0;
    piVar1 = *(int **)(*(int *)((int)this + 0x6c) + 0x1fc);
    (**(code **)(*piVar1 + 0x14))(piVar1,&local_1c);
  }
  return;
}


