/* Module: vidcap30.exe
   Function: FUN_004514b0
   Address: 004514b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004514b0(int param_1,uchar *param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  uchar local_104 [260];
  
  if (param_2 == (uchar *)0x0) {
    param_2 = (uchar *)(param_1 + 0xbc);
  }
  if ((*(int *)(param_1 + 0x1c8) != 0) || (iVar1 = param_4, *param_2 == '\0')) {
    iVar1 = 1;
  }
  if (*param_2 == '\0') {
    local_104[0] = '\0';
  }
  else {
    _mbscpy(local_104,param_2);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_0042f800(local_104,0x104,&param_3,param_6,0);
    if (iVar1 < 0) {
      return;
    }
    param_2 = local_104;
  }
  FUN_00451570(param_1,param_2,param_3 == 2,param_5);
  return;
}


