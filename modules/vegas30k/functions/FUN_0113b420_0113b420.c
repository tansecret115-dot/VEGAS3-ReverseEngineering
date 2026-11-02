/* Module: vegas30k.dll
   Function: FUN_0113b420
   Address: 0113b420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0113b420(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_01040210(*(int *)(param_1 + 0x11c));
  }
  uVar2 = FUN_010401b0(param_2);
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_01040210(*(int *)(param_1 + 0x120));
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 300) != 0) {
    FUN_01040210(*(int *)(param_1 + 300));
  }
  piVar1 = *(int **)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x138) = param_3;
  (**(code **)(*param_3 + 4))(param_3);
  piVar1 = *(int **)(param_1 + 0x13c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  (**(code **)**(undefined4 **)(param_1 + 0x138))
            (*(undefined4 **)(param_1 + 0x138),&DAT_011ed2d0,param_1 + 0x13c);
  return 1;
}


