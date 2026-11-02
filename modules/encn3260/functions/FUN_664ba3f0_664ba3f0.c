/* Module: encn3260.dll
   Function: FUN_664ba3f0
   Address: 664ba3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_664ba3f0(uint *param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = *param_1;
  if (((uVar1 & 1) != 0) && (param_1[1] == param_2)) {
    uVar2 = 1;
  }
  if (((uVar1 & 2) != 0) && (param_1[2] == param_3)) {
    uVar2 = uVar2 | 2;
  }
  if (((((uVar1 & 4) != 0) && (param_4 != (uint *)0x0)) && (param_1[3] == *param_4)) &&
     ((param_1[4] == param_4[1] && (param_1[5] == param_4[2])))) {
    uVar2 = uVar2 | 4;
  }
  return uVar2 == uVar1;
}


