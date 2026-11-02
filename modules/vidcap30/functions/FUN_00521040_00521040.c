/* Module: vidcap30.exe
   Function: FUN_00521040
   Address: 00521040
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00521040(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 8), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x2c))
              (piVar2,0xfffffffd,0,iVar1 + 0x4c,0xffffffff,*(undefined4 *)(param_1 + 0x28),param_2);
    piVar2 = *(int **)(*(int *)(param_1 + 0x20) + 8);
    (**(code **)(*piVar2 + 0x2c))
              (piVar2,0xffffffff,0,*(int *)(param_1 + 0x20) + 0x4c,0xffffffff,
               *(undefined4 *)(param_1 + 0x28),param_2);
  }
  return;
}


