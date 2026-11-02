/* Module: sctplug.dll
   Function: FUN_00409050
   Address: 00409050
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00409050(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x214) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x214);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x214) + 8) + iVar3 * 4);
        (**(code **)(*piVar2 + 8))(piVar2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    FUN_0041cad0(*(int **)(param_1 + 0x214));
  }
  return;
}


