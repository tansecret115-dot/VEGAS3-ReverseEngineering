/* Module: rmme3260.dll
   Function: FUN_66248fa0
   Address: 66248fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66248fa0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80004005;
  iVar1 = FUN_6624b6a0((uint *)(param_1 + 0x48),(uint *)(param_1 + 0x11ac),0,
                       (uint *)(param_1 + 0x15f0),(uint *)(param_1 + 0x15f4));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}


