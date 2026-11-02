/* Module: erv23260.dll
   Function: FUN_63826c96
   Address: 63826c96
   Source: Ghidra pseudocode (Stage 10 batch) */


ulonglong FUN_63826c96(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint unaff_EBX;
  int unaff_EBP;
  ulonglong *unaff_ESI;
  ulonglong *unaff_EDI;
  ulonglong uVar3;
  ulonglong extraout_MM1;
  ulonglong extraout_MM1_00;
  ulonglong extraout_MM1_01;
  ulonglong in_MM2;
  ulonglong in_MM3;
  ulonglong in_MM6;
  
  if ((unaff_EBX & 1) != 0) {
    if ((unaff_EBX >> 1 & 0x80) == 0) {
      uVar3 = FUN_638258a6();
      *unaff_EDI = uVar3;
      unaff_EDI[1] = extraout_MM1_00 >> 1;
      unaff_EDI[2] = (in_MM2 & in_MM6) >> 1;
      unaff_EDI[3] = (in_MM3 & in_MM6) >> 1;
      uVar3 = FUN_638258a6();
      return uVar3;
    }
    uVar3 = FUN_638259b4();
    *unaff_EDI = uVar3;
    unaff_EDI[1] = extraout_MM1_01 >> 1;
    unaff_EDI[2] = (in_MM2 & in_MM6) >> 1;
    unaff_EDI[3] = (in_MM3 & in_MM6) >> 1;
    uVar3 = FUN_638259d1();
    return uVar3;
  }
  uVar3 = *(ulonglong *)((int)unaff_ESI + unaff_EBP);
  if ((unaff_EBX >> 1 & 0x80) != 0) {
    uVar3 = FUN_63825805();
    *unaff_EDI = uVar3;
    unaff_EDI[1] = extraout_MM1 >> 1;
    unaff_EDI[2] = (in_MM2 & in_MM6) >> 1;
    unaff_EDI[3] = (in_MM3 & in_MM6) >> 1;
    uVar3 = FUN_63825805();
    return uVar3;
  }
  uVar1 = *(ulonglong *)((int)unaff_ESI + unaff_EBP * 2);
  uVar2 = *(ulonglong *)(unaff_EBP * 3 + (int)unaff_ESI);
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[1] = uVar3;
  unaff_EDI[2] = uVar1;
  unaff_EDI[3] = uVar2;
  return *(ulonglong *)((int)unaff_ESI + unaff_EBP * 4);
}


