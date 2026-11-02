/* Module: vidcap30.exe
   Function: FUN_0044f7c0
   Address: 0044f7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044f7c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = 0;
  iVar1 = FUN_0044c6e0(param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_0045f640(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),&param_1,param_2,0xffffffff,iVar1)
    ;
    if (iVar2 == -0x7ffb1fce) {
      uVar4 = *(undefined4 *)(iVar1 + 0x10);
      uVar3 = 0xc50f;
    }
    else {
      if (-1 < iVar2) {
        return iVar2;
      }
      uVar4 = *(undefined4 *)(iVar1 + 0x10);
      uVar3 = 0xc510;
    }
    uVar3 = _SfGetString_8(DAT_005ba2a0,uVar3);
    SfErrorHandler_DetailsAddString(0,uVar3,uVar4);
  }
  return iVar2;
}


