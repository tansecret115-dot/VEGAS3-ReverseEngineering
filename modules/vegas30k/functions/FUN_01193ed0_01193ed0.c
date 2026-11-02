/* Module: vegas30k.dll
   Function: FUN_01193ed0
   Address: 01193ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_01193ed0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int unaff_retaddr;
  
  param_1[0x13e] = *param_2;
  param_1[0x13f] = param_2[1];
  param_1[0x140] = param_2[2];
  param_1[0x141] = param_2[3];
  iVar1 = param_2[4];
  param_1[8] = param_1[8] & 0xffff3fff;
  *(short *)(param_1 + 0x142) = (short)iVar1;
  iVar1 = (**(code **)(*param_1 + 300))(0,0);
  if (-1 < iVar1) {
    param_1[0x1b9] = (int)param_2;
    param_1[0x1c0] = 0;
    param_1[8] = param_1[8] | 0x100;
    param_1[0x1b8] = unaff_retaddr;
    param_1[0x1c1] = 0;
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 | 0x100);
    iVar1 = 0;
  }
  return iVar1;
}


