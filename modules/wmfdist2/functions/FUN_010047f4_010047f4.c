/* Module: wmfdist2.exe
   Function: FUN_010047f4
   Address: 010047f4
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_010047f4(void)

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
  puVar1 = FUN_01005f78(&LAB_0100461f,&LAB_0100462c,FUN_010042f5,FUN_010043ba,FUN_01004440,
                        FUN_010044cf,FUN_01004522,1,local_10);
  if ((((puVar1 != (undefined4 *)0x0) &&
       (iVar3 = FUN_010042f5(s__MEMCAB_0100a230,0x8000), iVar3 != -1)) &&
      (iVar2 = FUN_01006063(puVar1,iVar3,local_28), iVar2 != 0)) &&
     (((local_28[0] == DAT_0100ade4 && (local_18 == 0)) &&
      ((local_14 == 0 && (iVar3 = FUN_010044cf(iVar3), iVar3 != -1)))))) {
    iVar3 = FUN_01006008(puVar1);
    return iVar3 != 0;
  }
  return false;
}


