/* Module: rmto3260.dll
   Function: FUN_662cc680
   Address: 662cc680
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662cc680(int param_1,int param_2)

{
  int iVar1;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  if (param_2 == 1) {
    iVar1 = FUN_662cc810(&local_c);
  }
  else if (param_2 == 2) {
    iVar1 = FUN_662cde80(&local_c);
  }
  else {
    iVar1 = -0x7ffbfffb;
  }
  if (-1 < iVar1) {
    iVar1 = (**(code **)*local_c)(local_c,&DAT_66306a48,&local_8);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_8 + 0xc))(local_8,*(undefined4 *)(param_1 + 0x14));
  }
  if ((((-1 < iVar1) &&
       (iVar1 = (**(code **)(*local_8 + 0x10))(local_8,*(undefined4 *)(param_1 + 0x18)), -1 < iVar1)
       ) && (iVar1 = (**(code **)(*local_8 + 0x14))(local_8,*(undefined4 *)(param_1 + 0x1c)),
            -1 < iVar1)) &&
     (iVar1 = (**(code **)(*local_8 + 0x18))(local_8,*(undefined4 *)(param_1 + 0x20)), -1 < iVar1))
  {
    iVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar1;
}


