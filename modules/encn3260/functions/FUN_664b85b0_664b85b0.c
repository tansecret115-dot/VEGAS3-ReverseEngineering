/* Module: encn3260.dll
   Function: FUN_664b85b0
   Address: 664b85b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_664b85b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x22e;
  iVar2 = (**(code **)(*(int *)param_1[0x22b] + 0x10))((int *)param_1[0x22b],0,puVar1,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1,0,*param_1);
    if ((iVar2 == 0) &&
       (iVar2 = (**(code **)(*(int *)param_1[0x22c] + 0x70))((int *)param_1[0x22c],*puVar1),
       iVar2 == 0)) {
      return 0;
    }
    (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
  }
  return iVar2;
}


