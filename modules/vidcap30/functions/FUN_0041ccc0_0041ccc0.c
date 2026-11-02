/* Module: vidcap30.exe
   Function: FUN_0041ccc0
   Address: 0041ccc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041ccc0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_005b2adc;
  while ((*piVar1 != param_1 || (*piVar1 >> 0x1f != param_2))) {
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
    if ((int *)((int)&DAT_005b2b00 + 3) < piVar1) {
      return -1;
    }
  }
  return iVar2;
}


