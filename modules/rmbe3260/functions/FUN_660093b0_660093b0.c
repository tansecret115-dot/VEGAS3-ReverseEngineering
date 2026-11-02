/* Module: rmbe3260.dll
   Function: FUN_660093b0
   Address: 660093b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_660093b0(int param_1)

{
  int iVar1;
  int *piVar2;
  char *_Str;
  int *local_8;
  
  local_8 = (int *)0x0;
  piVar2 = *(int **)(param_1 + 0x30);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x38))(piVar2,0);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x20))(*(int **)(param_1 + 0x30));
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x50) = 2;
      piVar2 = (int *)FUN_66051b60("RealNetworks",(byte *)"RealPlayer",6,0);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))("ProxySupport",&local_8);
        if (local_8 != (int *)0x0) {
          _Str = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
          atoi(_Str);
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
          }
        }
        (**(code **)*piVar2)(1);
      }
      if (param_1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_1 + 0x10;
      }
      (**(code **)(**(int **)(param_1 + 0x30) + 0x2c))(*(int **)(param_1 + 0x30),iVar1);
      (**(code **)(**(int **)(param_1 + 0x30) + 0x24))(*(int **)(param_1 + 0x30),0);
      return 1;
    }
  }
  return 0;
}


