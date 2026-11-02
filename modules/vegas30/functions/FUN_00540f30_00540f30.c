/* Module: vegas30.exe
   Function: FUN_00540f30
   Address: 00540f30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00540f30(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  bVar2 = false;
  FUN_005b83b0(param_1,1);
  piVar3 = (int *)FUN_0053f8e0(param_1);
  iVar5 = *piVar3 + -1;
  if (-1 < iVar5) {
    do {
      iVar1 = *(int *)(piVar3[2] + iVar5 * 4);
      if (((*(byte *)(iVar1 + 0x34) & 4) == 0) && (iVar4 = FUN_0053fef0(param_1,iVar1), iVar4 != 0))
      {
        iVar6 = _SfDosGetDateTime_4(iVar1 + 0x3c);
        if (iVar6 == *(int *)(iVar1 + 0x2c)) {
          iVar6 = FUN_00540fe0(param_1,iVar1,iVar5);
          bVar2 = true;
          if (iVar6 < 0) goto LAB_00540fb1;
        }
        else {
          iVar6 = FUN_005400b0(piVar3,iVar1,0);
        }
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    if (iVar6 < 0) goto LAB_00540fb1;
  }
  iVar6 = 0;
LAB_00540fb1:
  FUN_005b84d0(param_1,1);
  if (bVar2) {
    DAT_0064767c = DAT_0064767c | 0x10;
  }
  return iVar6;
}


