/* Module: vegas30k.dll
   Function: FUN_01191640
   Address: 01191640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01191640(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  _SfGetMillisec_0();
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 4) != 0)) {
    uVar3 = _SFSMPTE_SMPTEToNanos_4(param_1 + 0x44);
    uVar2 = __alldiv(uVar3,10000,0);
    *param_2 = uVar2;
  }
  return 0;
}


