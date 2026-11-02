/* Module: mpgmux.dll
   Function: FUN_1000b520
   Address: 1000b520
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000b520(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((*(int *)(param_1 + 0x11f8) != 0) && (*(int *)(param_1 + 0x2628) != 0)) {
    *(int *)(*(int *)(param_1 + 0x11f8) + 0xc) = *(int *)(param_1 + 0x2628);
    *(undefined4 *)(param_1 + 0x2628) = 0;
  }
  *(undefined4 *)(param_1 + 0x2630) = 0;
  *(undefined4 *)(param_1 + 0x2634) = 0;
  *(undefined4 *)(param_1 + 0x2dc4) = 0;
  *(undefined4 *)(param_1 + 0x2dbc) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x263c);
  for (iVar1 = 0x1e0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(param_1 + 0x262c) != 0) {
    (**(code **)(param_1 + 0x2624))(*(int *)(param_1 + 0x262c));
    *(undefined4 *)(param_1 + 0x262c) = 0;
  }
  return;
}


