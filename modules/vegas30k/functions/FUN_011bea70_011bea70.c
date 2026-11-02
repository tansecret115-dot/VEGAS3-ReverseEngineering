/* Module: vegas30k.dll
   Function: FUN_011bea70
   Address: 011bea70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011bea70(int *param_1,int *param_2)

{
  int iVar1;
  int unaff_EBP;
  int unaff_ESI;
  undefined8 uVar2;
  undefined1 local_8 [8];
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[0x18e] == 0) {
    return -0x7fff0001;
  }
  iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,local_8);
  if (-1 < iVar1) {
    if ((unaff_ESI == param_1[0x15a]) && (unaff_EBP == param_1[0x15b])) {
      *param_2 = param_1[0x158];
      param_2[1] = param_1[0x159];
      return iVar1;
    }
    if (param_1[0x13f] == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      return iVar1;
    }
    uVar2 = ftol();
    *(undefined8 *)param_2 = uVar2;
  }
  return iVar1;
}


