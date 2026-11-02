/* Module: vegas30k.dll
   Function: FUN_011839e0
   Address: 011839e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011839e0(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EBP;
  int *unaff_ESI;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiStack_140;
  int **ppiStack_13c;
  int iStack_134;
  int *piStack_130;
  undefined4 uStack_12c;
  int *piStack_120;
  undefined1 *puStack_11c;
  undefined1 local_10c [232];
  undefined4 *puStack_24;
  undefined4 uStack_14;
  int iStack_10;
  LPCSTR pCStack_c;
  undefined4 uStack_8;
  
  puStack_11c = local_10c;
  piStack_120 = DAT_012b09c4;
  ppiVar3 = (int **)0x0;
  (**(code **)(*DAT_012b09c4 + 0x50))();
  if (unaff_ESI == (int *)0x0) {
    return 0;
  }
  piStack_130 = (int *)&stack0xfffffee8;
  uStack_12c = 0;
  iStack_134 = 1;
  ppiStack_13c = (int **)0x1183a18;
  iVar1 = (**(code **)(*unaff_ESI + 0xc))();
  iVar2 = iStack_10;
  do {
    if (iVar1 != 0) {
LAB_01183ab8:
      ppiStack_13c = (int **)uStack_8;
      ppiStack_140 = ppiVar3;
      (*(code *)(*ppiVar3)[0xd])();
      ppiVar4 = ppiVar3;
      (*(code *)(*ppiVar3)[0x10])(ppiVar3,DAT_012b0adc);
      iVar2 = (*(code *)(*ppiVar3)[0x12])(ppiVar3,puStack_24,uStack_14,iStack_10);
      if (-1 < iVar2) {
        FUN_011833d0(*puStack_24,0x107);
        MIDIMixer_AssignClientIDs((ISFMixer *)*puStack_24);
        FUN_01182540(&DAT_012b0838);
      }
      (*(code *)(*ppiVar3)[2])(ppiVar3);
      (*(code *)(*ppiVar4)[2])(ppiVar4);
      return iVar2;
    }
    ppiStack_13c = &piStack_120;
    (**(code **)(*unaff_EBP + 0x14))();
    (**(code **)(*piStack_130 + 0x10))(piStack_130,&stack0xfffffedc,0x104);
    ppiVar4 = ppiStack_13c;
    if (ppiVar3 == (int **)0x0) {
      (*(code *)(*ppiStack_13c)[1])(ppiStack_13c);
      ppiVar3 = ppiVar4;
    }
    if (iVar2 == iStack_134) {
      if (ppiVar3 != (int **)0x0) {
        (*(code *)(*ppiVar3)[2])(ppiVar3);
      }
      ppiVar3 = ppiStack_13c;
      (*(code *)(*ppiStack_13c)[1])(ppiStack_13c);
      iVar1 = lstrcmpA((LPCSTR)&piStack_130,pCStack_c);
      if (iVar1 == 0) {
        (*(code *)(*ppiStack_13c)[2])(ppiStack_13c);
        goto LAB_01183ab8;
      }
    }
    (*(code *)(*ppiStack_13c)[2])(ppiStack_13c);
    iVar1 = (*(code *)(*ppiStack_13c)[3])(ppiStack_13c,1,&ppiStack_140,0);
  } while( true );
}


