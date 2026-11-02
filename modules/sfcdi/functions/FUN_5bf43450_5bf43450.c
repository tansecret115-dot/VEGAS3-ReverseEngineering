/* Module: sfcdi.dll
   Function: FUN_5bf43450
   Address: 5bf43450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf43450(int param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_5bf426b0(param_1,param_2);
  if ((*(uint *)((int)param_2 + 8) & 0x10) != 0) {
    iVar3 = 0;
    while( true ) {
      piVar1 = *(int **)((int)param_2 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
      if (iVar2 <= iVar3) break;
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
      if ((iVar3 < 0) || (iVar2 + -1 < iVar3)) {
        FUN_5bf43450(param_1,(void *)0x0);
        iVar3 = iVar3 + 1;
      }
      else {
        FUN_5bf43450(param_1,*(void **)(piVar1[2] + iVar3 * 4));
        iVar3 = iVar3 + 1;
      }
    }
  }
  return;
}


