/* Module: vegas30.exe
   Function: FUN_005a7a60
   Address: 005a7a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a7a60(LPCVOID param_1,int param_2)

{
  int *piVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  
  if (param_1 != (LPCVOID)0x0) {
    if (0 < param_2) {
      puVar3 = (undefined4 *)((int)param_1 + 0x1c);
      do {
        piVar1 = (int *)puVar3[-7];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        piVar1 = (int *)puVar3[-6];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        if ((LPCVOID)*puVar3 != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle((LPCVOID)*puVar3);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle((LPCVOID)*puVar3);
          GlobalFree(pvVar2);
        }
        if ((LPCVOID)puVar3[2] != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle((LPCVOID)puVar3[2]);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle((LPCVOID)puVar3[2]);
          GlobalFree(pvVar2);
        }
        puVar3 = puVar3 + 0x14;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
  }
  return;
}


