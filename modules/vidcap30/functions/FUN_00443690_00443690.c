/* Module: vidcap30.exe
   Function: FUN_00443690
   Address: 00443690
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00443690(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)FUN_0042e4f0(param_1);
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    if (0 < *piVar1) {
      piVar3 = (int *)piVar1[2];
      do {
        if (*(int *)(*piVar3 + 8) == param_2) {
          return *piVar3;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < *piVar1);
    }
  }
  return 0;
}


