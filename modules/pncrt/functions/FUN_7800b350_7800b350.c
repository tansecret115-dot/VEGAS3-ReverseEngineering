/* Module: pncrt.dll
   Function: FUN_7800b350
   Address: 7800b350
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_7800b350(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_780421ec = DAT_780421ec + 1, DAT_780421ec == 0x20)) {
    FUN_7800b220(0x10);
  }
  return;
}


