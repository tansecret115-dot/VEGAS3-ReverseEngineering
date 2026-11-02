/* Module: 50comupd.exe
   Function: FUN_010069ee
   Address: 010069ee
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_010069ee(short param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == *(short *)((int)param_2 + 0xb2)) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_01006a37(param_2);
    if (iVar1 == 0) {
      FUN_01006dcb((undefined4 *)*param_2,7,0);
      bVar2 = false;
    }
    else {
      *(short *)((int)param_2 + 0xb2) = param_1;
      iVar1 = FUN_01006aa4(param_2);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}


