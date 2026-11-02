/* Module: vegas30k.dll
   Function: FUN_011a2050
   Address: 011a2050
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011a2050(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x438);
  if (piVar1 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar1;
  }
  iVar2 = 1;
  do {
    iVar4 = 0;
    if (0 < iVar5) {
      piVar3 = (int *)piVar1[2];
      while ((*(int *)(*piVar3 + 0xc) == 0 || (iVar2 != *(int *)(*piVar3 + 0x9c0)))) {
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
        if (iVar5 <= iVar4) {
          return;
        }
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


