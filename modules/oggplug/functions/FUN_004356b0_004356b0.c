/* Module: oggplug.dll
   Function: FUN_004356b0
   Address: 004356b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_004356b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  fVar5 = (float10)_CIpow();
  floor((double)fVar5);
  iVar1 = ftol();
  do {
    while( true ) {
      iVar2 = 1;
      iVar3 = 1;
      if (0 < *param_1) {
        iVar4 = *param_1;
        do {
          iVar2 = iVar2 * iVar1;
          iVar3 = iVar3 * (iVar1 + 1);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = param_1[1];
      if (iVar2 <= iVar4) break;
LAB_0043570c:
      iVar1 = iVar1 + -1;
    }
    if (iVar4 < iVar3) {
      return;
    }
    if (iVar4 < iVar2) goto LAB_0043570c;
    iVar1 = iVar1 + 1;
  } while( true );
}


