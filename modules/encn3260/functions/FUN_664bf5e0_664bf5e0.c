/* Module: encn3260.dll
   Function: FUN_664bf5e0
   Address: 664bf5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_664bf5e0(int *param_1)

{
  bool bVar1;
  int iVar2;
  void *this;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *this_00;
  int local_58 [7];
  undefined4 local_3c [5];
  int local_28 [4];
  char *local_18 [3];
  int local_c;
  
  this_00 = (undefined4 *)0x0;
  FUN_664c4610(local_3c,param_1);
  FUN_664c4750(local_58,local_3c);
  FUN_664c4790(local_58,local_18,&DAT_664ef768);
  bVar1 = false;
  iVar5 = 0;
  if (0 < *(int *)(local_18[0] + -8)) {
    do {
      iVar2 = isspace((int)local_18[0][iVar5]);
      if (iVar2 == 0) {
        bVar1 = true;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_18[0] + -8));
  }
  if (bVar1) {
    this = operator_new(0x28);
    if (this == (void *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      this_00 = FUN_664be3d0(this,local_18[0]);
    }
    piVar3 = FUN_664c4790(local_58,local_28,&DAT_664e3610);
    FUN_664bb570(local_18,piVar3);
    local_c = piVar3[3];
    FUN_664bb3e0(local_28);
    iVar5 = _stricmp((char *)this_00[1],s_Range_664e2470);
    if (iVar5 == 0) {
      FUN_664beee0(local_18[0],this_00);
    }
    else {
      iVar5 = _stricmp((char *)this_00[1],s_WWW_Authenticate_664ef994);
      if (iVar5 != 0) {
        iVar5 = _stricmp((char *)this_00[1],s_Authenticate_664ef984);
        if (iVar5 != 0) {
          iVar5 = _stricmp((char *)this_00[1],s_Authorization_664ef974);
          if (iVar5 != 0) {
            iVar5 = _stricmp((char *)this_00[1],s_PEP_Info_664ef968);
            if (iVar5 != 0) {
              iVar5 = _stricmp((char *)this_00[1],s_C_PEP_Info_664ef95c);
              if (iVar5 != 0) {
                iVar5 = _stricmp((char *)this_00[1],s_BackChannel_664e25b0);
                if (iVar5 == 0) {
                  FUN_664bf310(local_18[0],this_00);
                }
                else {
                  iVar5 = _stricmp((char *)this_00[1],s_Alert_664e2540);
                  if (iVar5 == 0) {
                    FUN_664bf3a0(local_18[0],this_00);
                  }
                  else {
                    FUN_664bf500(local_18[0],this_00);
                  }
                }
                goto LAB_664bf7b7;
              }
            }
            FUN_664bf1e0(local_18[0],this_00);
            goto LAB_664bf7b7;
          }
        }
      }
      puVar4 = operator_new(0x1c);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_664be170(puVar4);
      }
      if (puVar4 != (undefined4 *)0x0) {
        FUN_664be260(puVar4,local_18[0]);
        FUN_664be450(this_00,puVar4);
      }
    }
  }
LAB_664bf7b7:
  FUN_664bb3e0((int *)local_18);
  FUN_664c4770(local_58);
  FUN_664c0180(local_3c);
  return this_00;
}


