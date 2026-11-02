/* Module: vegas30k.dll
   Function: FUN_011a7b00
   Address: 011a7b00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011a7b00(int param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  int *piVar5;
  int *unaff_EBX;
  int *unaff_EBP;
  int *piStack_5c;
  int **ppiStack_58;
  int **ppiStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_20;
  int local_1c [3];
  int *piStack_10;
  int local_8 [2];
  
  *(undefined4 *)(param_1 + 0x7d8) = 6;
  if (*(int *)(param_1 + 0x7f0) == 0) {
    return 1;
  }
  piStack_2c = (int *)0x0;
  piStack_30 = (int *)0x0;
  piStack_34 = (int *)0x0;
  piStack_38 = (int *)0x40000000;
  piStack_3c = (int *)0xffffffff;
  piStack_40 = (int *)0xffffffff;
  piStack_4c = (int *)0x11a7b47;
  local_1c[0] = param_1;
  iVar1 = _SfList_CreateExZ_32();
  if (-1 < iVar1) {
    piStack_2c = (int *)0x0;
    piStack_30 = (int *)0x0;
    piStack_34 = (int *)0x0;
    piStack_38 = (int *)0x40000000;
    piStack_3c = (int *)0xffffffff;
    piStack_40 = (int *)0xffffffff;
    piStack_4c = (int *)0x11a7b6c;
    iVar1 = _SfList_CreateExZ_32();
    if (-1 < iVar1) {
      piStack_30 = *(int **)(param_1 + 0x7f0);
      piStack_2c = local_8;
      piStack_34 = (int *)0x11a7b87;
      (**(code **)(*piStack_30 + 0x44))();
      if (piStack_10 != (int *)0x0) {
        piStack_38 = local_1c;
        piStack_34 = (int *)0x0;
        piStack_3c = (int *)0x1;
        piStack_40 = piStack_10;
        iVar2 = (**(code **)(*piStack_10 + 0xc))();
        piVar5 = piStack_50;
        piStack_50 = piStack_2c;
        while (piStack_2c = piStack_50, iVar2 == 0) {
          piStack_4c = (int *)&stack0xffffffd8;
          ppiStack_54 = (int **)0x11a7bc7;
          (**(code **)(*piStack_50 + 0x48))();
          if (piStack_30 != (int *)0x0) {
            ppiStack_58 = &piStack_40;
            ppiStack_54 = (int **)0x0;
            piStack_5c = (int *)0x1;
            iVar2 = (**(code **)(*piStack_30 + 0xc))(piStack_30);
            while (iVar2 == 0) {
              pvVar3 = GlobalAlloc(0x40,0x2d8);
              pvVar4 = GlobalLock(pvVar3);
              if ((pvVar4 == (LPVOID)0x0) ||
                 (piVar5 = (int *)FUN_011b4650(piStack_4c,piStack_50), piVar5 == (int *)0x0)) {
                (**(code **)(*piStack_50 + 8))(piStack_50);
                iVar1 = -0x7ff8fff2;
                break;
              }
              iVar1 = (**(code **)(*piVar5 + 0x108))(0);
              if (iVar1 < 0) {
                (**(code **)(*piVar5 + 0x104))(1);
              }
              else {
                piStack_38 = piVar5;
                iVar1 = _SfList_InsertList_16(piStack_50[0x1fd],0xffffffff,&piStack_38,1);
                (**(code **)(*piVar5 + 4))(piVar5);
              }
              (*(code *)(*ppiStack_58)[2])(ppiStack_58);
              iVar2 = (**(code **)(*piStack_4c + 0xc))(piStack_4c,1,&piStack_5c,0);
            }
            (**(code **)(*piStack_40 + 8))(piStack_40);
          }
          ppiStack_54 = &piStack_2c;
          ppiStack_58 = (int **)piStack_34;
          piStack_5c = (int *)0x11a7caa;
          (**(code **)(*piStack_34 + 0x44))();
          if (piStack_34 != (int *)0x0) {
            piStack_5c = (int *)0x0;
            iVar2 = (**(code **)(*piStack_34 + 0xc))(piStack_34,1,&piStack_40);
            while (iVar2 == 0) {
              pvVar3 = GlobalAlloc(0x40,0x310);
              pvVar4 = GlobalLock(pvVar3);
              if ((pvVar4 == (LPVOID)0x0) ||
                 (piVar5 = (int *)FUN_011bbf40(ppiStack_54,piStack_50), piVar5 == (int *)0x0)) {
                (**(code **)(*piStack_50 + 8))(piStack_50);
                iVar1 = -0x7ff8fff2;
                break;
              }
              iVar1 = FUN_011bc000();
              if (iVar1 < 0) {
                FUN_011bbf90();
                pvVar3 = GlobalHandle(piVar5);
                GlobalUnlock(pvVar3);
                pvVar3 = GlobalHandle(piVar5);
                GlobalFree(pvVar3);
              }
              else {
                piStack_3c = piVar5;
                iVar1 = _SfList_InsertList_16(ppiStack_54[0x1fe],0xffffffff,&piStack_3c,1);
                (**(code **)(*piVar5 + 4))(piVar5);
              }
              (**(code **)(*piStack_50 + 8))(piStack_50);
              iVar2 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,1,&ppiStack_54,0);
            }
            (**(code **)(*unaff_EBX + 8))(unaff_EBX);
          }
          piStack_5c = piStack_3c;
          (**(code **)(*piStack_3c + 8))();
          iVar2 = (**(code **)(*piStack_34 + 0xc))(piStack_34,1,&piStack_40,0);
          piVar5 = piStack_50;
          piStack_50 = piStack_2c;
        }
        piStack_50 = piVar5;
        (**(code **)(*piStack_20 + 8))();
      }
    }
  }
  return iVar1;
}


