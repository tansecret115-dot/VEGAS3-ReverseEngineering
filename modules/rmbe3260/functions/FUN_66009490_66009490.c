/* Module: rmbe3260.dll
   Function: FUN_66009490
   Address: 66009490
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66009490(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x40))(1);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xd0) + 8))(iVar1 + 0xd0);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xd0) + 8))(iVar1 + 0xd0);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x30);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x30))(piVar2);
    (**(code **)(**(int **)(param_1 + 0x30) + 8))(*(int **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_660518e0((undefined4 *)(param_1 + 0x18));
  return;
}


