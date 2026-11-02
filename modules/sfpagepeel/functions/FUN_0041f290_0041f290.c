/* Module: sfpagepeel.dll
   Function: FUN_0041f290
   Address: 0041f290
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041f290(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*param_1 & 0x80) != 0) {
    param_2 = FUN_0041f310(param_1,param_2);
  }
  uVar1 = param_1[4];
  if (param_1[5] != uVar1) {
    iVar2 = (int)(((longlong)(int)(param_2 - uVar1) * (longlong)(int)param_1[0x17]) /
                 (longlong)(int)(param_1[5] - uVar1));
  }
  if ((param_1[3] & 8) != 0) {
    return (param_1[0x15] - param_1[0x19]) - iVar2;
  }
  return iVar2 + param_1[0x18] + param_1[0x12];
}


