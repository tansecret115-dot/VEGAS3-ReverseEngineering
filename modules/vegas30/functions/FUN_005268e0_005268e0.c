/* Module: vegas30.exe
   Function: FUN_005268e0
   Address: 005268e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005268e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = _SfGetString_8(DAT_00647204,0x4f79);
  iVar2 = SfMsgBox(*(undefined4 *)(param_1 + 8),0x31,uVar1,param_2);
  return -(uint)(iVar2 != 1) & 0x80004004;
}


