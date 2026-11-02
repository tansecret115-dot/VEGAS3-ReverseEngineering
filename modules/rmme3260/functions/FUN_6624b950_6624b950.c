/* Module: rmme3260.dll
   Function: FUN_6624b950
   Address: 6624b950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624b950(uint *param_1,uint *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  BOOL BVar3;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_3 != (int *)0x0)) &&
     (((param_4 != (int *)0x0 && (param_1[1] != 0)) &&
      (((*param_1 & 0x100) != 0 && ((*param_2 & 0x100) != 0)))))) {
    piVar1 = (int *)param_2[0x10e];
    if ((*param_2 & 1) == 0) {
      if (piVar1 != (int *)0x0) {
        BVar3 = FUN_6624b9d0((int)param_1,(int)piVar1,param_4,param_3);
        if (BVar3 != 0) {
          return 0;
        }
      }
    }
    else if (piVar1 != (int *)0x0) {
      uVar2 = FUN_6624aeb0((int *)param_1,piVar1,param_4,param_3);
      return uVar2;
    }
    return 0x80004005;
  }
  return 0x80070057;
}


