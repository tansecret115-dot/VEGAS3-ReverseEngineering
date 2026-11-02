/* Module: rmme3260.dll
   Function: FUN_66203000
   Address: 66203000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66203000(int param_1,undefined4 *param_2,undefined2 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80070057;
  if (param_2 != (undefined4 *)0x0) {
    FUN_66203080(param_1);
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x38);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x60) = param_3;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined4 *)(param_1 + 0x6e) = 0;
    *(undefined4 *)(param_1 + 0x72) = 0;
    *(undefined4 *)(param_1 + 0x76) = 0;
    *(undefined4 *)(param_1 + 0x7a) = 0;
    *(undefined4 *)(param_1 + 0x7e) = 0;
    *(undefined4 *)(param_1 + 0x82) = 0;
    *(undefined4 *)(param_1 + 0x86) = 0;
    uVar2 = (**(code **)*param_2)(param_2,&DAT_6626a7d8,(undefined4 *)(param_1 + 0x38));
  }
  return uVar2;
}


