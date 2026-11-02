/* Module: rn5a3260.dll
   Function: FUN_628a1a50
   Address: 628a1a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a1a50(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *local_c;
  int *local_8;
  
  piVar2 = param_1;
  if ((param_1[0x18] != 0) && (param_2 != (int *)0x0)) {
    if (param_1[0x13] == 0) {
      (**(code **)(*param_2 + 0x30))(param_2,s_Realm_628a709c,param_1 + 0x13);
    }
    piVar1 = piVar2 + 0x11;
    if (piVar2[0x11] == 0) {
      (**(code **)(*param_2 + 0x30))(param_2,s_DatabaseID_628a7090,piVar1);
      if (*piVar1 != 0) {
        param_1 = (int *)0x0;
        local_8 = (int *)0x0;
        param_2 = (int *)0x0;
        local_c = (int *)0x0;
        (*(code *)**(undefined4 **)piVar2[0x18])((undefined4 *)piVar2[0x18],&DAT_628a6640,&local_c);
        (**(code **)(*local_c + 0xc))(local_c,&DAT_628a6700,&param_1);
        (**(code **)*param_1)(param_1,&DAT_628a6700,&local_8);
        (**(code **)(*local_8 + 0xc))(local_8,*piVar1,&param_2);
        (**(code **)*param_2)(param_2,&DAT_628a6750,piVar2 + 0xe);
        (**(code **)*param_2)(param_2,&DAT_628a6710,piVar2 + 0xd);
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
          param_1 = (int *)0x0;
        }
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
        if (param_2 != (int *)0x0) {
          (**(code **)(*param_2 + 8))(param_2);
          param_2 = (int *)0x0;
        }
        if (local_c != (int *)0x0) {
          (**(code **)(*local_c + 8))(local_c);
        }
      }
    }
    return 0;
  }
  return 0x80040009;
}


