/* Module: vidpcore.dll
   Function: FUN_5de5c930
   Address: 5de5c930
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5de5c930(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_5de9f070();
  *(undefined ***)(param_1 + 0xbc) = &PTR_LAB_5df1c7b4;
  *(undefined **)(param_1 + 0xd4) = &DAT_5df38c38;
  *(undefined **)(param_1 + 0xd8) = &DAT_5df38c28;
  *(undefined **)(param_1 + 0xdc) = &DAT_5df38c18;
  *(undefined **)(param_1 + 0xe0) = &DAT_5df38c08;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined ***)(param_1 + 0xf0) = &PTR_LAB_5df186b8;
  puVar2 = (undefined4 *)(param_1 + 0xf8);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x3ff00000;
  *(undefined ***)(param_1 + 0x124) = &PTR_LAB_5df1a608;
  *(undefined4 *)(param_1 + 300) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
  return param_1;
}


