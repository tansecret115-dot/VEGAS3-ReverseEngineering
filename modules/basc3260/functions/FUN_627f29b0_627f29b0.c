/* Module: basc3260.dll
   Function: FUN_627f29b0
   Address: 627f29b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f29b0(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char local_20c [256];
  char local_10c [260];
  int *local_8;
  
  local_8 = (int *)0x0;
  (**(code **)(*param_1 + 0x30))(param_1,s_WWW_Authenticate_627f60bc,&local_8);
  if (local_8 != (int *)0x0) {
    param_1 = (int *)(**(code **)(*local_8 + 0x1c))(local_8);
    iVar2 = _strnicmp((char *)param_1,s_Basic_627f60b4,5);
    if (iVar2 == 0) {
      bVar1 = false;
      piVar3 = operator_new(0x6c);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = (int)&PTR_LAB_627f5a88;
        piVar3[1] = 0;
        FUN_627f3e70(piVar3 + 2,10);
        FUN_627f3e70(piVar3 + 9,10);
        FUN_627f3e70(piVar3 + 0x10,10);
        piVar3[0x17] = 0;
        piVar3[0x18] = 0;
        piVar3[0x19] = 0;
        piVar3[0x1a] = 0;
        *piVar3 = (int)&PTR_FUN_627f5a48;
      }
      *param_2 = piVar3;
      (**(code **)(*piVar3 + 4))(piVar3);
      param_1 = (int *)((int)param_1 + 5);
      do {
        while ((iVar2 = isspace((int)(char)*param_1), iVar2 != 0 || ((char)*param_1 == ','))) {
          if ((char)*param_1 == '\0') goto LAB_627f2ad9;
          param_1 = (int *)((int)param_1 + 1);
        }
        if ((char)*param_1 == '\0') break;
        iVar2 = FUN_627f28d0((uint *)&param_1,local_20c,local_10c);
        if (iVar2 == 0) {
          bVar1 = true;
        }
        else {
          FUN_627f1e90((int *)*param_2,local_20c,local_10c);
        }
      } while (!bVar1);
LAB_627f2ad9:
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
      }
      return 0;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return 0x80004005;
}


