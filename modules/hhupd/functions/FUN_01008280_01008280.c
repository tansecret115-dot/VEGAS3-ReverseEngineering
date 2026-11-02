/* Module: hhupd.exe
   Function: FUN_01008280
   Address: 01008280
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall
FUN_01008280(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined8 uVar3;
  
  if ((int)param_4 < 0x101) {
    iVar1 = 0x101 - param_4;
    if (param_5 <= (int)(0x101 - param_4)) {
      iVar1 = param_5;
    }
    uVar2 = FUN_010082e0(param_3,param_4,iVar1);
    param_5 = (param_5 - uVar2) + param_4;
    param_3[0xbb0] = uVar2;
    param_1 = extraout_ECX;
    param_2 = extraout_EDX;
    param_4 = uVar2;
    if (param_5 < 1) {
      return param_5;
    }
  }
  uVar3 = FUN_010090c3(param_1,param_2,param_3,param_4,param_5);
  return (int)uVar3;
}


