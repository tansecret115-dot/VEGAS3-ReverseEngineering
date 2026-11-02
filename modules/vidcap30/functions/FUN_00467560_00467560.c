/* Module: vidcap30.exe
   Function: FUN_00467560
   Address: 00467560
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00467560(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int iStack_8;
  
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0x18))();
  iStack_8 = 0;
  if (iVar3 < 1) {
    return 0;
  }
  param_2 = param_2 - (int)param_3;
  do {
    iVar4 = (**(code **)(*param_1 + 0x1c))(iStack_8);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) {
      puVar1 = (undefined4 *)(iVar4 + 0xc);
      iVar5 = param_2 + (int)param_3;
      iVar4 = (**(code **)*puVar1)(puVar1,&DAT_00586040,iVar5);
      if ((-1 < iVar4) || (iVar4 = (**(code **)*puVar1)(puVar1,&DAT_00586020,iVar5), -1 < iVar4)) {
        iVar4 = (**(code **)*puVar1)(puVar1,&DAT_00592850,param_3);
        if (-1 < iVar4) {
          iVar4 = (**(code **)(*(int *)*param_3 + 0xc))((int *)*param_3);
          if (iVar4 < 0) {
            (**(code **)(*(int *)*param_3 + 8))((int *)*param_3);
          }
          else {
            local_c = local_c + 1;
            param_3 = param_3 + 1;
          }
          if (-1 < iVar4) goto LAB_00467616;
        }
        piVar2 = *(int **)(param_2 + (int)param_3);
        (**(code **)(*piVar2 + 8))(piVar2);
      }
    }
LAB_00467616:
    iStack_8 = iStack_8 + 1;
    if (iVar3 <= iStack_8) {
      return local_c;
    }
  } while( true );
}


