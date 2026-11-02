/* Module: vegas30.exe
   Function: FUN_005d9780
   Address: 005d9780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d9780(int param_1)

{
  undefined4 uVar1;
  
  FUN_005b83b0(param_1,1);
  uVar1 = _SfList_CreateExZ_32(param_1 + 0x218,8,0xffffffff,0xffffffff,0x40000002,0,0,0);
  FUN_005b84d0(param_1,1);
  return uVar1;
}


