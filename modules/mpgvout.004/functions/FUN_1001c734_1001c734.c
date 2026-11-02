/* Module: mpgvout.004
   Function: FUN_1001c734
   Address: 1001c734
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_1001c734(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)ROUND(*(double *)(param_1 + 0x68) + _DAT_1001c72c);
  uVar2 = param_2 % iVar1;
  iVar1 = (int)(param_2 - uVar2) / iVar1;
  iVar4 = iVar1 % 0x3c;
  iVar1 = (iVar1 - iVar4) / 0x3c;
  iVar3 = iVar1 % 0x3c;
  return (((iVar1 - iVar3) / 0x3c) % 0x18) * 0x80000 | iVar3 * 0x2000 | iVar4 * 0x40 | 0x1000U |
         uVar2;
}


