/* Module: vegas30k.dll
   Function: FUN_011d4950
   Address: 011d4950
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011d4950(int param_1)

{
  undefined4 uVar1;
  MMRESULT MVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x170) = 0x3c3;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  uVar1 = _SfGetMillisec_0();
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  MVar2 = midiInStart(*(HMIDIIN *)(param_1 + 0x160));
  iVar3 = FUN_011c2260(MVar2);
  if (-1 < iVar3) {
    FUN_011d4070(2,0,0,0);
  }
  return iVar3;
}


