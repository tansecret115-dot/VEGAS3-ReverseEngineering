/* Module: erv23260.dll
   Function: FUN_63826497
   Address: 63826497
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __fastcall FUN_63826497(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  int unaff_EDI;
  
  iVar5 = 0;
  iVar6 = unaff_ESI - unaff_EDI;
  if (iVar6 != 0) {
    bVar1 = *(byte *)(iVar6 + 2 + unaff_EDI);
    bVar2 = *(byte *)(iVar6 + 3 + unaff_EDI);
    uVar4 = 0;
    do {
      uVar3 = (uint)bVar2;
      bVar2 = *(byte *)(iVar6 + 7 + unaff_EDI);
      iVar5 = iVar5 + uVar4;
      uVar4 = (uint)(byte)(&DAT_63838810)
                          [(uint)(byte)(&DAT_638382b0)[(uint)bVar1 * 2] +
                           (uint)(byte)(&DAT_638383b0)[uVar3]];
      bVar1 = *(byte *)(iVar6 + 6 + unaff_EDI);
      iVar6 = iVar6 + 4;
    } while (iVar6 != 0);
    iVar5 = iVar5 + uVar4;
  }
  return CONCAT44(param_2,iVar5);
}


