/* Module: vegas30.exe
   Function: FUN_005b4800
   Address: 005b4800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005b4800(int param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  piVar1 = *(int **)(param_1 + 0x3a8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x3a8) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x3ac) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3ac));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3ac));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x3ac) = 0;
  }
  return;
}


