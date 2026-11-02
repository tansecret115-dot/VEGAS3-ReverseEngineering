/* Module: encn3260.dll
   Function: FUN_664ae490
   Address: 664ae490
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664ae490(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 8);
  piVar2 = *(int **)(param_1 + 0xd);
  bVar3 = bVar1 & 0xfd;
  *(byte *)(param_1 + 8) = bVar3;
  if ((piVar2 != (int *)0x0) && ((bVar1 & 1) == 0)) {
    *(byte *)(param_1 + 8) = bVar3 | 1;
    uVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,param_1,0);
    *(undefined4 *)(param_1 + 9) = uVar4;
  }
  return;
}


