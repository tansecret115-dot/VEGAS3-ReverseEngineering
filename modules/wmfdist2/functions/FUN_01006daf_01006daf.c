/* Module: wmfdist2.exe
   Function: FUN_01006daf
   Address: 01006daf
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01006daf(short param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == *(short *)((int)param_2 + 0xb2)) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_01006df8(param_2);
    if (iVar1 == 0) {
      FUN_0100718c((undefined4 *)*param_2,7,0);
      bVar2 = false;
    }
    else {
      *(short *)((int)param_2 + 0xb2) = param_1;
      iVar1 = FUN_01006e65(param_2);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}


