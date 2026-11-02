/* Module: g2plug.dll
   Function: FUN_5f83f810
   Address: 5f83f810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_5f83f810(uint *param_1)

{
  uint uVar1;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar2;
  
  uVar4 = rdtsc();
  uVar6 = (uint)((ulonglong)uVar4 >> 0x20);
  uVar5 = (uint)uVar4;
  uVar1 = *param_1;
  uVar2 = *param_1;
  *param_1 = uVar5;
  uVar3 = param_1[1];
  param_1[1] = uVar6;
  return CONCAT44((uVar6 - uVar3) - (uint)(uVar5 < uVar1),uVar5 - uVar2);
}


