/* Module: vegas30k.dll
   Function: FUN_01191690
   Address: 01191690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01191690(int param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  _SfGetMillisec_0();
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 4) != 0)) {
    uVar2 = _SFSMPTE_SMPTEToNanos_4(param_1 + 0x44);
    *param_2 = uVar2;
  }
  return 0;
}


