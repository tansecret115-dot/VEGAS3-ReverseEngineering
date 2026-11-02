/* Module: vegas30.exe
   Function: FUN_0043f3e0
   Address: 0043f3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043f3e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xffff) {
    uVar1 = _SfGetString_8(DAT_00647204,0x126);
    SfPrintF(param_2,uVar1);
    return;
  }
  iVar2 = FUN_0043f440(param_1,0);
  SfPrintF(param_2,&DAT_00611f48,(&DAT_0063dd60)[iVar2]);
  return;
}


