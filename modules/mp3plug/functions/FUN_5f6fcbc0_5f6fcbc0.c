/* Module: mp3plug.dll
   Function: FUN_5f6fcbc0
   Address: 5f6fcbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6fcbc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = param_1 + 0x12;
  puVar2 = param_1 + 0x480;
  do {
    FUN_5f6d5090(puVar1,param_1,0x12);
    param_1 = param_1 + 0x24;
    puVar1 = puVar1 + 0x24;
  } while ((int)param_1 < (int)puVar2);
  return 0;
}


