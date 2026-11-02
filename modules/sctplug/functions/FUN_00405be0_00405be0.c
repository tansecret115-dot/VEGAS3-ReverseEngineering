/* Module: sctplug.dll
   Function: FUN_00405be0
   Address: 00405be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00405be0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 0x50);
  if (puVar2 != (ushort *)0x0) {
    uVar1 = *puVar2;
    if (uVar1 < 4) {
      if ((uVar1 != 3) && (uVar1 != 1)) {
        return 1;
      }
    }
    else {
      if (uVar1 < 0xfe00) {
        return 1;
      }
      if (0xfe02 < uVar1) {
        return 1;
      }
    }
    if ((uint)puVar2[6] != (uint)(puVar2[7] >> 3) * (uint)puVar2[1]) {
      return 1;
    }
  }
  return 0;
}


