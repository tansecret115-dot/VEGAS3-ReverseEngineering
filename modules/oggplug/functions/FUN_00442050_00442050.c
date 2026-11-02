/* Module: oggplug.dll
   Function: FUN_00442050
   Address: 00442050
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00442050(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + param_1[1];
  param_1[1] = uVar2 & 7;
  iVar1 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  param_1[3] = param_1[3] + iVar1;
  *param_1 = *param_1 + iVar1;
  return;
}


