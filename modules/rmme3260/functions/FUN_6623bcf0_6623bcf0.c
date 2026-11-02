/* Module: rmme3260.dll
   Function: FUN_6623bcf0
   Address: 6623bcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623bcf0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    return 0x80040009;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2);
    if (iVar1 != 0) {
      uVar2 = 0x46000000;
      if (*(int *)(param_1 + 0xe0) != 0) {
        uVar2 = 0x56000000;
      }
      (**(code **)(*(int *)(param_1 + 8) + 0x14))
                (param_1 + 8,*(undefined4 *)(param_1 + 0x110),uVar2);
    }
  }
  *(int **)(param_1 + 0x60) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)(**(int **)(param_1 + 0x60) + 0xc))(*(int **)(param_1 + 0x60),param_1);
  if (*(int *)(param_1 + 0x1d4) != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x144);
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 1;
    local_1c = 0x4001;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    (**(code **)(**(int **)(param_1 + 0x60) + 0x14))(*(int **)(param_1 + 0x60),&local_1c);
  }
  return 0;
}


