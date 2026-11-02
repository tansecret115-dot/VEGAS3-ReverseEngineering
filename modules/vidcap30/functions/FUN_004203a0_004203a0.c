/* Module: vidcap30.exe
   Function: FUN_004203a0
   Address: 004203a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004203a0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = param_2;
  iVar1 = param_1;
  iVar3 = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_1 == 0) {
    return -0x7ff8ffa9;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    param_2 = (undefined4 *)0x0;
    param_1 = 1;
    iVar3 = FUN_00420460(&param_2,3,0,0,0,iVar1,&local_8,&param_1);
    if (iVar3 < 0) {
      return iVar3;
    }
    *puVar2 = local_8;
  }
  puVar2 = param_3;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    param_2 = (undefined4 *)0x1;
    param_1 = 1;
    iVar3 = FUN_00420460(&param_2,3,0,0,0,iVar1,&local_4,&param_1);
    if (-1 < iVar3) {
      *puVar2 = local_4;
    }
  }
  return iVar3;
}


