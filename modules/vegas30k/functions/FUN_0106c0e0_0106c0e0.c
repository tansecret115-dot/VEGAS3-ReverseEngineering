/* Module: vegas30k.dll
   Function: FUN_0106c0e0
   Address: 0106c0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0106c0e0(int param_1,LPCSTR param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if (iVar2 <= iVar3) break;
    iVar2 = *(int *)(piVar1[2] + iVar3 * 4);
    if (iVar2 != 0) {
      iVar2 = lstrcmpiA((LPCSTR)(iVar2 + 0x48),param_2);
      if (iVar2 == 0) {
        return 1;
      }
    }
    iVar3 = iVar3 + 1;
  }
  return 0;
}


