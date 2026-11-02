/* Module: erv23260.dll
   Function: FUN_638253c3
   Address: 638253c3
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_638253c3(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  uint uVar6;
  int unaff_EBP;
  int unaff_ESI;
  int iVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined8 in_MM3;
  undefined1 uVar12;
  undefined1 uVar13;
  uint in_MM7_Da;
  undefined1 uVar14;
  undefined8 uVar11;
  uint uStack0000005c;
  
  uStack0000005c = in_MM7_Da;
  bVar2 = FUN_63825502();
  uVar1 = *(undefined4 *)(&DAT_63838dd8 + CONCAT31(extraout_var,bVar2));
  uVar14 = (undefined1)((uint)uVar1 >> 0x18);
  uVar13 = (undefined1)((uint)uVar1 >> 0x10);
  uVar12 = (undefined1)((uint)uVar1 >> 8);
  uVar11 = paddusw(CONCAT62(CONCAT51(CONCAT41((int)(CONCAT35(CONCAT21(CONCAT11(uVar14,uVar14),uVar13
                                                                     ),CONCAT14(uVar13,uVar1)) >>
                                                   0x20),uVar12),uVar12),
                            CONCAT11((char)uVar1,(char)uVar1)),in_MM3);
  uVar6 = (uint)uVar11 & 0xffff;
  uVar3 = (uint)uVar11 >> 0x10;
  uVar4 = (uint)((ulonglong)uVar11 >> 0x20);
  if (uVar6 < uVar3) {
    if ((int)uVar6 < (int)uStack0000005c) {
      uVar3 = uVar4 & 0xffff;
      uVar4 = uVar4 >> 0x10;
      if (uVar3 < uVar4) {
        cVar10 = SBORROW4(uVar3,uStack0000005c);
        cVar9 = (int)(uVar3 - uStack0000005c) < 0;
        bVar8 = uVar3 == uStack0000005c;
        if ((int)uVar3 < (int)uStack0000005c) {
          iVar5 = FUN_63825672();
          if (bVar8 || cVar10 != cVar9) {
            if (iVar5 <= extraout_EDX_02) {
              return unaff_ESI;
            }
          }
          else if ((int)uVar3 < extraout_EDX_02) {
            return unaff_ESI;
          }
        }
      }
      else if ((int)uVar4 < (int)uStack0000005c) {
        cVar10 = SBORROW4(unaff_ESI,unaff_EBP);
        iVar7 = unaff_ESI - unaff_EBP;
        cVar9 = iVar7 < 0;
        bVar8 = iVar7 == 0;
        iVar5 = FUN_63825672();
        unaff_ESI = iVar7 + unaff_EBP;
        if (bVar8 || cVar10 != cVar9) {
          if (iVar5 <= extraout_EDX_01) goto LAB_63825434;
        }
        else if ((int)uVar4 < extraout_EDX_01) {
          return unaff_ESI - unaff_EBP;
        }
      }
      return unaff_ESI;
    }
  }
  else if ((int)uVar3 < (int)uStack0000005c) {
    uVar3 = uVar4 & 0xffff;
    uVar4 = uVar4 >> 0x10;
    if (uVar3 < uVar4) {
      if ((int)uVar3 < (int)uStack0000005c) {
        cVar10 = SBORROW4(unaff_ESI,1);
        cVar9 = unaff_ESI + -1 < 0;
        bVar8 = unaff_ESI == 1;
        iVar5 = FUN_63825672();
        if (bVar8 || cVar10 != cVar9) {
          if (iVar5 <= extraout_EDX_00) {
            return unaff_ESI;
          }
        }
        else if ((int)uVar3 < extraout_EDX_00) {
          return unaff_ESI + -1;
        }
      }
    }
    else if ((int)uVar4 < (int)uStack0000005c) {
      iVar7 = unaff_ESI - unaff_EBP;
      cVar10 = SBORROW4(iVar7,1);
      cVar9 = iVar7 + -1 < 0;
      bVar8 = iVar7 == 1;
      iVar5 = FUN_63825672();
      unaff_ESI = iVar7 + unaff_EBP;
      if (bVar8 || cVar10 != cVar9) {
        if (iVar5 <= extraout_EDX) {
LAB_63825434:
          return unaff_ESI - unaff_EBP;
        }
      }
      else if ((int)uVar4 < extraout_EDX) {
        return (unaff_ESI + -1) - unaff_EBP;
      }
    }
    return unaff_ESI + -1;
  }
  if (uVar4 >> 0x10 < (uVar4 & 0xffff)) {
    if ((int)(uVar4 >> 0x10) < (int)uStack0000005c) {
      return unaff_ESI - unaff_EBP;
    }
  }
  else if ((int)(uVar4 & 0xffff) < (int)uStack0000005c) {
    return unaff_ESI;
  }
  return unaff_ESI;
}


