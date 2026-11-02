/* Module: sfpublish.dll
   Function: FUN_004057b0
   Address: 004057b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004057b0(int param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  if (param_2 == 0) {
    puVar2 = (ushort *)(param_1 + 0x12);
  }
  else {
    puVar2 = (ushort *)(param_1 + 0x18);
  }
  uVar1 = *puVar2;
  if (uVar1 == 0xffff) {
    puVar2 = puVar2 + 2;
  }
  else {
    while (puVar2 = puVar2 + 1, uVar1 != 0) {
      uVar1 = *puVar2;
    }
  }
  uVar1 = *puVar2;
  if (uVar1 == 0xffff) {
    return puVar2[2] + 5 + (int)(puVar2 + 2) & 0xfffffffc;
  }
  while (puVar2 = puVar2 + 1, uVar1 != 0) {
    uVar1 = *puVar2;
  }
  return *puVar2 + 5 + (int)puVar2 & 0xfffffffc;
}


