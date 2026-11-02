/* Module: rmbe3260.dll
   Function: FUN_6604eb90
   Address: 6604eb90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6604eb90(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = *param_1 & 0xfffffffc;
    uVar2 = 0;
    *param_1 = uVar1;
    uVar3 = 0xffffff;
    if (param_2 == 1) {
      uVar2 = 0x20;
      uVar3 = 0x400;
    }
    if (param_2 == 2) {
      uVar2 = 0x20;
      uVar3 = 0x400;
    }
    if (uVar1 < uVar2) {
      *param_1 = uVar2;
      return;
    }
    if (uVar3 < uVar1) {
      *param_1 = uVar3;
    }
  }
  return;
}


