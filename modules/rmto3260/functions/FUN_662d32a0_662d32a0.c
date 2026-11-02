/* Module: rmto3260.dll
   Function: FUN_662d32a0
   Address: 662d32a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d32a0(int *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int *local_8;
  
  piVar4 = param_1;
  iVar6 = 0;
  bVar3 = false;
  if ((param_1[5] == 0) || (param_1[9] == 0)) {
    iVar6 = -0x7ffbfff9;
  }
  if (-1 < iVar6) {
    iVar6 = (**(code **)(*param_1 + 0x3c))(param_1);
  }
  bVar2 = false;
  if ((-1 < iVar6) &&
     (iVar6 = (**(code **)(*(int *)piVar4[0xe] + 0x30))((int *)piVar4[0xe],(int)&param_1 + 2),
     -1 < iVar6)) {
    iVar5 = 0;
    bVar2 = false;
    if (param_1._2_2_ != 0) {
      do {
        if (iVar6 < 0) break;
        iVar6 = (**(code **)(*(int *)piVar4[0xe] + 0x38))((int *)piVar4[0xe],iVar5,&local_8);
        if ((-1 < iVar6) && (*(int *)((int)local_8 + 0x16) != 0)) {
          FUN_662d0dc0(&local_c,*local_8,(char *)&local_c,s_application_x_pn_realevent_6630a0bc);
          if (local_c == 0) {
            iVar6 = FUN_662d0dc0((void *)*local_8,*local_8,(char *)&local_c,
                                 s_application_x_pn_imagemap_6630a0fc);
            if ((local_c != 0) &&
               (iVar6 = (**(code **)(*piVar4 + 0x34))(piVar4,local_8), -1 < iVar6)) {
              bVar3 = true;
            }
          }
          else {
            iVar6 = (**(code **)(*piVar4 + 0x30))(piVar4,local_8);
            if (-1 < iVar6) {
              bVar2 = true;
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while ((ushort)iVar5 < param_1._2_2_);
    }
  }
  if (bVar2) {
    if (!bVar3) {
      iVar6 = -0x7ffbfc2d;
    }
  }
  else if (bVar3) {
    iVar6 = -0x7ffbfc2e;
  }
  else {
    iVar6 = -0x7ffbfc2f;
  }
  piVar1 = (int *)piVar4[0xe];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar4[0xe] = 0;
  }
  return iVar6;
}


