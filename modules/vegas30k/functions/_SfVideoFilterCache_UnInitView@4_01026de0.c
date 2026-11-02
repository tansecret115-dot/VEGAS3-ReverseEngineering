/* Module: vegas30k.dll
   Function: _SfVideoFilterCache_UnInitView@4
   Address: 01026de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfVideoFilterCache_UnInitView_4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* 0x26de0  1255  _SfVideoFilterCache_UnInitView@4 */
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x1c) != 0) && (*(LPVOID *)(param_1 + 0x20) != (LPVOID)0x0)) {
      CoTaskMemFree(*(LPVOID *)(param_1 + 0x20));
    }
    if (*(LPVOID *)(param_1 + 0x48) != (LPVOID)0x0) {
      CoTaskMemFree(*(LPVOID *)(param_1 + 0x48));
    }
    if (*(LPVOID *)(param_1 + 0x54) != (LPVOID)0x0) {
      CoTaskMemFree(*(LPVOID *)(param_1 + 0x54));
    }
    if (*(LPVOID *)(param_1 + 0x58) != (LPVOID)0x0) {
      CoTaskMemFree(*(LPVOID *)(param_1 + 0x58));
    }
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(piVar1);
      (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),0,0);
      *(undefined4 *)(param_1 + 0x40) = 0;
      (**(code **)(**(int **)(param_1 + 0x3c) + 8))(*(int **)(param_1 + 0x3c));
    }
    piVar1 = *(int **)(param_1 + 0x38);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    puVar3 = (undefined4 *)(param_1 + 0x1c);
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


