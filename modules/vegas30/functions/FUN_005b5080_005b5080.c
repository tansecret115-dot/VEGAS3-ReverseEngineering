/* Module: vegas30.exe
   Function: FUN_005b5080
   Address: 005b5080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_005b5080(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  puVar2 = param_1 + 0x47;
  for (iVar1 = 0x2b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x72] = 0xc;
  param_1[0x70] = 0xc;
  return param_1;
}


