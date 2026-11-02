/* Module: 50comupd.exe
   Function: FUN_01004647
   Address: 01004647
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01004647(void)

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
  puVar1 = FUN_01005bc8(&LAB_01004472,&LAB_0100447f,FUN_01004148,FUN_0100420d,FUN_01004293,
                        FUN_01004322,FUN_01004375,1,local_10);
  if ((((puVar1 != (undefined4 *)0x0) &&
       (iVar3 = FUN_01004148(s__MEMCAB_0100a230,0x8000), iVar3 != -1)) &&
      (iVar2 = FUN_01005cb3(puVar1,iVar3,local_28), iVar2 != 0)) &&
     (((local_28[0] == DAT_0100ade4 && (local_18 == 0)) &&
      ((local_14 == 0 && (iVar3 = FUN_01004322(iVar3), iVar3 != -1)))))) {
    iVar3 = FUN_01005c58(puVar1);
    return iVar3 != 0;
  }
  return false;
}


