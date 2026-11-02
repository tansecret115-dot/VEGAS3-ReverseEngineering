/* Module: sfcdi.dll
   Function: FUN_5bf2bd60
   Address: 5bf2bd60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2bd60(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == (uint *)0x0) {
    return 0x80004003;
  }
  if (param_1[1] != 0) {
    uVar1 = 0;
    if (*param_1 != 0) {
      iVar2 = param_1[1] + 0x40;
      do {
        FUN_5bf2beb0(iVar2);
        iVar2 = iVar2 + 0x4c;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *param_1);
    }
    param_1[1] = 0;
    *param_1 = 0;
    return 0;
  }
  return 0x80004003;
}


