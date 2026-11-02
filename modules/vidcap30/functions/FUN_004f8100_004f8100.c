/* Module: vidcap30.exe
   Function: FUN_004f8100
   Address: 004f8100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f8100(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HCURSOR pHVar1;
  undefined4 uVar2;
  
  pHVar1 = (HCURSOR)_SfGetUICursor_4(0x7f8a);
  pHVar1 = SetCursor(pHVar1);
  uVar2 = FUN_004f8150(param_1,*(undefined4 *)(param_1 + 0x18),0xffff0000,param_2,param_3,param_4);
  SetCursor(pHVar1);
  return uVar2;
}


