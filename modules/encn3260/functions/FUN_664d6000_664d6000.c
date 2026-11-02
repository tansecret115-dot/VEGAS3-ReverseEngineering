/* Module: encn3260.dll
   Function: FUN_664d6000
   Address: 664d6000
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_664d6000(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (-(uint)(param_1[5] != 1) & 0xfffffffb) + 0x1e;
  uVar4 = (param_1[9] * uVar3) / 1000;
  uVar1 = uVar4 / (uVar3 * 0xe10);
  *param_1 = uVar1;
  uVar1 = uVar4 + uVar3 * uVar1 * -0xe10;
  uVar2 = uVar1 / (uVar3 * 0x3c);
  param_1[1] = uVar2;
  param_1[2] = (uVar1 + uVar3 * uVar2 * -0x3c) / uVar3;
  param_1[3] = uVar4 % uVar3;
  return uVar4 / uVar3;
}


