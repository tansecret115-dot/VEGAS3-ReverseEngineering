/* Module: vidcap30.exe
   Function: FUN_00427660
   Address: 00427660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00427660(int *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  if (*param_1 == 8) {
    if ((param_1[0x53] & 0x40U) != 0) {
      param_1[0x52] = param_1[0x52];
      param_1[0x53] = param_1[0x53] | 0x800;
      param_1[0xe4] = param_4;
      param_1[0xe2] = param_2;
      param_1[0xe6] = param_6;
      param_1[0xe3] = param_3;
      param_1[0xe5] = param_5;
      param_1[0xe7] = param_7;
      uVar2 = ftol();
      iVar3 = param_2 - uVar2;
      param_3 = param_3 - (uint)(param_2 < uVar2);
      if ((param_3 < 1) && (param_3 < 0)) {
        iVar3 = 0;
        param_3 = 0;
      }
      uVar1 = FUN_00427780(param_1,iVar3,param_3);
    }
  }
  return uVar1;
}


