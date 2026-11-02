/* Module: vegas30.exe
   Function: FUN_005382e0
   Address: 005382e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005382e0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 local_8 [4];
  int local_4;
  
  puVar3 = local_8;
  uVar1 = _SfGetUIFont_4(100);
  _SfGetFontSize_8(uVar1,puVar3);
  uVar2 = local_4 + 1U & 0xfffffffe;
  if (param_1 == 0) {
    uVar2 = ((int)(local_4 + 1U) >> 1) + 1U | 1;
  }
  return uVar2;
}


