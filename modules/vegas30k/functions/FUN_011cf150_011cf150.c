/* Module: vegas30k.dll
   Function: FUN_011cf150
   Address: 011cf150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011cf150(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  
  FUN_011cb0f0(param_2);
  puVar1 = (undefined4 *)param_1[0x18];
  *param_1 = &PTR_LAB_011ec528;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 4) = 0;
  puVar2 = (undefined2 *)param_1[0x18];
  *puVar2 = 1;
  puVar2[1] = 2;
  *(undefined4 *)(puVar2 + 2) = 0xac44;
  puVar2[7] = 0x10;
  puVar2[6] = 4;
  *(undefined4 *)(puVar2 + 4) = 0x2b110;
  puVar2[8] = 0;
  param_1[0xbe] = param_2;
  param_1[0xce] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  return param_1;
}


