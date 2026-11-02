/* Module: InstMsi-x86w.exe
   Function: FUN_01004619
   Address: 01004619
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01004619(void)

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
  puVar1 = FUN_01005ba0(&LAB_01004444,&LAB_01004451,FUN_0100411a,FUN_010041df,FUN_01004265,
                        FUN_010042f4,FUN_01004347,1,local_10);
  if ((((puVar1 != (undefined4 *)0x0) &&
       (iVar3 = FUN_0100411a(s__MEMCAB_0100a230,0x8000), iVar3 != -1)) &&
      (iVar2 = FUN_01005cb0(puVar1,iVar3,local_28), iVar2 != 0)) &&
     (((local_28[0] == DAT_0100ade4 && (local_18 == 0)) &&
      ((local_14 == 0 && (iVar3 = FUN_010042f4(iVar3), iVar3 != -1)))))) {
    iVar3 = FUN_01005c40(puVar1);
    return iVar3 != 0;
  }
  return false;
}


