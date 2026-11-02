/* Module: aviplug.dll
   Function: FUN_5f962180
   Address: 5f962180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f962180(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      FUN_5f9796e0(*(int **)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (*(LPVOID *)(param_1 + 0x74) != (LPVOID)0x0) {
      VirtualFree(*(LPVOID *)(param_1 + 0x74),0,0x8000);
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    if (*(LPCVOID *)(param_1 + 0xc) != (LPCVOID)0x0) {
      FUN_5f94cd80(*(LPCVOID *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    puVar2 = (undefined4 *)(param_1 + 0x10);
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  return;
}


