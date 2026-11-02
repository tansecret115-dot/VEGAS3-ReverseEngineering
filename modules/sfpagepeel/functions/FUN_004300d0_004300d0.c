/* Module: sfpagepeel.dll
   Function: FUN_004300d0
   Address: 004300d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_004300d0(int param_1)

{
  undefined *puVar1;
  bool bVar2;
  
  bVar2 = param_1 < 0;
  if (bVar2) {
    param_1 = -param_1;
  }
  if (param_1 < 100) {
    puVar1 = (undefined *)GetSysColor(param_1);
    return puVar1;
  }
  if (0x3a < param_1 - 100U) {
    return (undefined *)0xffffffff;
  }
  puVar1 = *(undefined **)(u_MS_Sans_Serif_0047cc2a + param_1 * 2 + 7);
  if (bVar2) {
    puVar1 = (&PTR_s__02u___02u___02u___03u_00475694)[param_1];
  }
  if (((uint)puVar1 & 0xff000000) == 0x4000000) {
    puVar1 = (undefined *)GetSysColor((uint)puVar1 & 0xffffff);
    return puVar1;
  }
  if (((uint)puVar1 & 0xff000000) == 0x5000000) {
    puVar1 = (undefined *)FUN_00430000((uint)puVar1 & 0xffffff);
  }
  return puVar1;
}


