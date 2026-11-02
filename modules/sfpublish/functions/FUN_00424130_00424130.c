/* Module: sfpublish.dll
   Function: FUN_00424130
   Address: 00424130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00424130(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *unaff_ESI;
  undefined4 **ppuVar2;
  undefined4 *local_4;
  
  ppuVar2 = &local_4;
  *param_3 = 0;
  local_4 = (undefined4 *)0x0;
  iVar1 = (**(code **)*param_1)(param_1,&DAT_00436328,&local_4);
  if (-1 < iVar1) {
    iVar1 = (**(code **)*local_4)(local_4,&DAT_00436328);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*(int *)register0x00000010 + 0x54))(register0x00000010,ppuVar2,param_3);
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    (**(code **)(*(int *)register0x00000010 + 8))(register0x00000010);
  }
  return iVar1;
}


