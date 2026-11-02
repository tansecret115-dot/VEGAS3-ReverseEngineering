/* Module: vegas30.exe
   Function: FUN_00574b00
   Address: 00574b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00574b00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = **(int **)(param_1 + 0x2b0);
LAB_00574b10:
  do {
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x2e0);
    *(int *)(param_1 + 0x2e0) = *(int *)(param_1 + 0x2e0) + 1;
    iVar2 = 0;
    if (0 < iVar1) {
      piVar3 = *(int **)(*(int *)(param_1 + 0x2b0) + 8);
      do {
        if ((param_2 != *piVar3) && (*(int *)(param_2 + 0x14) == *(int *)(*piVar3 + 0x14)))
        goto LAB_00574b10;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < iVar1);
    }
    if (*(int *)(param_2 + 0x14) != 0) {
      return;
    }
  } while( true );
}


