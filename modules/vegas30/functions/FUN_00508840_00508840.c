/* Module: vegas30.exe
   Function: FUN_00508840
   Address: 00508840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00508840(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  piVar1 = &DAT_0061a380;
  do {
    iVar2 = 4;
    bVar5 = true;
    piVar3 = param_1;
    piVar4 = piVar1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      return 1;
    }
    piVar1 = piVar1 + 4;
    if ("-Sonic Foundry" < piVar1) {
      return 0;
    }
  } while( true );
}


