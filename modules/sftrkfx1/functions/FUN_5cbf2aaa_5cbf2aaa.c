/* Module: sftrkfx1.dll
   Function: FUN_5cbf2aaa
   Address: 5cbf2aaa
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cbf2aaa(int param_1)

{
  int *piVar1;
  int iVar2;
  
  while (piVar1 = *(int **)(param_1 + 0x28), piVar1 != (int *)0x0) {
    iVar2 = piVar1[7];
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    *(int *)(param_1 + 0x28) = iVar2;
    if (piVar1 == (int *)0x0) break;
    (**(code **)(*piVar1 + 0x54))(1);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(LPVOID *)(param_1 + 0x58) != (LPVOID)0x0) {
    VirtualFree(*(LPVOID *)(param_1 + 0x58),0,0x8000);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}


