/* Module: sfmarket2.dll
   Function: FUN_0040cd50
   Address: 0040cd50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040cd50(int param_1)

{
  int *piVar1;
  LPCVOID pMem;
  HGLOBAL pvVar2;
  int *piVar3;
  
  if ((*(byte *)(param_1 + 0x14) & 2) != 0) {
    piVar3 = *(int **)(param_1 + 8);
    if (piVar3 != *(int **)(param_1 + 0xc)) {
      do {
        piVar1 = (int *)*piVar3;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        piVar3 = piVar3 + 1;
      } while (piVar3 != *(int **)(param_1 + 0xc));
    }
    pMem = *(LPCVOID *)(param_1 + 8);
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
  }
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return;
}


