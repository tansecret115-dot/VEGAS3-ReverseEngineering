/* Module: vegas30.exe
   Function: FUN_005b5330
   Address: 005b5330
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005b5330(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  
  if (((*param_1 & 0x20) != 0) || (param_1[0x73] != 0)) {
    *param_1 = *param_1 & 0xffffffdf;
    param_1[0x72] = 0xc;
    puVar2 = param_1 + 0x47;
    for (iVar1 = 0x2b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1[0x70] = param_1[0x72];
    param_1[0x73] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 0x74) = 0;
    FUN_005b52c0();
  }
  return;
}


