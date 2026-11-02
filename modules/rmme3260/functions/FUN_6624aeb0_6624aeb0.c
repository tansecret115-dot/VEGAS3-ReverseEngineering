/* Module: rmme3260.dll
   Function: FUN_6624aeb0
   Address: 6624aeb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624aeb0(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_88 [25];
  tagRECT local_24;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar4 = local_88;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_88[0] = 100;
  local_88[1] = 8;
  GetWindowRect((HWND)param_1[1],&local_24);
  uVar3 = 0x80004005;
  local_14 = *param_4 + local_24.left;
  local_c = param_4[2] + local_24.left;
  local_10 = param_4[1] + local_24.top;
  local_8 = param_4[3] + local_24.top;
  if (param_1[0x2da] == 0) {
    FUN_6624c040(param_1);
  }
  piVar1 = (int *)param_1[0x2da];
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,&local_14,param_2,param_3,0x1000000,local_88);
    uVar3 = 0;
    if (iVar2 != 0) {
      (**(code **)(*param_2 + 0x6c))(param_2);
      (**(code **)(*(int *)param_1[0x2da] + 0x6c))((int *)param_1[0x2da]);
      uVar3 = (**(code **)(*(int *)param_1[0x2da] + 0x14))
                        ((int *)param_1[0x2da],&local_14,param_2,param_3,0x1000000,local_88);
    }
  }
  return uVar3;
}


