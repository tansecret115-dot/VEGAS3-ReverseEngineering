/* Module: encn3260.dll
   Function: FUN_66492b90
   Address: 66492b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66492b90(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if ((uVar1 == 0) || (uVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = ~-(uint)(uVar2 < (uVar1 + uVar2) - uVar1) & uVar1 + uVar2;
  }
  if (uVar3 == 0) {
    *param_2 = 0;
    return 0x80040009;
  }
  *param_2 = uVar1 + (uVar2 - uVar3);
  *param_1 = uVar3;
  return 0x80040009;
}


