/* Module: sfnetmedia.dll
   Function: FUN_00410c20
   Address: 00410c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00410c20(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (param_1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *param_1;
    }
    if (iVar2 <= iVar3) break;
    puVar1 = *(undefined4 **)(param_1[2] + iVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    iVar3 = iVar3 + 1;
  }
  if (DAT_00441ad0 != (int *)0x0) {
    FUN_00423fd0(DAT_00441ad0,0,-1,0);
    FUN_00425240(DAT_00441ad0);
    DAT_00441ad0 = (int *)0x0;
  }
  FUN_00423fd0(param_1,0,-1,0);
  FUN_00425240(param_1);
  return 0;
}


