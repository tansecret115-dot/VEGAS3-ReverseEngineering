/* Module: vegas30k.dll
   Function: FUN_0119f5d0
   Address: 0119f5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_0119f5d0(int ****param_1,byte param_2,int **param_3,int param_4)

{
  int ***pppiVar1;
  int iVar2;
  int ****unaff_EBX;
  int *unaff_EBP;
  undefined4 uVar3;
  int *unaff_ESI;
  int ****ppppiVar4;
  byte bVar5;
  int ****ppppiStack_3c;
  int ***pppiStack_28;
  int ****local_24;
  int ***local_20;
  int ****local_1c [2];
  undefined4 local_14;
  undefined4 local_10;
  int **ppiStack_8;
  int ****local_4;
  
  pppiVar1 = param_1[0x19d];
  uVar3 = 1;
  local_20 = (int ***)0x0;
  local_24 = (int ****)0x0;
  local_4 = param_1;
  for (; pppiVar1 != (int ***)0x0; pppiVar1 = (int ***)pppiVar1[6]) {
    ppppiStack_3c = (int ****)&local_24;
    (*(code *)***pppiVar1)(*pppiVar1,&DAT_011d9c90);
    if (local_24 != (int ****)0x0) {
      ppppiStack_3c = &local_20;
      (*(code *)(*local_24)[0x23])(local_24,0x30);
      if (local_20 == (int ***)param_3) break;
      ppppiStack_3c = local_24;
      (*(code *)(*local_24)[2])();
    }
  }
  local_14 = 0;
  local_10 = 0xffffffff;
  if ((param_2 & 0x81) == 0x81) {
    ppppiStack_3c = (int ****)local_1c;
    local_1c[0] = (int ****)0x0;
    ppppiVar4 = local_24;
    (*(code *)(*local_24)[0x44])();
    (*(code *)(*local_24)[3])(local_24,1,&local_20,0);
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    uVar3 = (**(code **)(*unaff_ESI + 0x8c))(unaff_ESI,0xf,&pppiStack_28);
    if (((byte)unaff_ESI & 0x81) == 0x81) {
      ppppiStack_3c = (int ****)0x1;
      (*(code *)(*ppppiVar4)[0x23])(ppppiVar4,0x30,&stack0xffffffc8);
    }
    (*(code *)(*ppppiVar4)[2])(ppppiVar4);
  }
  pppiVar1 = param_1[0x19d];
  do {
    while( true ) {
      do {
        if (pppiVar1 == (int ***)0x0) {
          if (local_24 != (int ****)0x0) {
            ppppiStack_3c = local_24;
            (*(code *)(*local_24)[2])();
          }
          ppppiStack_3c = (int ****)0xffffffff;
          (*(code *)(*param_1)[0x36])(param_1,0xffffffff,0xffffffff,0xffffffff);
          return uVar3;
        }
        ppppiStack_3c = &pppiStack_28;
        (*(code *)***pppiVar1)(*pppiVar1,&DAT_011d9c90);
        pppiVar1 = (int ***)pppiVar1[6];
        param_1 = local_4;
      } while (pppiStack_28 == (int ***)0x0);
      ppppiStack_3c = &local_20;
      bVar5 = 0;
      (*(code *)(*pppiStack_28)[0x23])(pppiStack_28);
      if (unaff_EBX != local_4) break;
LAB_0119f888:
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      param_1 = local_4;
    }
    pppiStack_28 = (int ***)0x0;
    (**(code **)(*unaff_ESI + 0x8c))(unaff_ESI,0xf,&pppiStack_28);
    if ((pppiStack_28 != (int ***)ppiStack_8) ||
       ((local_20 != (int ***)0x0 && (local_1c[0] == unaff_EBX)))) goto LAB_0119f888;
    local_24 = (int ****)0x0;
    (**(code **)(*unaff_ESI + 0x110))(unaff_ESI,&local_24);
    if (unaff_EBX == (int ****)0x0) {
LAB_0119f806:
      if (local_4 == (int ****)0x0) {
        iVar2 = (*(code *)(*ppppiStack_3c)[0x12])(ppppiStack_3c);
        if (iVar2 == 1) {
          (**(code **)(*unaff_ESI + 0x1a0))(param_4);
          FUN_011973b0(0);
        }
        else if ((unaff_EBP != (int *)0x0) && (param_4 == 0)) {
          (**(code **)(*unaff_EBP + 0x1a0))(1);
          FUN_011973b0(0);
        }
      }
      else {
        iVar2 = (*(code *)(*ppppiStack_3c)[0x19])(ppppiStack_3c);
        if (iVar2 == 1) {
          (**(code **)(*unaff_ESI + 0x1a4))(param_4);
        }
        else if ((unaff_EBP != (int *)0x0) && (param_4 == 0)) {
          (**(code **)(*unaff_EBP + 0x1a4))(1);
        }
      }
      goto LAB_0119f888;
    }
    (*(code *)(*unaff_EBX)[3])(unaff_EBX,1,&ppiStack_8,0);
    ppppiVar4 = ppppiStack_3c;
    (*(code *)(*ppppiStack_3c)[2])();
    uVar3 = (*(code *)(*local_1c[0])[0x23])(local_1c[0],0xf,&stack0xffffffcc);
    if (((bVar5 & 0x81) != 0x81) ||
       ((*(code *)(*pppiStack_28)[0x23])(pppiStack_28,0x30,&ppppiStack_3c),
       ppppiStack_3c != unaff_EBX)) {
      (*(code *)(*pppiStack_28)[2])(pppiStack_28);
      goto LAB_0119f806;
    }
    (*(code *)(*pppiStack_28)[2])(pppiStack_28);
    (*(code *)(*ppppiVar4)[2])(ppppiVar4);
    param_1 = local_4;
  } while( true );
}


