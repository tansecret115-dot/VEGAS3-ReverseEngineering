/* Module: rmto3260.dll
   Function: FUN_662de0a0
   Address: 662de0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662de0a0(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_1c [3];
  int local_10;
  int local_c;
  int *local_8;
  
  piVar2 = param_1;
  bVar1 = false;
  local_8 = (int *)0x0;
  (**(code **)*param_1)(param_1,&DAT_663066d8,&local_8);
  local_c = 0;
  iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2,s_Do_Not_Alter_Clip_ID_6630b1e8,&local_c);
  if ((iVar3 < 0) || (local_c == 0)) {
    param_1 = (int *)0x0;
    iVar3 = (**(code **)(*piVar2 + 0x30))(piVar2,s_File_ID_6630af30,&param_1);
    if ((-1 < iVar3) && (iVar3 = (**(code **)(*param_1 + 0x18))(param_1), iVar3 != 0)) {
      bVar1 = true;
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      param_1 = (int *)0x0;
    }
    local_10 = 0;
    iVar4 = (**(code **)(*piVar2 + 0x10))(piVar2,s_0fIndexable_6630b1da + 2,&local_10);
    iVar3 = 0;
    if (-1 < iVar4) {
      iVar3 = local_10;
    }
    if ((iVar3 == 0) || ((bVar1 && (param_2 == 0)))) {
      if ((bVar1) && (iVar3 == 0)) {
        if (local_8 == (int *)0x0) {
          return 0;
        }
        (**(code **)(*local_8 + 0x18))(local_8,s_File_ID_6630af30);
      }
    }
    else {
      FUN_662eefd0(local_1c);
      iVar3 = FUN_662de200(local_1c);
      if (-1 < iVar3) {
        puVar5 = operator_new(0x28);
        if (puVar5 == (undefined4 *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)FUN_662eeb70(puVar5);
        }
        (**(code **)(*piVar6 + 4))(piVar6);
        (**(code **)(*piVar6 + 0x10))(piVar6,local_1c[0],*(int *)(local_1c[0] + -8) + 1);
        (**(code **)(*piVar2 + 0x2c))(piVar2,s_File_ID_6630af30,piVar6);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(piVar6);
        }
      }
      FUN_662ef0f0(local_1c);
    }
  }
  if ((local_8 != (int *)0x0) &&
     ((**(code **)(*local_8 + 0xc))(local_8,s_Do_Not_Alter_Clip_ID_6630b1e8), local_8 != (int *)0x0)
     ) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return 0;
}


