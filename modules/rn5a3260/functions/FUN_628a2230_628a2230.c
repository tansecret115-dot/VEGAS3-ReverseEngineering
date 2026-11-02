/* Module: rn5a3260.dll
   Function: FUN_628a2230
   Address: 628a2230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 __fastcall FUN_628a2230(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *local_20 [3];
  int local_14 [3];
  int *local_8;
  
  if ((*(int *)(param_1 + 0x68) == 0) && (*(int *)(param_1 + 100) != 0)) {
    FUN_628a5490(local_20);
    FUN_628a5660(local_20,s_RN5_realm___628a71f8);
    pcVar2 = (char *)(**(code **)(**(int **)(param_1 + 100) + 0x1c))(*(int **)(param_1 + 100));
    local_14[1] = 0;
    local_14[2] = 0;
    FUN_628a5410(local_14);
    FUN_628a5660(local_14,pcVar2);
    FUN_628a57c0(local_20,local_14);
    FUN_628a5560(local_14);
    FUN_628a5780(local_20,&DAT_628a71f4);
    FUN_628a5780(local_20,s___nonce___628a71e8);
    local_8 = (int *)0x0;
    (**(code **)**(undefined4 **)(param_1 + 0x78))
              (*(undefined4 **)(param_1 + 0x78),&DAT_628a64c0,&local_8);
    if (local_8 == (int *)0x0) {
      FUN_628a5780(local_20,s_Crappy_Nonce_628a71d8);
    }
    else {
      puVar3 = (undefined4 *)(**(code **)(*local_8 + 0x18))(local_8,local_14 + 1);
      uVar1 = puVar3[1];
      FUN_628a57f0(local_20,*puVar3);
      FUN_628a57f0(local_20,uVar1);
    }
    FUN_628a5780(local_20,&DAT_628a71f4);
    piVar4 = (int *)FUN_628a2ff0(param_1);
    if (piVar4 == (int *)0x0) {
      FUN_628a5560((int *)local_20);
      return 0x80040009;
    }
    FUN_628a1ee0(piVar4,s_WWW_Authenticate_628a70a8,local_20[0]);
    (**(code **)(*piVar4 + 8))(piVar4);
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
    FUN_628a5560((int *)local_20);
  }
  (**(code **)(**(int **)(param_1 + 0x54) + 0xc))
            (*(int **)(param_1 + 0x54),0,*(undefined4 *)(param_1 + 0x58));
  piVar4 = *(int **)(param_1 + 0x58);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  piVar4 = *(int **)(param_1 + 0x74);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  piVar4 = *(int **)(param_1 + 0x54);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return 0;
}


