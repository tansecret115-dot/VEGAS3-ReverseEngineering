/* Module: rmbe3260.dll
   Function: FUN_6603eb20
   Address: 6603eb20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6603eb20(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined2 *)((int)param_1 + 0x3e) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0xffff;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  FUN_6605b650((undefined4 *)((int)param_1 + 0x46));
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  *(undefined4 *)((int)param_1 + 0x66) = 0;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(undefined4 *)((int)param_1 + 0x72) = 0;
  *(undefined4 *)((int)param_1 + 0x76) = 0;
  *(undefined4 *)((int)param_1 + 0x7a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x7e) = 0;
  FUN_6605b650((undefined4 *)((int)param_1 + 0x82));
  *param_1 = &PTR_FUN_66067fd8;
  puVar2 = param_1;
  for (iVar1 = 0xe; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  *(undefined2 *)puVar2 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x8e));
  return param_1;
}


