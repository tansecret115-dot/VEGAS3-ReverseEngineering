/* Module: vidcap30.exe
   Function: FUN_0043adc0
   Address: 0043adc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043adc0(int param_1)

{
  float10 fVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_104 [260];
  
  lVar2 = FUN_0042ea00(DAT_005bb838);
  if ((lVar2 < 0x100000000) && (lVar2 < 0)) {
    lVar2 = 0;
  }
  puVar3 = local_104;
  uVar4 = 0x104;
  fVar1 = (float10)FUN_0042ed90();
  FUN_0045aec0(lVar2,(double)fVar1,puVar3,uVar4);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13dc),0xc,0,local_104);
  return;
}


