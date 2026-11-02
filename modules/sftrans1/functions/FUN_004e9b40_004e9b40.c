/* Module: sftrans1.dll
   Function: FUN_004e9b40
   Address: 004e9b40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004e9b40(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x20;
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    iVar3 = iVar3 + -1;
    iVar2 = (uint)*(byte *)((uVar1 & 0xffff) + 0x26bc + param_1) + iVar2 +
            (uint)*(byte *)((uVar1 >> 0x10) + 0x26bc + param_1);
  } while (iVar3 != 0);
  return iVar2;
}


