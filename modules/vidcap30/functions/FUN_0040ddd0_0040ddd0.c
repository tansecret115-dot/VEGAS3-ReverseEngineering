/* Module: vidcap30.exe
   Function: FUN_0040ddd0
   Address: 0040ddd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040ddd0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2;
  iVar1 = param_1;
  iVar4 = _SfList_FindSpecificItemRange_16(*(undefined4 *)(param_1 + 0x88),0,0xffffffff,param_2);
  iVar3 = param_3;
  if (((byte)*(undefined4 *)(iVar2 + 0xc) & 3) == 3) {
    if (iVar4 < 0) {
      param_1 = iVar2;
      _SfList_InsertList_16(*(undefined4 *)(iVar1 + 0x88),0xffffffff,&param_1,1);
      FUN_0040da40(iVar1,iVar3 + 0x1c,iVar2);
      FUN_0040d120(iVar1,iVar2,iVar3,1);
      return;
    }
  }
  else if (-1 < iVar4) {
    _SfList_DeleteList_16(*(undefined4 *)(iVar1 + 0x88),iVar4,1,0);
    FUN_0040dbf0(iVar1,iVar2);
  }
  FUN_0040d120(iVar1,iVar2,iVar3,1);
  return;
}


