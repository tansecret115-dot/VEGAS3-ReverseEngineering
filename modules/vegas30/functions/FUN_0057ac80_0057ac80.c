/* Module: vegas30.exe
   Function: FUN_0057ac80
   Address: 0057ac80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057ac80(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x2c);
  do {
    if (*piVar2 == 0) {
      FUN_0057acb0(iVar1);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 5;
  } while (iVar1 < 0x17);
  return;
}


