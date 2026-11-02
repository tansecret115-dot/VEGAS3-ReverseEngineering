/* Module: hhupd.exe
   Function: FUN_0100458b
   Address: 0100458b
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0100458b(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_28 [4];
  int local_18;
  int local_14;
  undefined4 local_10 [3];
  
  piVar4 = local_28;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  puVar1 = FUN_01005a90(&LAB_010043b6,&LAB_010043c3,FUN_0100408c,FUN_01004151,FUN_010041d7,
                        FUN_01004266,FUN_010042b9,1,local_10);
  if ((((puVar1 != (undefined4 *)0x0) &&
       (iVar3 = FUN_0100408c(s__MEMCAB_0100a230,0x8000), iVar3 != -1)) &&
      (iVar2 = FUN_01005ba0(puVar1,iVar3,local_28), iVar2 != 0)) &&
     (((local_28[0] == DAT_0100ade4 && (local_18 == 0)) &&
      ((local_14 == 0 && (iVar3 = FUN_01004266(iVar3), iVar3 != -1)))))) {
    iVar3 = FUN_01005b30(puVar1);
    return iVar3 != 0;
  }
  return false;
}


