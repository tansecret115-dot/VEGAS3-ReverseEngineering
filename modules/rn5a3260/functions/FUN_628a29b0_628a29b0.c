/* Module: rn5a3260.dll
   Function: FUN_628a29b0
   Address: 628a29b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a29b0(int *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  char local_40c [1024];
  int *local_c;
  int *local_8;
  
  uVar7 = 0x80004005;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  *param_3 = 0;
  if (((param_2 != (int *)0x0) &&
      (iVar2 = (**(code **)(*param_1 + 0x30))(param_1,&DAT_628a7284,&local_c), -1 < iVar2)) &&
     (iVar2 = (**(code **)(*param_1 + 0x30))(param_1,s_Nonce_628a727c,&local_8), -1 < iVar2)) {
    uVar7 = (**(code **)(*local_c + 0x1c))(local_c);
    uVar7 = (**(code **)(*local_8 + 0x1c))(local_8,uVar7);
    uVar7 = (**(code **)(*param_2 + 0x1c))(param_2,uVar7);
    sprintf(local_40c,s____200s___200s___200sCopyright___628a7234,uVar7);
    puVar3 = operator_new(0x28);
    if (puVar3 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_628a3f00(puVar3);
    }
    *param_3 = piVar4;
    (**(code **)(*piVar4 + 4))(piVar4);
    (**(code **)(*(int *)*param_3 + 0x14))((int *)*param_3,0x40);
    pcVar5 = (char *)(**(code **)(*(int *)*param_3 + 0x1c))((int *)*param_3);
    uVar6 = 0xffffffff;
    pcVar8 = local_40c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_628a3310(pcVar5,(undefined4 *)local_40c,~uVar6 - 1);
    uVar7 = 0;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return uVar7;
}


