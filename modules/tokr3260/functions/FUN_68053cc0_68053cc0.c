/* Module: tokr3260.dll
   Function: FUN_68053cc0
   Address: 68053cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68053cc0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x4278) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x114);
  for (iVar1 = 0x1059; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x427c);
  for (iVar1 = 0x380; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


