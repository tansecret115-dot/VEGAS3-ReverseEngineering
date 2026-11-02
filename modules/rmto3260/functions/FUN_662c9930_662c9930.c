/* Module: rmto3260.dll
   Function: FUN_662c9930
   Address: 662c9930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c9930(undefined4 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  int *local_1c;
  int local_18;
  uint local_14;
  int *local_10;
  uint local_c;
  ushort local_6;
  
  iVar3 = (**(code **)(*param_2 + 0x30))(param_2,&local_6);
  piVar1 = param_3;
  local_18 = 0;
  if (local_6 != 0) {
    do {
      if (iVar3 < 0) {
        return iVar3;
      }
      (**(code **)(*param_2 + 0x38))(param_2,local_18,&local_10);
      iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,(int)&param_3 + 2);
      iVar4 = 0;
      if (-1 < iVar3) {
        local_c = 0;
        if (param_3._2_2_ != 0) {
          do {
            if (local_c != 0) goto LAB_662c9a1c;
            if (iVar3 < 0) break;
            iVar3 = (**(code **)(*piVar1 + 0x38))(piVar1,iVar4,&local_1c);
            if (-1 < iVar3) {
              bVar2 = FUN_662c7240(local_10,local_1c);
              local_c = CONCAT31(extraout_var,bVar2);
            }
            iVar4 = iVar4 + 1;
          } while ((ushort)iVar4 < param_3._2_2_);
        }
        if (local_c == 0) {
          local_c = 0;
          local_14 = 0;
          FUN_662d0ed0((void *)*local_10,*local_10,&local_c);
          FUN_662d0e40((void *)*local_10,*local_10,&local_14);
          if (local_c == 0) {
            iVar3 = (-(uint)(local_14 != 0) & 0xe) + 0x800403c9;
          }
          else {
            iVar3 = -0x7ffbfc28;
          }
        }
      }
LAB_662c9a1c:
      local_18 = local_18 + 1;
    } while ((ushort)local_18 < local_6);
  }
  return iVar3;
}


