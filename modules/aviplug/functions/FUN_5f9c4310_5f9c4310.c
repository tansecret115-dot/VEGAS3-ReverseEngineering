/* Module: aviplug.dll
   Function: FUN_5f9c4310
   Address: 5f9c4310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5f9c4310(int param_1)

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
  puVar1 = (undefined *)(&DAT_5f9f36f8)[param_1];
  if (bVar2) {
    puVar1 = (&PTR_LAB_5f9ed7b4)[param_1];
  }
  if (((uint)puVar1 & 0xff000000) == 0x4000000) {
    puVar1 = (undefined *)GetSysColor((uint)puVar1 & 0xffffff);
    return puVar1;
  }
  if (((uint)puVar1 & 0xff000000) == 0x5000000) {
    puVar1 = (undefined *)FUN_5f9c4240((uint)puVar1 & 0xffffff);
  }
  return puVar1;
}


