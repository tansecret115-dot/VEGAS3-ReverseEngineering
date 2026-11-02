/* Module: sftrans1.dll
   Function: FUN_00542c40
   Address: 00542c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00542c40(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = FUN_004dd740(param_1 + 1,0x44,0xffffffff,0xffffffff,0x80000002,0,0,0);
  if (-1 < iVar1) {
    iVar1 = FUN_004dd740(param_1 + 3,8,0xffffffff,0xffffffff,0x80000004,0,0,0);
    if (-1 < iVar1) {
      param_1[5] = 1;
    }
  }
  return;
}


