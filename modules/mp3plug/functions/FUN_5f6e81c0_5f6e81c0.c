/* Module: mp3plug.dll
   Function: FUN_5f6e81c0
   Address: 5f6e81c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_5f6e81c0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uStack0000000c;
  
  puVar1 = (undefined4 *)FUN_5f6d9760(0x9cc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    uVar2 = FUN_5f6d9760(0x900);
    puVar1[0x14c] = uVar2;
    uVar2 = FUN_5f6d9760(0x900);
    puVar1[0x14d] = uVar2;
    uVar2 = FUN_5f6d9760(0x900);
    puVar1[3] = uVar2;
    uVar2 = FUN_5f6d9760(0x900);
    puVar1[5] = uVar2;
    uVar2 = FUN_5f6d9760(0x900);
    puVar1[4] = uVar2;
    uStack0000000c = 0x32;
    uVar2 = FUN_5f6d9760(0x900);
    puVar1[6] = uVar2;
    if ((((puVar1[0x14c] != 0) && (puVar1[0x14d] != 0)) && (puVar1[3] != 0)) &&
       (((puVar1[5] != 0 && (puVar1[4] != 0)) && (puVar1[6] != 0)))) {
      return puVar1;
    }
    FUN_5f6e8304();
  }
  return (undefined4 *)0x0;
}


