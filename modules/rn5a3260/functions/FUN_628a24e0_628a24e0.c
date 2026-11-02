/* Module: rn5a3260.dll
   Function: FUN_628a24e0
   Address: 628a24e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a24e0(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char *_Str2;
  char *_Str1;
  int iVar4;
  
  piVar3 = param_1;
  param_1[0xe] = 0;
  if ((-1 < (int)param_2) && (param_4 != (int *)0x0)) {
    piVar2 = param_1 + 0xf;
    piVar1 = param_1 + -0xc;
    param_2 = (int *)0x0;
    param_1 = (int *)0x0;
    FUN_628a29b0((int *)*piVar2,param_4,&param_2);
    (**(code **)(*(int *)piVar3[0xf] + 0x30))((int *)piVar3[0xf],s_Response_628a7204,&param_1);
    if (param_1 != (int *)0x0) {
      if (param_2 != (int *)0x0) {
        _Str2 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
        _Str1 = (char *)(**(code **)(*param_2 + 0x1c))(param_2);
        iVar4 = _stricmp(_Str1,_Str2);
        if (iVar4 == 0) {
          piVar3[0xe] = 1;
          (**(code **)(*(int *)piVar3[0x11] + 0xc))((int *)piVar3[0x11],piVar1);
        }
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  if ((piVar3[0xe] == 0) && (piVar2 = (int *)piVar3[0xc], piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 8))(piVar2);
    piVar3[0xc] = 0;
  }
  FUN_628a2230((int)(piVar3 + -0xc));
  return 0;
}


