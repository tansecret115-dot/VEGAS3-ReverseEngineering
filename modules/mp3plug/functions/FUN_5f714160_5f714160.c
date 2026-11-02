/* Module: mp3plug.dll
   Function: FUN_5f714160
   Address: 5f714160
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5f714160(void *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_5f714084(param_1,0x10);
  uVar2 = FUN_5f714084(param_1,0x10);
  return uVar2 | uVar1 << 0x10;
}


