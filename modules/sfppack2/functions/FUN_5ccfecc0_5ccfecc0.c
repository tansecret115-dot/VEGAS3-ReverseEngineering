/* Module: sfppack2.dll
   Function: FUN_5ccfecc0
   Address: 5ccfecc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5ccfecc0(int *param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  int iVar7;
  undefined1 local_90 [8];
  undefined1 local_88 [132];
  
  iVar7 = -0x348;
  (**(code **)(*param_1 + 0x60))(param_1,local_88,local_90);
  iVar6 = unaff_ESI + -2;
  FUN_5ccfec00((int *)&stack0xffffff6c,unaff_ESI);
  iVar5 = unaff_ESI + -2;
  if (iVar5 != 0) {
    piVar4 = (int *)(local_88 + iVar5 * 8 + -0x14);
    do {
      iVar1 = piVar4[2];
      dVar3 = (double)(piVar4[5] - piVar4[3]) / (double)(piVar4[4] - iVar1);
      dVar2 = (double)(piVar4[3] - piVar4[1]) / (double)(iVar1 - *piVar4);
      if ((((dVar3 < _DAT_5cd51510) && (_DAT_5cd52940 <= dVar2)) ||
          ((dVar3 < _DAT_5cd53fe0 && (_DAT_5cd53fe0 <= dVar2)))) && (iVar7 < iVar1)) {
        iVar6 = iVar5;
        iVar7 = iVar1;
      }
      iVar5 = iVar5 + -1;
      piVar4 = piVar4 + -2;
    } while (iVar5 != 0);
  }
  return *(undefined4 *)(local_88 + iVar6 * 8 + -0xc);
}


