/* Module: encn3260.dll
   Function: FUN_66482a10
   Address: 66482a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66482a10(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  char *_Str;
  
  piVar1 = param_1;
  if (param_2 != 0) {
    FUN_66483190(param_1 + -5,param_2,s_Unable_to_authenticate_664e21ac);
    return 0;
  }
  if (param_3 != (int *)0x0) {
    param_1 = (int *)0x0;
    (**(code **)(*param_3 + 0x30))(param_3,s_RMEncoderTransportSupportLevel_664e218c,&param_1);
    if (param_1 != (int *)0x0) {
      iVar2 = (**(code **)(*param_1 + 0x1c))(param_1);
      if (iVar2 != 0) {
        _Str = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
        iVar2 = atoi(_Str);
        *(int *)((int)piVar1 + 0x7e) = iVar2;
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
    }
  }
  piVar1 = (int *)piVar1[6];
  (**(code **)(*piVar1 + 0x10))(piVar1);
  return 0;
}


