/* Module: basc3260.dll
   Function: FUN_627f1a10
   Address: 627f1a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f1a10(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *local_c;
  int *local_8;
  
  piVar2 = param_1;
  if ((param_1[0x17] != 0) && (param_2 != (int *)0x0)) {
    if (param_1[0x14] == 0) {
      (**(code **)(*param_2 + 0x30))(param_2,s_Realm_627f60a0,param_1 + 0x14);
    }
    piVar1 = piVar2 + 0x11;
    if (piVar2[0x11] == 0) {
      (**(code **)(*param_2 + 0x30))(param_2,s_DatabaseID_627f6094,piVar1);
      if (*piVar1 != 0) {
        param_1 = (int *)0x0;
        local_8 = (int *)0x0;
        param_2 = (int *)0x0;
        local_c = (int *)0x0;
        (*(code *)**(undefined4 **)piVar2[0x17])((undefined4 *)piVar2[0x17],&DAT_627f5640,&local_c);
        (**(code **)(*local_c + 0xc))(local_c,&DAT_627f5700,&param_1);
        (**(code **)*param_1)(param_1,&DAT_627f5700,&local_8);
        (**(code **)(*local_8 + 0xc))(local_8,*piVar1,&param_2);
        (**(code **)*param_2)(param_2,&DAT_627f5750,piVar2 + 0xe);
        (**(code **)*param_2)(param_2,&DAT_627f5710,piVar2 + 0xd);
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


