/* Module: mpgaout.dll
   Function: FUN_10006070
   Address: 10006070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10006070(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)*param_2;
  uVar2 = (*puVar1 & 1) << 0x13 | 0xfff00000 | (4 - puVar1[1] & 3) << 0x11;
  if (puVar1[2] == 0) {
    uVar2 = uVar2 | 0x10000;
  }
  (**(code **)(*(int *)(param_1 + 0x44e00) + 0xc))
            (*(int *)(param_1 + 0x44e00),
             uVar2 | (puVar1[3] & 0xf) << 0xc | (puVar1[4] & 3) << 10 | (puVar1[5] & 1) << 9 |
             (puVar1[6] & 1) << 8 | (puVar1[7] & 3) << 6 | (puVar1[8] & 3) << 4 |
             (puVar1[9] & 1) << 3 | (puVar1[10] & 1) << 2 | puVar1[0xb] & 3,puVar1);
  return;
}


