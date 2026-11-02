/* Module: wmfdist2.exe
   Function: FUN_01007036
   Address: 01007036
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01007036(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)((int)param_1 + 0xb2) & 0xf;
  if ((*(byte *)((int)param_1 + 0xb2) & 0xf) == 0) {
LAB_0100708d:
    uVar3 = 1;
  }
  else {
    if (bVar1 == 1) {
      iVar2 = FUN_01005b83();
LAB_0100707a:
      if (iVar2 == 0) goto LAB_0100708d;
      uVar3 = 7;
    }
    else {
      if (bVar1 == 2) {
        iVar2 = FUN_01005b83();
        goto LAB_0100707a;
      }
      if (bVar1 == 3) {
        iVar2 = FUN_01007316((int *)param_1[0xd]);
        goto LAB_0100707a;
      }
      if (bVar1 == 0xf) goto LAB_0100708d;
      uVar3 = 6;
    }
    FUN_0100718c((undefined4 *)*param_1,uVar3,0);
    uVar3 = 0;
  }
  return uVar3;
}


