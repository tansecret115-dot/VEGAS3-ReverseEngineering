/* Module: encn3260.dll
   Function: FUN_664ae440
   Address: 664ae440
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664ae440(int param_1)

{
  byte bVar1;
  int *piVar2;
  
  bVar1 = *(byte *)(param_1 + 8);
  piVar2 = *(int **)(param_1 + 0xd);
  *(byte *)(param_1 + 8) = bVar1 | 2;
  if ((piVar2 != (int *)0x0) && ((bVar1 & 1) != 0)) {
    *(byte *)(param_1 + 8) = bVar1 & 0xfe | 2;
    (**(code **)(*piVar2 + 0x14))(piVar2,*(undefined4 *)(param_1 + 9));
    *(undefined4 *)(param_1 + 9) = 0;
  }
  piVar2 = *(int **)(param_1 + 0xd);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  return;
}


