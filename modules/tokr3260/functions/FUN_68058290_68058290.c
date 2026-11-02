/* Module: tokr3260.dll
   Function: FUN_68058290
   Address: 68058290
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_68058290(char param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 1 << (param_1 - 1U & 0x1f);
  uVar2 = 1;
  uVar1 = 0;
  do {
    if ((param_2 & uVar3) != 0) {
      uVar1 = uVar1 | uVar2;
    }
    uVar3 = (int)uVar3 >> 1;
    uVar2 = uVar2 << 1;
  } while (uVar3 != 0);
  return uVar1;
}


