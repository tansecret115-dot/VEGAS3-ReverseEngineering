/* Module: rmbe3260.dll
   Function: FUN_660412b0
   Address: 660412b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_660412b0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x1d4);
  uVar1 = *(uint *)(param_1 + 0x7a);
  if (uVar3 < uVar1) {
    uVar3 = (uVar3 - uVar1) - 1;
  }
  else {
    uVar3 = uVar3 - uVar1;
  }
  if (_DAT_660680f8 < (double)uVar3 * _DAT_660680f0) {
    uVar2 = ftol();
    *(undefined4 *)(param_1 + 0x270) = uVar2;
  }
  if (*(int *)(param_1 + 0x230) != 0) {
    uVar2 = ftol();
    *(undefined4 *)(param_1 + 0x274) = uVar2;
  }
  if (*(int *)(param_1 + 0x1d4) != 0) {
    uVar2 = ftol();
    *(undefined4 *)(param_1 + 0x278) = uVar2;
  }
  return;
}


