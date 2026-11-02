/* Module: InstMsi-x86a.exe
   Function: FUN_01008a00
   Address: 01008a00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_01008a00(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((int)param_2 < 0x101) {
    iVar2 = 0x101 - param_2;
    if (param_3 <= (int)(0x101 - param_2)) {
      iVar2 = param_3;
    }
    uVar1 = FUN_01008a60(param_1,param_2,iVar2);
    param_3 = (param_3 - uVar1) + param_2;
    param_1[0xbb0] = uVar1;
    param_2 = uVar1;
    if (param_3 < 1) {
      return param_3;
    }
  }
  iVar2 = FUN_01008680(param_1,param_2,param_3);
  return iVar2;
}


