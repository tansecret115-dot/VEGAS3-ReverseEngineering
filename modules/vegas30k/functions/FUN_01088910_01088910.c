/* Module: vegas30k.dll
   Function: FUN_01088910
   Address: 01088910
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01088910(int param_1,tagTT_SRPTI *param_2)

{
  int iVar1;
  int iVar2;
  tagTT_SRP *ptVar3;
  
  _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x24),0,0xffffffff,1);
  SfCdiSwap_TT_SRPTI(param_2);
  iVar2 = 0;
  ptVar3 = (tagTT_SRP *)(param_2 + 8);
  if (*(short *)param_2 == 0) {
    iVar1 = 0;
  }
  else {
    while( true ) {
      SfCdiSwap_TT_SRP(ptVar3);
      iVar1 = _SfList_AllocAndInsertItem_20(*(undefined4 *)(param_1 + 0x24),ptVar3,0xc,0xffffffff,0)
      ;
      if (iVar1 < 0) break;
      iVar2 = iVar2 + 1;
      ptVar3 = ptVar3 + 0xc;
      if ((int)(uint)*(ushort *)param_2 <= iVar2) {
        return iVar1;
      }
    }
  }
  return iVar1;
}


