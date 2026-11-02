/* Module: vegas30.exe
   Function: FUN_0047c810
   Address: 0047c810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047c810(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    iVar3 = 0;
    if (0 < *piVar1) {
      piVar2 = (int *)piVar1[2];
      do {
        if (*(int *)(*piVar2 + 0x10) == param_2) {
          FUN_0047c480(*piVar2);
          _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x18),iVar3,1,0);
          return 1;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < *piVar1);
    }
  }
  return 0;
}


