/* Module: rmme3260.dll
   Function: FUN_6624cd60
   Address: 6624cd60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6624cd60(int param_1)

{
  undefined4 *puVar1;
  UINT UVar2;
  int iVar3;
  
  if ((DAT_6627e554 == 0) && (UVar2 = FUN_6624ccf0(), UVar2 == 0)) {
    return -0x7fffbffb;
  }
  puVar1 = (undefined4 *)(param_1 + 0x8bc);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x8ac) + 0x14))
                    (*(int **)(param_1 + 0x8ac),4,&DAT_6627dd38,puVar1,0);
  if ((iVar3 == 0) &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x8b0) + 0x7c))(*(int **)(param_1 + 0x8b0),*puVar1),
     iVar3 != 0)) {
    (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
  }
  return iVar3;
}


