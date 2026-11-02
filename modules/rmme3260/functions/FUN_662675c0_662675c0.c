/* Module: rmme3260.dll
   Function: FUN_662675c0
   Address: 662675c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662675c0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar4 = uVar1 + 0x773;
  uVar5 = uVar2 + 7;
  param_1[1] = uVar4;
  *param_1 = uVar5;
  uVar3 = param_1[2];
  uVar6 = uVar3 + 0x120d3;
  param_1[2] = uVar6;
  if (0x26f4 < uVar5) {
    *param_1 = uVar2 - 0x2688;
  }
  if (0x18696 < uVar4) {
    param_1[1] = uVar1 - 0x15812;
  }
  if (0x36dd8 < uVar6) {
    param_1[2] = uVar3 - 0x5716;
  }
  param_1[3] = *param_1 * param_1[3] + param_1[2] + param_1[1];
  return;
}


