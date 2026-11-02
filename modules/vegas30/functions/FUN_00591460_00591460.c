/* Module: vegas30.exe
   Function: FUN_00591460
   Address: 00591460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_00591460(undefined4 param_1,int ****param_2,undefined4 param_3,int param_4,int param_5)

{
  int ****ppppiVar1;
  int ***pppiVar2;
  int *****pppppiVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_EBX;
  int iVar6;
  int *****pppppiVar7;
  int ****unaff_EBP;
  int **ppiVar8;
  int *unaff_ESI;
  uint *puVar9;
  int unaff_retaddr;
  int *****pppppiStack_34;
  int *****pppppiStack_30;
  undefined4 uStack_2c;
  int ****ppppiStack_28;
  int ****ppppiStack_24;
  int *****pppppiStack_20;
  int *****pppppiStack_1c;
  int *****local_8;
  int ****local_4;
  
  ppppiVar1 = param_2;
  iVar6 = 0;
  local_8 = (int *****)0x0;
  if (param_2[1] != (int ***)0x2) {
    return 0;
  }
  param_2[0x8e] = (int ***)0x0;
  param_2[0x8f] = (int ***)0x0;
  if (param_2[0x90] == (int ***)0x0) {
    if (param_5 != 0) {
      return 0;
    }
    if (param_2[0x91] == (int ***)0x0) {
      if (param_2[0x8d] == (int ***)0x0) {
        param_2 = (int ****)0x0;
      }
      else {
        param_2 = (int ****)*param_2[0x8d];
      }
    }
    else {
      pppppiStack_1c = (int *****)param_2;
      pppppiStack_20 = (int *****)0x5916cd;
      param_2 = (int ****)FUN_005d0420();
    }
    iVar4 = 0;
    if ((int)param_2 < 1) {
      return 0;
    }
    do {
      puVar9 = (uint *)0x0;
      pppiVar2 = ppppiVar1[0x8d];
      if (pppiVar2 == (int ***)0x0) {
        ppiVar8 = (int **)0x0;
      }
      else {
        ppiVar8 = *pppiVar2;
      }
      if ((-1 < iVar4) && (iVar4 <= (int)ppiVar8 + -1)) {
        puVar9 = (uint *)pppiVar2[2][iVar4];
      }
      if (param_4 == 0) {
        if ((puVar9 != (uint *)0x0) && ((*puVar9 & 1) != 0)) {
          pppppiStack_1c = (int *****)puVar9[1];
          pppppiStack_20 = (int *****)0x59178e;
          iVar6 = (*(code *)(*pppppiStack_1c)[6])();
          pppppiStack_20 = (int *****)&stack0xfffffff4;
          *puVar9 = *puVar9 & 0xfffffffe;
          ppppiStack_28 = (int ****)puVar9[1];
          ppppiStack_24 = (int ****)&DAT_0062f6f8;
          uStack_2c = 0x5917a9;
          (*(code *)**ppppiStack_28)();
          if (local_8 != (int *****)0x0) {
            pppppiStack_1c = (int *****)0x0;
            pppppiStack_20 = local_8;
            ppppiStack_24 = (int ****)0x5917b9;
            (*(code *)(*local_8)[8])();
            ppppiStack_28 = (int ****)0x5917c3;
            ppppiStack_24 = unaff_EBP;
            (*(code *)(*unaff_EBP)[2])();
          }
        }
      }
      else if ((puVar9 != (uint *)0x0) && ((*puVar9 & 1) == 0)) {
        ppppiStack_24 = (int ****)puVar9[1];
        pppppiStack_1c = (int *****)&local_8;
        pppppiStack_20 = (int *****)&DAT_0062f6f8;
        ppppiStack_28 = (int ****)0x591745;
        (*(code *)**ppppiStack_24)();
        if (unaff_ESI != (int *)0x0) {
          ppppiStack_28 = (int ****)0x0;
          pppppiStack_30 = (int *****)0x591755;
          (**(code **)(*unaff_ESI + 0x20))();
          pppppiStack_30 = pppppiStack_1c;
          pppppiStack_34 = (int *****)0x59175f;
          (*(code *)(*pppppiStack_1c)[2])();
        }
        pppppiStack_30 = (int *****)puVar9[1];
        ppppiStack_28 = *(int *****)(unaff_retaddr + 4);
        uStack_2c = 2;
        pppppiStack_34 = (int *****)0x591772;
        iVar6 = (**(code **)((int)*pppppiStack_30 + 0xc))();
        *puVar9 = *puVar9 | 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_2);
    return iVar6;
  }
  ppppiVar1 = param_2 + 0x91;
  if (param_2[0x91] == (int ***)0x0) {
    if (DAT_0064ab78 != 0) {
      pppppiStack_1c = (int *****)0x5914b5;
      _fpreset();
    }
    pppppiStack_20 = (int *****)0x5914bb;
    pppppiStack_1c = (int *****)ppppiVar1;
    iVar6 = _SfAudio_CreateTrackGraph_4();
  }
  pppppiStack_1c = (int *****)*ppppiVar1;
  if (pppppiStack_1c == (int *****)0x0) {
    return iVar6;
  }
  if (param_4 == 0) {
    pppppiStack_20 = (int *****)0x591696;
    (*(code *)(*pppppiStack_1c)[9])();
    pppppiStack_20 = (int *****)*ppppiVar1;
    ppppiStack_24 = (int ****)0x59169f;
    iVar6 = (*(code *)(*pppppiStack_20)[7])();
    ppppiStack_24 = (int ****)0x0;
    ppppiStack_28 = param_2;
    uStack_2c = 0x5916a9;
    FUN_005d0590();
    return iVar6;
  }
  local_4 = (int ****)0x20;
  if (DAT_0064ab78 != 0) {
    pppppiStack_1c = (int *****)0x5914ed;
    _fpreset();
  }
  pppppiStack_30 = (int *****)*ppppiVar1;
  pppppiStack_1c = (int *****)0x0;
  pppppiStack_20 = (int *****)0x0;
  ppppiStack_24 = (int ****)DAT_00647e6c;
  ppppiStack_28 = (int ****)DAT_00647e68;
  uStack_2c = param_3;
  pppppiStack_34 = (int *****)0x59150b;
  iVar6 = (*(code *)(*pppppiStack_30)[5])();
  if (-1 < iVar6) {
    if (DAT_0064ab78 != 0) {
      pppppiStack_34 = (int *****)0x591524;
      _fpreset();
    }
    pppppiStack_34 = (int *****)&local_8;
    iVar6 = (*(code *)(**ppppiVar1)[3])(*ppppiVar1);
    if (-1 < iVar6) {
      if (local_8 != (int *****)0x0) {
        pppppiStack_34 = (int *****)&pppppiStack_1c;
        (*(code *)(*local_8)[0x1b])(local_8,1);
        if (param_2[0x8d] == (int ***)0x0) {
          ppiVar8 = (int **)0x0;
        }
        else {
          ppiVar8 = *param_2[0x8d];
        }
        pppppiVar7 = (int *****)0x0;
        if (0 < (int)ppiVar8) {
          do {
            pppppiStack_34 = pppppiVar7;
            pppppiVar3 = (int *****)FUN_005d0cc0(param_2);
            pppppiStack_34 = pppppiVar3;
            iVar6 = (*(code *)(*local_8)[0x21])(local_8);
            param_2 = unaff_EBP;
            if (iVar6 < 0) goto LAB_0059165e;
            pppppiStack_34 = pppppiVar3;
            (*(code *)(*pppppiVar3)[2])();
            pppppiVar7 = (int *****)((int)pppppiVar7 + 1);
          } while ((int)pppppiVar7 < (int)ppiVar8);
        }
        if (iVar6 < 0) goto LAB_0059165e;
        pppppiStack_34 = &local_4;
        local_4 = (int ****)0x0;
        iVar6 = 0;
        (*(code *)(*local_8)[0x2e])(local_8);
        if (unaff_EBX != (int *)0x0) {
          iVar4 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,1,&stack0xffffffe8,0);
          while (iVar4 == 0) {
            iVar4 = (int)*ppppiStack_28;
            uVar5 = FUN_005d15e0(param_2,iVar6);
            (**(code **)(iVar4 + 0x4c))(ppppiStack_28,uVar5);
            (*(code *)(*pppppiStack_30)[2])(pppppiStack_30);
            pppppiStack_34 = (int *****)0x0;
            iVar6 = iVar6 + 1;
            iVar4 = (**(code **)((int)*ppppiStack_28 + 0xc))(ppppiStack_28,1,&pppppiStack_34,0);
          }
          (*(code *)(*pppppiStack_1c)[2])(pppppiStack_1c);
        }
        (*(code *)(*unaff_EBP)[2])(unaff_EBP);
        if (DAT_0064ab78 != 0) {
          _fpreset();
        }
        iVar6 = (*(code *)(*param_2[0x91])[8])(param_2[0x91],0);
      }
      if (-1 < iVar6) {
        return iVar6;
      }
    }
  }
LAB_0059165e:
  if (local_8 != (int *****)0x0) {
    pppppiStack_34 = local_8;
    (*(code *)(*local_8)[2])();
  }
  pppppiStack_34 = (int *****)param_2[0x91];
  local_8 = (int *****)0x0;
  (*(code *)(*pppppiStack_34)[7])();
  FUN_005d0590(param_2,0);
  return iVar6;
}


