/* Module: pncrt.dll
   Function: FUN_78008ba0
   Address: 78008ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78008ba0(void)

{
  if (PTR___fpmath_78040d08 != (undefined *)0x0) {
    (*(code *)PTR___fpmath_78040d08)();
  }
  initterm((undefined4 *)&DAT_7803d00c,(undefined4 *)&DAT_7803d020);
  initterm((undefined4 *)&DAT_7803d000,(undefined4 *)&DAT_7803d008);
  return;
}


