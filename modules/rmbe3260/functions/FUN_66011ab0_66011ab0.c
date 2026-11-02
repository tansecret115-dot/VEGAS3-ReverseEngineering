/* Module: rmbe3260.dll
   Function: FUN_66011ab0
   Address: 66011ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66011ab0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_4c [3];
  undefined1 local_40 [8];
  undefined *local_38;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  piVar1 = param_2;
  local_8 = (int *)0x0;
  iVar2 = (*(code *)**(undefined4 **)param_2[1])((undefined4 *)param_2[1],&DAT_66065b08,&local_8);
  piVar4 = local_4c;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_4c[2] = param_1[0x22];
  local_4c[0] = 0x34;
  local_38 = PTR_s_Audio_Stream_6606cc38;
  local_4c[1] = 1;
  if (-1 < iVar2) {
    (**(code **)(*local_8 + 0x10))(local_8,local_40);
  }
  param_2 = (int *)0x0;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)(param_1[2] + 0x10) + 0x10))((int *)(param_1[2] + 0x10),&param_2);
  if (-1 < iVar2) {
    (**(code **)(*param_2 + 0x14))(param_2,&local_c);
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
      param_2 = (int *)0x0;
    }
  }
  if ((param_1[7] == 0) && (local_c == 0)) {
    local_1c = 0;
  }
  else if ((param_1[7] != 0) || (local_1c = 2, local_c == 0)) {
    local_1c = 1;
  }
  local_10 = 0;
  local_18 = 0;
  local_14 = 0;
  iVar2 = (**(code **)(*param_1 + 0x8c))(param_1,piVar1,&local_10,&local_18,&local_14);
  if (-1 < iVar2) {
    local_2c = local_14 & 0xffff;
    local_28 = local_18 & 0xffff;
    local_30 = local_10;
    if (-1 < iVar2) {
      iVar2 = FUN_6603bf20((void *)param_1[0x13],piVar1,(int)local_4c);
      iVar2 = FUN_660157a0(iVar2);
      if (-1 < iVar2) {
        if (*piVar1 == 0) {
          if ((-1 < iVar2) && (*piVar1 == 0)) {
            iVar2 = -0x7ff8ffa9;
          }
        }
        else {
          piVar1[0xf] = local_24;
          if ((uint)param_1[0x28] < local_24) {
            param_1[0x28] = local_24;
          }
          iVar2 = FUN_6603bf80((int *)*piVar1,piVar1 + 4);
          FUN_660157a0(iVar2);
          iVar2 = FUN_6603bfc0((int *)*piVar1,piVar1 + 0xd,piVar1 + 0xb);
          iVar2 = FUN_660157a0(iVar2);
        }
      }
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar2;
}


