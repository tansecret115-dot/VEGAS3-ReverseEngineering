/* Module: vegas30k.dll
   Function: BuildSubPixelMaskTable
   Address: 010660b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall A_Buffer::BuildSubPixelMaskTable(void) */

void __thiscall A_Buffer::BuildSubPixelMaskTable(A_Buffer *this)

{
  int iVar1;
  undefined4 uVar2;
  A_Buffer AVar3;
  int iVar4;
  int iVar5;
  A_Buffer *pAVar6;
  
                    /* 0x660b0  20  ?BuildSubPixelMaskTable@A_Buffer@@AAEXXZ */
  iVar4 = 0;
  do {
    AVar3 = (A_Buffer)0x0;
    iVar5 = 0x10;
    iVar1 = iVar4;
    do {
      AVar3 = (A_Buffer)((char)AVar3 + (((byte)iVar1 & 1) == 1));
      iVar1 = iVar1 >> 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    this[iVar4 + 0x26bc] = AVar3;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10000);
  iVar4 = 0;
  pAVar6 = this + 0x126cc;
  do {
    _CIpow();
    uVar2 = ftol();
    *(undefined4 *)pAVar6 = uVar2;
    iVar4 = iVar4 + 1;
    pAVar6 = pAVar6 + 4;
  } while (iVar4 < 0x400);
  *(undefined4 *)(this + 0x136cc) = 0x400;
  return;
}


