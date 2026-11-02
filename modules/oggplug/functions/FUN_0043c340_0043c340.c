/* Module: oggplug.dll
   Function: FUN_0043c340
   Address: 0043c340
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_0043c340(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_3 & 0x7fff;
  uVar2 = (param_4 & 0x7fff) - uVar3;
  iVar1 = (int)(((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) * (param_5 - param_1)) /
          (param_2 - param_1);
  if ((int)uVar2 < 0) {
    return uVar3 - iVar1;
  }
  return iVar1 + uVar3;
}


