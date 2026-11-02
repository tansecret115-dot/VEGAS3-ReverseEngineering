/* Module: pncrt.dll
   Function: FUN_78006e10
   Address: 78006e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_78006e10(undefined4 param_1)

{
  void *this;
  undefined4 *puVar1;
  
  this = (void *)FUN_78006050(&DAT_78041a90,0xc,0);
  if (this == (void *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_78006050(&DAT_78041a90,8,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = puVar1[1] & 0xffffff80;
    puVar1 = FUN_78006fc0(this,(int)puVar1);
    return puVar1;
  }
  puVar1 = FUN_78006fc0(this,0);
  return puVar1;
}


