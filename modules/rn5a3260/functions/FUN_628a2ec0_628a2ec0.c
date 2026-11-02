/* Module: rn5a3260.dll
   Function: FUN_628a2ec0
   Address: 628a2ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_628a2ec0(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char *_Str1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  
  _Str1 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
  iVar2 = _strnicmp(_Str1,&DAT_628a70a4,3);
  if (iVar2 != 0) {
    return 0x80004005;
  }
  piVar3 = operator_new(0x6c);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = (int)&PTR_LAB_628a6a88;
    piVar3[1] = 0;
    FUN_628a4fa0(piVar3 + 2,10);
    FUN_628a4fa0(piVar3 + 9,10);
    FUN_628a4fa0(piVar3 + 0x10,10);
    piVar3[0x17] = 0;
    piVar3[0x18] = 0;
    piVar3[0x19] = 0;
    piVar3[0x1a] = 0;
    *piVar3 = (int)&PTR_FUN_628a6a48;
  }
  puVar1 = param_2;
  *param_2 = piVar3;
  (**(code **)(*piVar3 + 4))(piVar3);
  pcVar4 = (char *)0x0;
  param_1 = (int *)0x0;
  piVar3 = *(int **)((int)this + 0x70);
  if (piVar3 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,s_Rotuma_628a72f8,&param_1);
    if (iVar2 == 0) {
      pcVar4 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
      pcVar4 = (char *)FUN_628a3350(pcVar4);
      piVar3 = (int *)*puVar1;
      pcVar5 = pcVar4;
      goto LAB_628a2f99;
    }
  }
  piVar3 = (int *)*puVar1;
  pcVar5 = s_GUIDLESS_CLIENT_628a72e8;
LAB_628a2f99:
  FUN_628a1ee0(piVar3,&DAT_628a7284,pcVar5);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
    param_1 = (int *)0x0;
  }
  if (pcVar4 != (char *)0x0) {
    operator_delete(pcVar4);
  }
  FUN_628a2dd0(_Str1 + 3,(int *)*puVar1);
  return 0;
}


