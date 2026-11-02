/* Module: vegas30k.dll
   Function: FUN_011b0b40
   Address: 011b0b40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011b0b40(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 3) & 4) != 0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1,0,0);
  if (-1 < iVar1) {
    uVar2 = FUN_011aafa0(param_1);
    FUN_011aaf70(param_1,uVar2 & 0xffffffef | 4);
    param_1[3] = param_1[3] & 0xffffffefU | 4;
  }
  return iVar1;
}


